	.file	"matrix_mult.ll"
	.text
	.globl	matrix_multiply
	.align	16, 0x90
	.type	matrix_multiply,@function
matrix_multiply:                        # @matrix_multiply
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp2:
	.cfi_def_cfa_offset 16
.Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp4:
	.cfi_def_cfa_register %rbp
	xorl	%r9d, %r9d
	movl	$A, %r10d
	xorl	%r8d, %r8d
	xorl	%esi, %esi
	jmp	.LBB0_1
	.align	16, 0x90
.LBB0_4:                                # %bb25
                                        #   in Loop: Header=BB0_1 Depth=1
	incl	%esi
	addq	$100, %r8
.LBB0_1:                                # %bb1
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_2 Depth 2
	movl	%esi, %edi
	movq	%r8, %rdx
	movl	$0, %eax
	cmpl	$99, %esi
	jle	.LBB0_2
	jmp	.LBB0_6
	.align	16, 0x90
.LBB0_3:                                # %bb22
                                        #   in Loop: Header=BB0_2 Depth=2
	leal	(%rsi,%rax), %ecx
	vcvtsi2sdl	%ecx, %xmm0, %xmm0
	vmovsd	%xmm0, A(,%rdx,8)
	vxorps	%xmm0, %xmm0, %xmm0
	vcvtsi2sdl	%edi, %xmm0, %xmm0
	vmovsd	%xmm0, B(,%rdx,8)
	movq	$0, C(,%rdx,8)
	incl	%eax
	incq	%rdx
	decl	%edi
.LBB0_2:                                # %bb3
                                        #   Parent Loop BB0_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	cmpl	$99, %eax
	jle	.LBB0_3
	jmp	.LBB0_4
	.align	16, 0x90
.LBB0_5:                                # %bb59
                                        #   in Loop: Header=BB0_6 Depth=1
	incl	%r9d
	addq	$800, %r10              # imm = 0x320
.LBB0_6:                                # %bb28
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_7 Depth 2
                                        #       Child Loop BB0_8 Depth 3
	xorl	%edx, %edx
	movl	$B, %eax
	cmpl	$99, %r9d
	jle	.LBB0_7
	jmp	.LBB0_11
	.align	16, 0x90
.LBB0_10:                               # %bb56
                                        #   in Loop: Header=BB0_7 Depth=2
	movslq	%edx, %rcx
	movslq	%r9d, %rsi
	imulq	$800, %rsi, %rsi        # imm = 0x320
	vmovsd	%xmm0, C(%rsi,%rcx,8)
	incl	%edx
	addq	$8, %rax
.LBB0_7:                                # %bb31
                                        #   Parent Loop BB0_6 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_8 Depth 3
	vxorps	%xmm0, %xmm0, %xmm0
	movq	%r10, %rdi
	movq	%rax, %rsi
	movl	$0, %ecx
	cmpl	$99, %edx
	jle	.LBB0_8
	jmp	.LBB0_5
	.align	16, 0x90
.LBB0_9:                                # %bb49
                                        #   in Loop: Header=BB0_8 Depth=3
	vmovsd	(%rdi), %xmm1
	vmulsd	(%rsi), %xmm1, %xmm1
	vaddsd	%xmm1, %xmm0, %xmm0
	incl	%ecx
	addq	$800, %rsi              # imm = 0x320
	addq	$8, %rdi
.LBB0_8:                                # %bb34
                                        #   Parent Loop BB0_6 Depth=1
                                        #     Parent Loop BB0_7 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	cmpl	$99, %ecx
	jle	.LBB0_9
	jmp	.LBB0_10
.LBB0_11:                               # %bb61
	popq	%rbp
	ret
.Ltmp5:
	.size	matrix_multiply, .Ltmp5-matrix_multiply
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp8:
	.cfi_def_cfa_offset 16
.Ltmp9:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp10:
	.cfi_def_cfa_register %rbp
	callq	matrix_multiply
	movl	$C, %eax
	vxorps	%xmm0, %xmm0, %xmm0
	xorl	%ecx, %ecx
	jmp	.LBB1_1
	.align	16, 0x90
.LBB1_5:                                # %bb15
                                        #   in Loop: Header=BB1_1 Depth=1
	incl	%ecx
	addq	$800, %rax              # imm = 0x320
.LBB1_1:                                # %bb1
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB1_3 Depth 2
	cmpl	$99, %ecx
	jg	.LBB1_6
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	movq	%rax, %rdx
	xorl	%esi, %esi
	jmp	.LBB1_3
	.align	16, 0x90
.LBB1_4:                                # %bb12
                                        #   in Loop: Header=BB1_3 Depth=2
	vaddsd	(%rdx), %xmm0, %xmm0
	incl	%esi
	addq	$8, %rdx
.LBB1_3:                                # %bb3
                                        #   Parent Loop BB1_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	cmpl	$99, %esi
	jle	.LBB1_4
	jmp	.LBB1_5
.LBB1_6:                                # %bb17
	vxorps	%xmm1, %xmm1, %xmm1
	vucomisd	%xmm1, %xmm0
	setbe	%al
	movzbl	%al, %eax
	popq	%rbp
	ret
.Ltmp11:
	.size	main, .Ltmp11-main
	.cfi_endproc

	.type	A,@object               # @A
	.comm	A,80000,16
	.type	B,@object               # @B
	.comm	B,80000,16
	.type	C,@object               # @C
	.comm	C,80000,16

	.ident	"clang version 3.4 (tags/RELEASE_34/final)"
	.section	".note.GNU-stack","",@progbits
