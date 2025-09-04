; ModuleID = '<stdin>'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@A = common global [100 x [100 x double]] zeroinitializer, align 16
@B = common global [100 x [100 x double]] zeroinitializer, align 16
@C = common global [100 x [100 x double]] zeroinitializer, align 16

; Function Attrs: nounwind uwtable
define void @matrix_multiply() #0 {
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

bb28:                                             ; preds = %bb59, %bb27
  %i.1 = phi i32 [ 0, %bb27 ], [ %tmp60, %bb59 ]
  %tmp29 = icmp slt i32 %i.1, 100
  br i1 %tmp29, label %bb30, label %bb61

bb30:                                             ; preds = %bb28
  br label %bb31

bb31:                                             ; preds = %bb56, %bb30
  %j.1 = phi i32 [ 0, %bb30 ], [ %tmp57, %bb56 ]
  %tmp32 = icmp slt i32 %j.1, 100
  br i1 %tmp32, label %bb33, label %bb58

bb33:                                             ; preds = %bb31
  br label %bb34

bb34:                                             ; preds = %bb49, %bb33
  %sum.0 = phi double [ 0.000000e+00, %bb33 ], [ %tmp48, %bb49 ]
  %k.0 = phi i32 [ 0, %bb33 ], [ %tmp50, %bb49 ]
  %tmp35 = icmp slt i32 %k.0, 100
  br i1 %tmp35, label %bb36, label %bb51

bb36:                                             ; preds = %bb34
  %tmp37 = sext i32 %k.0 to i64
  %tmp38 = sext i32 %i.1 to i64
  %tmp39 = getelementptr inbounds [100 x [100 x double]]* @A, i32 0, i64 %tmp38
  %tmp40 = getelementptr inbounds [100 x double]* %tmp39, i32 0, i64 %tmp37
  %tmp41 = load double* %tmp40, align 8
  %tmp42 = sext i32 %j.1 to i64
  %tmp43 = sext i32 %k.0 to i64
  %tmp44 = getelementptr inbounds [100 x [100 x double]]* @B, i32 0, i64 %tmp43
  %tmp45 = getelementptr inbounds [100 x double]* %tmp44, i32 0, i64 %tmp42
  %tmp46 = load double* %tmp45, align 8
  %tmp47 = fmul double %tmp41, %tmp46
  %tmp48 = fadd double %sum.0, %tmp47
  br label %bb49

bb49:                                             ; preds = %bb36
  %tmp50 = add nsw i32 %k.0, 1
  br label %bb34

bb51:                                             ; preds = %bb34
  %tmp52 = sext i32 %j.1 to i64
  %tmp53 = sext i32 %i.1 to i64
  %tmp54 = getelementptr inbounds [100 x [100 x double]]* @C, i32 0, i64 %tmp53
  %tmp55 = getelementptr inbounds [100 x double]* %tmp54, i32 0, i64 %tmp52
  store double %sum.0, double* %tmp55, align 8
  br label %bb56

bb56:                                             ; preds = %bb51
  %tmp57 = add nsw i32 %j.1, 1
  br label %bb31

bb58:                                             ; preds = %bb31
  br label %bb59

bb59:                                             ; preds = %bb58
  %tmp60 = add nsw i32 %i.1, 1
  br label %bb28

bb61:                                             ; preds = %bb28
  ret void
}

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
bb:
  call void @matrix_multiply()
  br label %bb1

bb1:                                              ; preds = %bb15, %bb
  %i.0 = phi i32 [ 0, %bb ], [ %tmp16, %bb15 ]
  %checksum.0 = phi double [ 0.000000e+00, %bb ], [ %checksum.1, %bb15 ]
  %tmp = icmp slt i32 %i.0, 100
  br i1 %tmp, label %bb2, label %bb17

bb2:                                              ; preds = %bb1
  br label %bb3

bb3:                                              ; preds = %bb12, %bb2
  %checksum.1 = phi double [ %checksum.0, %bb2 ], [ %tmp11, %bb12 ]
  %j.0 = phi i32 [ 0, %bb2 ], [ %tmp13, %bb12 ]
  %tmp4 = icmp slt i32 %j.0, 100
  br i1 %tmp4, label %bb5, label %bb14

bb5:                                              ; preds = %bb3
  %tmp6 = sext i32 %j.0 to i64
  %tmp7 = sext i32 %i.0 to i64
  %tmp8 = getelementptr inbounds [100 x [100 x double]]* @C, i32 0, i64 %tmp7
  %tmp9 = getelementptr inbounds [100 x double]* %tmp8, i32 0, i64 %tmp6
  %tmp10 = load double* %tmp9, align 8
  %tmp11 = fadd double %checksum.1, %tmp10
  br label %bb12

bb12:                                             ; preds = %bb5
  %tmp13 = add nsw i32 %j.0, 1
  br label %bb3

bb14:                                             ; preds = %bb3
  br label %bb15

bb15:                                             ; preds = %bb14
  %tmp16 = add nsw i32 %i.0, 1
  br label %bb1

bb17:                                             ; preds = %bb1
  %tmp18 = fcmp ogt double %checksum.0, 0.000000e+00
  %tmp19 = select i1 %tmp18, i32 0, i32 1
  ret i32 %tmp19
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.4 (tags/RELEASE_34/final)"}
