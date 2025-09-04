; ModuleID = '<stdin>'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@A = common global [100 x [100 x double]] zeroinitializer, align 16
@B = common global [100 x [100 x double]] zeroinitializer, align 16
@C = common global [100 x [100 x double]] zeroinitializer, align 16

; Function Attrs: nounwind uwtable
define void @compute_row(i32 %i) #0 {
bb:
  br label %bb1

bb1:                                              ; preds = %bb25, %bb
  %j.0 = phi i32 [ 0, %bb ], [ %tmp26, %bb25 ]
  %tmp = icmp slt i32 %j.0, 100
  br i1 %tmp, label %bb2, label %bb27

bb2:                                              ; preds = %bb1
  br label %bb3

bb3:                                              ; preds = %bb18, %bb2
  %sum.0 = phi double [ 0.000000e+00, %bb2 ], [ %tmp17, %bb18 ]
  %k.0 = phi i32 [ 0, %bb2 ], [ %tmp19, %bb18 ]
  %tmp4 = icmp slt i32 %k.0, 100
  br i1 %tmp4, label %bb5, label %bb20

bb5:                                              ; preds = %bb3
  %tmp6 = sext i32 %k.0 to i64
  %tmp7 = sext i32 %i to i64
  %tmp8 = getelementptr inbounds [100 x [100 x double]]* @A, i32 0, i64 %tmp7
  %tmp9 = getelementptr inbounds [100 x double]* %tmp8, i32 0, i64 %tmp6
  %tmp10 = load double* %tmp9, align 8
  %tmp11 = sext i32 %j.0 to i64
  %tmp12 = sext i32 %k.0 to i64
  %tmp13 = getelementptr inbounds [100 x [100 x double]]* @B, i32 0, i64 %tmp12
  %tmp14 = getelementptr inbounds [100 x double]* %tmp13, i32 0, i64 %tmp11
  %tmp15 = load double* %tmp14, align 8
  %tmp16 = fmul double %tmp10, %tmp15
  %tmp17 = fadd double %sum.0, %tmp16
  br label %bb18

bb18:                                             ; preds = %bb5
  %tmp19 = add nsw i32 %k.0, 1
  br label %bb3

bb20:                                             ; preds = %bb3
  %tmp21 = sext i32 %j.0 to i64
  %tmp22 = sext i32 %i to i64
  %tmp23 = getelementptr inbounds [100 x [100 x double]]* @C, i32 0, i64 %tmp22
  %tmp24 = getelementptr inbounds [100 x double]* %tmp23, i32 0, i64 %tmp21
  store double %sum.0, double* %tmp24, align 8
  br label %bb25

bb25:                                             ; preds = %bb20
  %tmp26 = add nsw i32 %j.0, 1
  br label %bb1

bb27:                                             ; preds = %bb1
  ret void
}

; Function Attrs: nounwind uwtable
define void @matrix_multiply_tasks() #0 {
bb:
  br label %bb1

bb1:                                              ; preds = %bb25, %bb
  %i.0 = phi i32 [ 0, %bb ], [ %tmp26, %bb25 ]
  %tmp = icmp slt i32 %i.0, 100
  br i1 %tmp, label %bb2, label %bb27

bb2:                                              ; preds = %bb1
  br label %bb3

bb3:                                              ; preds = %bb22, %bb2
  %j.0 = phi i32 [ 0, %bb2 ], [ %tmp23, %bb22 ]
  %tmp4 = icmp slt i32 %j.0, 100
  br i1 %tmp4, label %bb5, label %bb24

bb5:                                              ; preds = %bb3
  %tmp6 = add nsw i32 %i.0, %j.0
  %tmp7 = sitofp i32 %tmp6 to double
  %tmp8 = sext i32 %j.0 to i64
  %tmp9 = sext i32 %i.0 to i64
  %tmp10 = getelementptr inbounds [100 x [100 x double]]* @A, i32 0, i64 %tmp9
  %tmp11 = getelementptr inbounds [100 x double]* %tmp10, i32 0, i64 %tmp8
  store double %tmp7, double* %tmp11, align 8
  %tmp12 = sub nsw i32 %i.0, %j.0
  %tmp13 = sitofp i32 %tmp12 to double
  %tmp14 = sext i32 %j.0 to i64
  %tmp15 = sext i32 %i.0 to i64
  %tmp16 = getelementptr inbounds [100 x [100 x double]]* @B, i32 0, i64 %tmp15
  %tmp17 = getelementptr inbounds [100 x double]* %tmp16, i32 0, i64 %tmp14
  store double %tmp13, double* %tmp17, align 8
  %tmp18 = sext i32 %j.0 to i64
  %tmp19 = sext i32 %i.0 to i64
  %tmp20 = getelementptr inbounds [100 x [100 x double]]* @C, i32 0, i64 %tmp19
  %tmp21 = getelementptr inbounds [100 x double]* %tmp20, i32 0, i64 %tmp18
  store double 0.000000e+00, double* %tmp21, align 8
  br label %bb22

bb22:                                             ; preds = %bb5
  %tmp23 = add nsw i32 %j.0, 1
  br label %bb3

bb24:                                             ; preds = %bb3
  br label %bb25

bb25:                                             ; preds = %bb24
  %tmp26 = add nsw i32 %i.0, 1
  br label %bb1

bb27:                                             ; preds = %bb1
  br label %bb28

bb28:                                             ; preds = %bb31, %bb27
  %i1.0 = phi i32 [ 0, %bb27 ], [ %tmp32, %bb31 ]
  %tmp29 = icmp slt i32 %i1.0, 100
  br i1 %tmp29, label %bb30, label %bb33

bb30:                                             ; preds = %bb28
  call void @compute_row(i32 %i1.0)
  br label %bb31

bb31:                                             ; preds = %bb30
  %tmp32 = add nsw i32 %i1.0, 1
  br label %bb28

bb33:                                             ; preds = %bb28
  ret void
}

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
bb:
  call void @matrix_multiply_tasks()
  ret i32 0
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.4 (tags/RELEASE_34/final)"}
