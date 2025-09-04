; ModuleID = '<stdin>'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"dummy\00", align 1
@__ompi_defs__ = common global i8* null, align 8

; Function Attrs: nounwind uwtable
define void @work(i32 %n) #0 {
bb:
  br label %bb1

bb1:                                              ; preds = %bb4, %bb
  %sum.0 = phi i32 [ 0, %bb ], [ %tmp3, %bb4 ]
  %i.0 = phi i32 [ 0, %bb ], [ %tmp5, %bb4 ]
  %tmp = icmp slt i32 %i.0, %n
  br i1 %tmp, label %bb2, label %bb6

bb2:                                              ; preds = %bb1
  %tmp3 = add nsw i32 %sum.0, %i.0
  br label %bb4

bb4:                                              ; preds = %bb2
  %tmp5 = add nsw i32 %i.0, 1
  br label %bb1

bb6:                                              ; preds = %bb1
  ret void
}

; Function Attrs: nounwind uwtable
define i32 @__original_main(i32 %_argc_ignored, i8** %_argv_ignored) #0 {
bb:
  call void @ort_execute_parallel(i8* (i8*)* @_thrFunc0_, i8* null, i32 -1, i32 0, i32 0)
  ret i32 0
}

declare void @ort_execute_parallel(i8* (i8*)*, i8*, i32, i32, i32) #1

; Function Attrs: nounwind uwtable
define internal i8* @_thrFunc0_(i8* %__arg) #0 {
bb:
  %tmp = call i32 @omp_in_final()
  %tmp1 = icmp ne i32 %tmp, 0
  br i1 %tmp1, label %bb5, label %bb2

bb2:                                              ; preds = %bb
  %tmp3 = call i32 @ort_task_throttling()
  %tmp4 = icmp ne i32 %tmp3, 0
  br i1 %tmp4, label %bb5, label %bb8

bb5:                                              ; preds = %bb2, %bb
  %tmp6 = call i8* @ort_task_immediate_start(i32 0)
  call void @work(i32 10)
  br label %bb7

bb7:                                              ; preds = %bb5
  call void @ort_task_immediate_end(i8* %tmp6)
  br label %bb9

bb8:                                              ; preds = %bb2
  call void @ort_new_task(i8* (i8*)* @_taskFunc0_, i8* null, i32 0, i32 0, i32 0, i32 0, i8** null, i32 0, i32 0, i32 0)
  br label %bb9

bb9:                                              ; preds = %bb8, %bb7
  %tmp10 = call i32 @omp_in_final()
  %tmp11 = icmp ne i32 %tmp10, 0
  br i1 %tmp11, label %bb15, label %bb12

bb12:                                             ; preds = %bb9
  %tmp13 = call i32 @ort_task_throttling()
  %tmp14 = icmp ne i32 %tmp13, 0
  br i1 %tmp14, label %bb15, label %bb18

bb15:                                             ; preds = %bb12, %bb9
  %tmp16 = call i8* @ort_task_immediate_start(i32 0)
  call void @work(i32 20)
  br label %bb17

bb17:                                             ; preds = %bb15
  call void @ort_task_immediate_end(i8* %tmp16)
  br label %bb19

bb18:                                             ; preds = %bb12
  call void @ort_new_task(i8* (i8*)* @_taskFunc1_, i8* null, i32 0, i32 0, i32 0, i32 0, i8** null, i32 0, i32 0, i32 0)
  br label %bb19

bb19:                                             ; preds = %bb18, %bb17
  call void @ort_taskwait(i32 0)
  br label %bb20

bb20:                                             ; preds = %bb19
  call void @ort_taskwait(i32 2)
  ret i8* null
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

declare i32 @omp_in_final() #1

declare i32 @ort_task_throttling() #1

declare i8* @ort_task_immediate_start(i32) #1

declare void @ort_task_immediate_end(i8*) #1

declare void @ort_new_task(i8* (i8*)*, i8*, i32, i32, i32, i32, i8**, i32, i32, i32) #1

; Function Attrs: nounwind uwtable
define internal i8* @_taskFunc0_(i8* %__arg) #0 {
bb:
  call void @work(i32 10)
  br label %bb1

bb1:                                              ; preds = %bb
  ret i8* null
}

; Function Attrs: nounwind uwtable
define internal i8* @_taskFunc1_(i8* %__arg) #0 {
bb:
  call void @work(i32 20)
  br label %bb1

bb1:                                              ; preds = %bb
  ret i8* null
}

declare void @ort_taskwait(i32) #1

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.4 (tags/RELEASE_34/final)"}
