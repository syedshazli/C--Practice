	.file	"pointers.cpp"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2303:
	.cfi_startproc
	cmpl	$1, %edi
	je	.L7
.L4:
	ret
.L7:
	cmpl	$65535, %esi
	jne	.L4
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	_ZStL8__ioinit(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	movq	%rbx, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	call	__cxa_atexit@PLT
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2303:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"aNum is "
.LC1:
	.string	"*anum is "
.LC2:
	.string	"&anum is "
	.text
	.globl	_Z7pointMePi
	.type	_Z7pointMePi, @function
_Z7pointMePi:
.LFB1812:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movq	%rdi, 8(%rsp)
	movl	$8, %edx
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	8(%rsp), %rsi
	movq	%rbx, %rdi
	call	_ZNSo9_M_insertIPKvEERSoT_@PLT
	movq	%rax, %rbx
	movq	(%rax), %rax
	movq	%rbx, %rcx
	addq	-24(%rax), %rcx
	movq	240(%rcx), %rbp
	testq	%rbp, %rbp
	je	.L19
	cmpb	$0, 56(%rbp)
	je	.L10
	movzbl	67(%rbp), %esi
.L11:
	movsbl	%sil, %esi
	movq	%rbx, %rdi
	call	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	call	_ZNSo5flushEv@PLT
	movl	$9, %edx
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	8(%rsp), %rax
	movl	(%rax), %esi
	movq	%rbx, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rbx
	movq	(%rax), %rax
	movq	%rbx, %rdx
	addq	-24(%rax), %rdx
	movq	240(%rdx), %rbp
	testq	%rbp, %rbp
	je	.L20
	cmpb	$0, 56(%rbp)
	je	.L13
	movzbl	67(%rbp), %esi
.L14:
	movsbl	%sil, %esi
	movq	%rbx, %rdi
	call	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	call	_ZNSo5flushEv@PLT
	movl	$9, %edx
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	leaq	8(%rsp), %rsi
	movq	%rbx, %rdi
	call	_ZNSo9_M_insertIPKvEERSoT_@PLT
	movq	%rax, %rbx
	movq	(%rax), %rax
	movq	%rbx, %rcx
	addq	-24(%rax), %rcx
	movq	240(%rcx), %rbp
	testq	%rbp, %rbp
	je	.L21
	cmpb	$0, 56(%rbp)
	je	.L16
	movzbl	67(%rbp), %esi
.L17:
	movsbl	%sil, %esi
	movq	%rbx, %rdi
	call	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	call	_ZNSo5flushEv@PLT
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L19:
	.cfi_restore_state
	call	_ZSt16__throw_bad_castv@PLT
.L10:
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movl	%eax, %esi
	jmp	.L11
.L20:
	call	_ZSt16__throw_bad_castv@PLT
.L13:
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movl	%eax, %esi
	jmp	.L14
.L21:
	call	_ZSt16__throw_bad_castv@PLT
.L16:
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movl	%eax, %esi
	jmp	.L17
	.cfi_endproc
.LFE1812:
	.size	_Z7pointMePi, .-_Z7pointMePi
	.section	.rodata.str1.1
.LC3:
	.string	"a = "
.LC4:
	.string	"b = "
.LC5:
	.string	"address of a  = "
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC6:
	.string	"B is storing the address of a, pointing to the address of a"
	.section	.rodata.str1.1
.LC7:
	.string	"X before Z changes it: "
.LC8:
	.string	"X after Z changes it "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1813:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movl	$5, (%rsp)
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	(%rsp), %esi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	leaq	.LC4(%rip), %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movq	%rsp, %rbp
	movq	%rbp, %rsi
	call	_ZNSo9_M_insertIPKvEERSoT_@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	leaq	.LC5(%rip), %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movq	%rbp, %rsi
	call	_ZNSo9_M_insertIPKvEERSoT_@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	leaq	.LC6(%rip), %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	leaq	.LC7(%rip), %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	$10, %esi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	leaq	.LC8(%rip), %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	$30, %esi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	movq	%rbx, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@PLT
	movl	$5, 4(%rsp)
	leaq	4(%rsp), %rdi
	call	_Z7pointMePi
	movq	8(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L25
	movl	$0, %eax
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L25:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE1813:
	.size	main, .-main
	.type	_GLOBAL__sub_I__Z7pointMePi, @function
_GLOBAL__sub_I__Z7pointMePi:
.LFB2304:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2304:
	.size	_GLOBAL__sub_I__Z7pointMePi, .-_GLOBAL__sub_I__Z7pointMePi
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z7pointMePi
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
