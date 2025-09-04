; ModuleID = '<stdin>'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.__taskenv__ = type { i32 }
%struct.__taskenv__.0 = type { i32 }

@A = common global [100 x [100 x double]] zeroinitializer, align 16
@B = common global [100 x [100 x double]] zeroinitializer, align 16
@C = common global [100 x [100 x double]] zeroinitializer, align 16
@.str = private unnamed_addr constant [6 x i8] c"dummy\00", align 1
@__ompi_defs__ = common global i8* null, align 8

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
  call void @ort_execute_parallel(i8* (i8*)* @_thrFunc0_, i8* null, i32 -1, i32 0, i32 0)
  ret void
}

declare void @ort_execute_parallel(i8* (i8*)*, i8*, i32, i32, i32) #1

; Function Attrs: nounwind uwtable
define internal i8* @_thrFunc0_(i8* %__arg) #0 {
bb:
  %tmp = call i32 @ort_mysingle(i32 1)
  %tmp1 = icmp ne i32 %tmp, 0
  br i1 %tmp1, label %bb2, label %bb23

bb2:                                              ; preds = %bb
  br label %bb3

bb3:                                              ; preds = %bb20, %bb2
  %i.0 = phi i32 [ 0, %bb2 ], [ %tmp21, %bb20 ]
  %tmp4 = icmp slt i32 %i.0, 100
  br i1 %tmp4, label %bb5, label %bb22

bb5:                                              ; preds = %bb3
  %tmp6 = call i32 @omp_in_final()
  %tmp7 = icmp ne i32 %tmp6, 0
  br i1 %tmp7, label %bb11, label %bb8

bb8:                                              ; preds = %bb5
  %tmp9 = call i32 @ort_task_throttling()
  %tmp10 = icmp ne i32 %tmp9, 0
  br i1 %tmp10, label %bb11, label %bb14

bb11:                                             ; preds = %bb8, %bb5
  %tmp12 = call i8* @ort_task_immediate_start(i32 0)
  call void @compute_row(i32 %i.0)
  br label %bb13

bb13:                                             ; preds = %bb11
  call void @ort_task_immediate_end(i8* %tmp12)
  br label %bb19

bb14:                                             ; preds = %bb8
  %tmp15 = call i8* @ort_taskenv_alloc(i32 4, i8* (i8*)* @_taskFunc0_)
  %tmp16 = bitcast i8* %tmp15 to %struct.__taskenv__*
  %tmp17 = getelementptr inbounds %struct.__taskenv__* %tmp16, i32 0, i32 0
  store i32 %i.0, i32* %tmp17, align 4
  %tmp18 = bitcast %struct.__taskenv__* %tmp16 to i8*
  call void @ort_new_task(i8* (i8*)* @_taskFunc0_, i8* %tmp18, i32 0, i32 0, i32 0, i32 0, i8** null, i32 0, i32 0, i32 0)
  br label %bb19

bb19:                                             ; preds = %bb14, %bb13
  br label %bb20

bb20:                                             ; preds = %bb19
  %tmp21 = add nsw i32 %i.0, 1
  br label %bb3

bb22:                                             ; preds = %bb3
  call void @ort_taskwait(i32 0)
  br label %bb23

bb23:                                             ; preds = %bb22, %bb
  call void (...)* @ort_leaving_single()
  br label %bb24

bb24:                                             ; preds = %bb23
  call void @ort_taskwait(i32 2)
  ret i8* null
}

; Function Attrs: nounwind uwtable
define i32 @__original_main(i32 %_argc_ignored, i8** %_argv_ignored) #0 {
bb:
  call void @matrix_multiply_tasks()
  ret i32 0
}

; Function Attrs: nounwind uwtable
define i32 @main(i32 %argc, i8** %argv) #0 {
bb:
  %tmp = alloca i32, align 4
  %tmp1 = alloca i8**, align 8
  store i32 %argc, i32* %tmp, align 4
  store i8** %argv, i8*** %tmp1, align 8
  %tmp2 = call i32 (i32*, i8***, i32, i32, ...)* @ort_initialize(i32* %tmp, i8*** %tmp1, i32 0, i32 0, i8* getelementptr inbounds ([6 x i8]* @.str, i32 0, i32 0))
  %tmp3 = load i32* %tmp, align 4
  %tmp4 = load i8*** %tmp1, align 8
  %tmp5 = call i32 @__original_main(i32 %tmp3, i8** %tmp4)
  call void @ort_finalize(i32 %tmp5)
  ret i32 %tmp5
}

declare i32 @ort_initialize(i32*, i8***, i32, i32, ...) #1

declare void @ort_finalize(i32) #1

declare i32 @ort_mysingle(i32) #1

declare i32 @omp_in_final() #1

declare i32 @ort_task_throttling() #1

declare i8* @ort_task_immediate_start(i32) #1

declare void @ort_task_immediate_end(i8*) #1

declare i8* @ort_taskenv_alloc(i32, i8* (i8*)*) #1

; Function Attrs: nounwind uwtable
define internal i8* @_taskFunc0_(i8* %__arg) #0 {
bb:
  %tmp = bitcast i8* %__arg to %struct.__taskenv__.0*
  %tmp1 = getelementptr inbounds %struct.__taskenv__.0* %tmp, i32 0, i32 0
  %tmp2 = load i32* %tmp1, align 4
  call void @compute_row(i32 %tmp2)
  br label %bb3

bb3:                                              ; preds = %bb
  %tmp4 = bitcast %struct.__taskenv__.0* %tmp to i8*
  call void @ort_taskenv_free(i8* %tmp4, i8* (i8*)* @_taskFunc0_)
  ret i8* null
}

declare void @ort_new_task(i8* (i8*)*, i8*, i32, i32, i32, i32, i8**, i32, i32, i32) #1

declare void @ort_taskwait(i32) #1

declare void @ort_leaving_single(...) #1

declare void @ort_taskenv_free(i8*, i8* (i8*)*) #1

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.4 (tags/RELEASE_34/final)"}
