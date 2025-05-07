
matmul:     file format elf64-x86-64


Disassembly of section .interp:

0000000000000318 <.interp>:
 318:	2f                   	(bad)  
 319:	6c                   	insb   (%dx),%es:(%rdi)
 31a:	69 62 36 34 2f 6c 64 	imul   $0x646c2f34,0x36(%rdx),%esp
 321:	2d 6c 69 6e 75       	sub    $0x756e696c,%eax
 326:	78 2d                	js     355 <__abi_tag-0x37>
 328:	78 38                	js     362 <__abi_tag-0x2a>
 32a:	36 2d 36 34 2e 73    	ss sub $0x732e3436,%eax
 330:	6f                   	outsl  %ds:(%rsi),(%dx)
 331:	2e 32 00             	cs xor (%rax),%al

Disassembly of section .note.gnu.property:

0000000000000338 <.note.gnu.property>:
 338:	04 00                	add    $0x0,%al
 33a:	00 00                	add    %al,(%rax)
 33c:	20 00                	and    %al,(%rax)
 33e:	00 00                	add    %al,(%rax)
 340:	05 00 00 00 47       	add    $0x47000000,%eax
 345:	4e 55                	rex.WRX push %rbp
 347:	00 02                	add    %al,(%rdx)
 349:	00 00                	add    %al,(%rax)
 34b:	c0 04 00 00          	rolb   $0x0,(%rax,%rax,1)
 34f:	00 03                	add    %al,(%rbx)
 351:	00 00                	add    %al,(%rax)
 353:	00 00                	add    %al,(%rax)
 355:	00 00                	add    %al,(%rax)
 357:	00 02                	add    %al,(%rdx)
 359:	80 00 c0             	addb   $0xc0,(%rax)
 35c:	04 00                	add    $0x0,%al
 35e:	00 00                	add    %al,(%rax)
 360:	01 00                	add    %eax,(%rax)
 362:	00 00                	add    %al,(%rax)
 364:	00 00                	add    %al,(%rax)
	...

Disassembly of section .note.gnu.build-id:

0000000000000368 <.note.gnu.build-id>:
 368:	04 00                	add    $0x0,%al
 36a:	00 00                	add    %al,(%rax)
 36c:	14 00                	adc    $0x0,%al
 36e:	00 00                	add    %al,(%rax)
 370:	03 00                	add    (%rax),%eax
 372:	00 00                	add    %al,(%rax)
 374:	47                   	rex.RXB
 375:	4e 55                	rex.WRX push %rbp
 377:	00 65 67             	add    %ah,0x67(%rbp)
 37a:	98                   	cwtl   
 37b:	d6                   	(bad)  
 37c:	2d a2 be 5b d7       	sub    $0xd75bbea2,%eax
 381:	af                   	scas   %es:(%rdi),%eax
 382:	52                   	push   %rdx
 383:	27                   	(bad)  
 384:	e4 ac                	in     $0xac,%al
 386:	94                   	xchg   %eax,%esp
 387:	ac                   	lods   %ds:(%rsi),%al
 388:	59                   	pop    %rcx
 389:	a5                   	movsl  %ds:(%rsi),%es:(%rdi)
 38a:	70 09                	jo     395 <__abi_tag+0x9>

Disassembly of section .note.ABI-tag:

000000000000038c <__abi_tag>:
 38c:	04 00                	add    $0x0,%al
 38e:	00 00                	add    %al,(%rax)
 390:	10 00                	adc    %al,(%rax)
 392:	00 00                	add    %al,(%rax)
 394:	01 00                	add    %eax,(%rax)
 396:	00 00                	add    %al,(%rax)
 398:	47                   	rex.RXB
 399:	4e 55                	rex.WRX push %rbp
 39b:	00 00                	add    %al,(%rax)
 39d:	00 00                	add    %al,(%rax)
 39f:	00 03                	add    %al,(%rbx)
 3a1:	00 00                	add    %al,(%rax)
 3a3:	00 02                	add    %al,(%rdx)
 3a5:	00 00                	add    %al,(%rax)
 3a7:	00 00                	add    %al,(%rax)
 3a9:	00 00                	add    %al,(%rax)
	...

Disassembly of section .gnu.hash:

00000000000003b0 <.gnu.hash>:
 3b0:	02 00                	add    (%rax),%al
 3b2:	00 00                	add    %al,(%rax)
 3b4:	0d 00 00 00 01       	or     $0x1000000,%eax
 3b9:	00 00                	add    %al,(%rax)
 3bb:	00 06                	add    %al,(%rsi)
 3bd:	00 00                	add    %al,(%rax)
 3bf:	00 00                	add    %al,(%rax)
 3c1:	00 91 00 01 00 00    	add    %dl,0x100(%rcx)
 3c7:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 3cd <__abi_tag+0x41>
 3cd:	00 00                	add    %al,(%rax)
 3cf:	00 d0                	add    %dl,%al
 3d1:	65 ce                	gs (bad) 
 3d3:	6d                   	insl   (%dx),%es:(%rdi)
 3d4:	15                   	.byte 0x15
 3d5:	98                   	cwtl   
 3d6:	0c 43                	or     $0x43,%al

Disassembly of section .dynsym:

00000000000003d8 <.dynsym>:
	...
 3f0:	86 00                	xchg   %al,(%rax)
 3f2:	00 00                	add    %al,(%rax)
 3f4:	12 00                	adc    (%rax),%al
	...
 406:	00 00                	add    %al,(%rax)
 408:	1b 01                	sbb    (%rcx),%eax
 40a:	00 00                	add    %al,(%rax)
 40c:	12 00                	adc    (%rax),%al
	...
 41e:	00 00                	add    %al,(%rax)
 420:	2d 01 00 00 12       	sub    $0x12000001,%eax
	...
 435:	00 00                	add    %al,(%rax)
 437:	00 d9                	add    %bl,%cl
 439:	00 00                	add    %al,(%rax)
 43b:	00 12                	add    %dl,(%rdx)
	...
 44d:	00 00                	add    %al,(%rax)
 44f:	00 3a                	add    %bh,(%rdx)
 451:	01 00                	add    %eax,(%rax)
 453:	00 12                	add    %dl,(%rdx)
	...
 465:	00 00                	add    %al,(%rax)
 467:	00 46 00             	add    %al,0x0(%rsi)
 46a:	00 00                	add    %al,(%rax)
 46c:	12 00                	adc    (%rax),%al
	...
 47e:	00 00                	add    %al,(%rax)
 480:	ea                   	(bad)  
 481:	00 00                	add    %al,(%rax)
 483:	00 12                	add    %dl,(%rdx)
	...
 495:	00 00                	add    %al,(%rax)
 497:	00 7c 00 00          	add    %bh,0x0(%rax,%rax,1)
 49b:	00 12                	add    %dl,(%rdx)
	...
 4ad:	00 00                	add    %al,(%rax)
 4af:	00 10                	add    %dl,(%rax)
 4b1:	00 00                	add    %al,(%rax)
 4b3:	00 20                	add    %ah,(%rax)
	...
 4c5:	00 00                	add    %al,(%rax)
 4c7:	00 01                	add    %al,(%rcx)
 4c9:	00 00                	add    %al,(%rax)
 4cb:	00 20                	add    %ah,(%rax)
	...
 4dd:	00 00                	add    %al,(%rax)
 4df:	00 2c 00             	add    %ch,(%rax,%rax,1)
 4e2:	00 00                	add    %al,(%rax)
 4e4:	20 00                	and    %al,(%rax)
	...
 4f6:	00 00                	add    %al,(%rax)
 4f8:	c1 00 00             	roll   $0x0,(%rax)
 4fb:	00 12                	add    %dl,(%rdx)
	...
 50d:	00 00                	add    %al,(%rax)
 50f:	00 0c 01             	add    %cl,(%rcx,%rax,1)
 512:	00 00                	add    %al,(%rax)
 514:	22 00                	and    (%rax),%al
	...
 526:	00 00                	add    %al,(%rax)
 528:	02 01                	add    (%rcx),%al
 52a:	00 00                	add    %al,(%rax)
 52c:	11 00                	adc    %eax,(%rax)
 52e:	1a 00                	sbb    (%rax),%al
 530:	40                   	rex
 531:	40 00 00             	rex add %al,(%rax)
 534:	00 00                	add    %al,(%rax)
 536:	00 00                	add    %al,(%rax)
 538:	10 01                	adc    %al,(%rcx)
 53a:	00 00                	add    %al,(%rax)
 53c:	00 00                	add    %al,(%rax)
	...

Disassembly of section .dynstr:

0000000000000540 <.dynstr>:
 540:	00 5f 5f             	add    %bl,0x5f(%rdi)
 543:	67 6d                	insl   (%dx),%es:(%edi)
 545:	6f                   	outsl  %ds:(%rsi),(%dx)
 546:	6e                   	outsb  %ds:(%rsi),(%dx)
 547:	5f                   	pop    %rdi
 548:	73 74                	jae    5be <__abi_tag+0x232>
 54a:	61                   	(bad)  
 54b:	72 74                	jb     5c1 <__abi_tag+0x235>
 54d:	5f                   	pop    %rdi
 54e:	5f                   	pop    %rdi
 54f:	00 5f 49             	add    %bl,0x49(%rdi)
 552:	54                   	push   %rsp
 553:	4d 5f                	rex.WRB pop %r15
 555:	64 65 72 65          	fs gs jb 5be <__abi_tag+0x232>
 559:	67 69 73 74 65 72 54 	imul   $0x4d547265,0x74(%ebx),%esi
 560:	4d 
 561:	43 6c                	rex.XB insb (%dx),%es:(%rdi)
 563:	6f                   	outsl  %ds:(%rsi),(%dx)
 564:	6e                   	outsb  %ds:(%rsi),(%dx)
 565:	65 54                	gs push %rsp
 567:	61                   	(bad)  
 568:	62                   	(bad)  
 569:	6c                   	insb   (%dx),%es:(%rdi)
 56a:	65 00 5f 49          	add    %bl,%gs:0x49(%rdi)
 56e:	54                   	push   %rsp
 56f:	4d 5f                	rex.WRB pop %r15
 571:	72 65                	jb     5d8 <__abi_tag+0x24c>
 573:	67 69 73 74 65 72 54 	imul   $0x4d547265,0x74(%ebx),%esi
 57a:	4d 
 57b:	43 6c                	rex.XB insb (%dx),%es:(%rdi)
 57d:	6f                   	outsl  %ds:(%rsi),(%dx)
 57e:	6e                   	outsb  %ds:(%rsi),(%dx)
 57f:	65 54                	gs push %rsp
 581:	61                   	(bad)  
 582:	62                   	(bad)  
 583:	6c                   	insb   (%dx),%es:(%rdi)
 584:	65 00 5f 5a          	add    %bl,%gs:0x5a(%rdi)
 588:	53                   	push   %rbx
 589:	74 6c                	je     5f7 <__abi_tag+0x26b>
 58b:	73 49                	jae    5d6 <__abi_tag+0x24a>
 58d:	53                   	push   %rbx
 58e:	74 31                	je     5c1 <__abi_tag+0x235>
 590:	31 63 68             	xor    %esp,0x68(%rbx)
 593:	61                   	(bad)  
 594:	72 5f                	jb     5f5 <__abi_tag+0x269>
 596:	74 72                	je     60a <__abi_tag+0x27e>
 598:	61                   	(bad)  
 599:	69 74 73 49 63 45 45 	imul   $0x52454563,0x49(%rbx,%rsi,2),%esi
 5a0:	52 
 5a1:	53                   	push   %rbx
 5a2:	74 31                	je     5d5 <__abi_tag+0x249>
 5a4:	33 62 61             	xor    0x61(%rdx),%esp
 5a7:	73 69                	jae    612 <__abi_tag+0x286>
 5a9:	63 5f 6f             	movsxd 0x6f(%rdi),%ebx
 5ac:	73 74                	jae    622 <__abi_tag+0x296>
 5ae:	72 65                	jb     615 <__abi_tag+0x289>
 5b0:	61                   	(bad)  
 5b1:	6d                   	insl   (%dx),%es:(%rdi)
 5b2:	49 63 54 5f 45       	movslq 0x45(%r15,%rbx,2),%rdx
 5b7:	53                   	push   %rbx
 5b8:	35 5f 63 00 5f       	xor    $0x5f00635f,%eax
 5bd:	5a                   	pop    %rdx
 5be:	4e 53                	rex.WRX push %rbx
 5c0:	6f                   	outsl  %ds:(%rsi),(%dx)
 5c1:	6c                   	insb   (%dx),%es:(%rdi)
 5c2:	73 45                	jae    609 <__abi_tag+0x27d>
 5c4:	69 00 5f 5a 53 74    	imul   $0x74535a5f,(%rax),%eax
 5ca:	34 65                	xor    $0x65,%al
 5cc:	6e                   	outsb  %ds:(%rsi),(%dx)
 5cd:	64 6c                	fs insb (%dx),%es:(%rdi)
 5cf:	49 63 53 74          	movslq 0x74(%r11),%rdx
 5d3:	31 31                	xor    %esi,(%rcx)
 5d5:	63 68 61             	movsxd 0x61(%rax),%ebp
 5d8:	72 5f                	jb     639 <__abi_tag+0x2ad>
 5da:	74 72                	je     64e <__abi_tag+0x2c2>
 5dc:	61                   	(bad)  
 5dd:	69 74 73 49 63 45 45 	imul   $0x52454563,0x49(%rbx,%rsi,2),%esi
 5e4:	52 
 5e5:	53                   	push   %rbx
 5e6:	74 31                	je     619 <__abi_tag+0x28d>
 5e8:	33 62 61             	xor    0x61(%rdx),%esp
 5eb:	73 69                	jae    656 <__abi_tag+0x2ca>
 5ed:	63 5f 6f             	movsxd 0x6f(%rdi),%ebx
 5f0:	73 74                	jae    666 <__abi_tag+0x2da>
 5f2:	72 65                	jb     659 <__abi_tag+0x2cd>
 5f4:	61                   	(bad)  
 5f5:	6d                   	insl   (%dx),%es:(%rdi)
 5f6:	49 54                	rex.WB push %r12
 5f8:	5f                   	pop    %rdi
 5f9:	54                   	push   %rsp
 5fa:	30 5f 45             	xor    %bl,0x45(%rdi)
 5fd:	53                   	push   %rbx
 5fe:	36 5f                	ss pop %rdi
 600:	00 5f 5a             	add    %bl,0x5a(%rdi)
 603:	4e 53                	rex.WRX push %rbx
 605:	74 38                	je     63f <__abi_tag+0x2b3>
 607:	69 6f 73 5f 62 61 73 	imul   $0x7361625f,0x73(%rdi),%ebp
 60e:	65 34 49             	gs xor $0x49,%al
 611:	6e                   	outsb  %ds:(%rsi),(%dx)
 612:	69 74 44 31 45 76 00 	imul   $0x5f007645,0x31(%rsp,%rax,2),%esi
 619:	5f 
 61a:	5a                   	pop    %rdx
 61b:	4e 53                	rex.WRX push %rbx
 61d:	6f                   	outsl  %ds:(%rsi),(%dx)
 61e:	6c                   	insb   (%dx),%es:(%rdi)
 61f:	73 45                	jae    666 <__abi_tag+0x2da>
 621:	50                   	push   %rax
 622:	46 52                	rex.RX push %rdx
 624:	53                   	push   %rbx
 625:	6f                   	outsl  %ds:(%rsi),(%dx)
 626:	53                   	push   %rbx
 627:	5f                   	pop    %rdi
 628:	45 00 5f 5a          	add    %r11b,0x5a(%r15)
 62c:	4e 53                	rex.WRX push %rbx
 62e:	74 38                	je     668 <__abi_tag+0x2dc>
 630:	69 6f 73 5f 62 61 73 	imul   $0x7361625f,0x73(%rdi),%ebp
 637:	65 34 49             	gs xor $0x49,%al
 63a:	6e                   	outsb  %ds:(%rsi),(%dx)
 63b:	69 74 43 31 45 76 00 	imul   $0x5f007645,0x31(%rbx,%rax,2),%esi
 642:	5f 
 643:	5a                   	pop    %rdx
 644:	53                   	push   %rbx
 645:	74 34                	je     67b <__abi_tag+0x2ef>
 647:	63 6f 75             	movsxd 0x75(%rdi),%ebp
 64a:	74 00                	je     64c <__abi_tag+0x2c0>
 64c:	5f                   	pop    %rdi
 64d:	5f                   	pop    %rdi
 64e:	63 78 61             	movsxd 0x61(%rax),%edi
 651:	5f                   	pop    %rdi
 652:	66 69 6e 61 6c 69    	imul   $0x696c,0x61(%rsi),%bp
 658:	7a 65                	jp     6bf <__abi_tag+0x333>
 65a:	00 5f 5f             	add    %bl,0x5f(%rdi)
 65d:	6c                   	insb   (%dx),%es:(%rdi)
 65e:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%rdx),%esp
 665:	72 74                	jb     6db <__abi_tag+0x34f>
 667:	5f                   	pop    %rdi
 668:	6d                   	insl   (%dx),%es:(%rdi)
 669:	61                   	(bad)  
 66a:	69 6e 00 5f 5f 63 78 	imul   $0x78635f5f,0x0(%rsi),%ebp
 671:	61                   	(bad)  
 672:	5f                   	pop    %rdi
 673:	61                   	(bad)  
 674:	74 65                	je     6db <__abi_tag+0x34f>
 676:	78 69                	js     6e1 <__abi_tag+0x355>
 678:	74 00                	je     67a <__abi_tag+0x2ee>
 67a:	5f                   	pop    %rdi
 67b:	5f                   	pop    %rdi
 67c:	73 74                	jae    6f2 <__abi_tag+0x366>
 67e:	61                   	(bad)  
 67f:	63 6b 5f             	movsxd 0x5f(%rbx),%ebp
 682:	63 68 6b             	movsxd 0x6b(%rax),%ebp
 685:	5f                   	pop    %rdi
 686:	66 61                	data16 (bad) 
 688:	69 6c 00 6c 69 62 73 	imul   $0x74736269,0x6c(%rax,%rax,1),%ebp
 68f:	74 
 690:	64 63 2b             	movsxd %fs:(%rbx),%ebp
 693:	2b 2e                	sub    (%rsi),%ebp
 695:	73 6f                	jae    706 <__abi_tag+0x37a>
 697:	2e 36 00 6c 69 62    	cs ss add %ch,0x62(%rcx,%rbp,2)
 69d:	63 2e                	movsxd (%rsi),%ebp
 69f:	73 6f                	jae    710 <__abi_tag+0x384>
 6a1:	2e 36 00 47 4c       	cs ss add %al,0x4c(%rdi)
 6a6:	49                   	rex.WB
 6a7:	42                   	rex.X
 6a8:	43 58                	rex.XB pop %r8
 6aa:	58                   	pop    %rax
 6ab:	5f                   	pop    %rdi
 6ac:	33 2e                	xor    (%rsi),%ebp
 6ae:	34 00                	xor    $0x0,%al
 6b0:	47                   	rex.RXB
 6b1:	4c                   	rex.WR
 6b2:	49                   	rex.WB
 6b3:	42                   	rex.X
 6b4:	43 5f                	rex.XB pop %r15
 6b6:	32 2e                	xor    (%rsi),%ch
 6b8:	34 00                	xor    $0x0,%al
 6ba:	47                   	rex.RXB
 6bb:	4c                   	rex.WR
 6bc:	49                   	rex.WB
 6bd:	42                   	rex.X
 6be:	43 5f                	rex.XB pop %r15
 6c0:	32 2e                	xor    (%rsi),%ch
 6c2:	33 34 00             	xor    (%rax,%rax,1),%esi
 6c5:	47                   	rex.RXB
 6c6:	4c                   	rex.WR
 6c7:	49                   	rex.WB
 6c8:	42                   	rex.X
 6c9:	43 5f                	rex.XB pop %r15
 6cb:	32 2e                	xor    (%rsi),%ch
 6cd:	32 2e                	xor    (%rsi),%ch
 6cf:	35                   	.byte 0x35
	...

Disassembly of section .gnu.version:

00000000000006d2 <.gnu.version>:
 6d2:	00 00                	add    %al,(%rax)
 6d4:	03 00                	add    (%rax),%eax
 6d6:	04 00                	add    $0x0,%al
 6d8:	02 00                	add    (%rax),%al
 6da:	03 00                	add    (%rax),%eax
 6dc:	05 00 03 00 03       	add    $0x3000300,%eax
 6e1:	00 03                	add    %al,(%rbx)
 6e3:	00 01                	add    %al,(%rcx)
 6e5:	00 01                	add    %al,(%rcx)
 6e7:	00 01                	add    %al,(%rcx)
 6e9:	00 03                	add    %al,(%rbx)
 6eb:	00 02                	add    %al,(%rdx)
 6ed:	00 03                	add    %al,(%rbx)
	...

Disassembly of section .gnu.version_r:

00000000000006f0 <.gnu.version_r>:
 6f0:	01 00                	add    %eax,(%rax)
 6f2:	01 00                	add    %eax,(%rax)
 6f4:	4b 01 00             	rex.WXB add %rax,(%r8)
 6f7:	00 10                	add    %dl,(%rax)
 6f9:	00 00                	add    %al,(%rax)
 6fb:	00 20                	add    %ah,(%rax)
 6fd:	00 00                	add    %al,(%rax)
 6ff:	00 74 29 92          	add    %dh,-0x6e(%rcx,%rbp,1)
 703:	08 00                	or     %al,(%rax)
 705:	00 03                	add    %al,(%rbx)
 707:	00 64 01 00          	add    %ah,0x0(%rcx,%rax,1)
 70b:	00 00                	add    %al,(%rax)
 70d:	00 00                	add    %al,(%rax)
 70f:	00 01                	add    %al,(%rcx)
 711:	00 03                	add    %al,(%rbx)
 713:	00 5a 01             	add    %bl,0x1(%rdx)
 716:	00 00                	add    %al,(%rax)
 718:	10 00                	adc    %al,(%rax)
 71a:	00 00                	add    %al,(%rax)
 71c:	00 00                	add    %al,(%rax)
 71e:	00 00                	add    %al,(%rax)
 720:	14 69                	adc    $0x69,%al
 722:	69 0d 00 00 05 00 70 	imul   $0x170,0x50000(%rip),%ecx        # 5072c <_end+0x4c5d4>
 729:	01 00 00 
 72c:	10 00                	adc    %al,(%rax)
 72e:	00 00                	add    %al,(%rax)
 730:	b4 91                	mov    $0x91,%ah
 732:	96                   	xchg   %eax,%esi
 733:	06                   	(bad)  
 734:	00 00                	add    %al,(%rax)
 736:	04 00                	add    $0x0,%al
 738:	7a 01                	jp     73b <__abi_tag+0x3af>
 73a:	00 00                	add    %al,(%rax)
 73c:	10 00                	adc    %al,(%rax)
 73e:	00 00                	add    %al,(%rax)
 740:	75 1a                	jne    75c <__abi_tag+0x3d0>
 742:	69 09 00 00 02 00    	imul   $0x20000,(%rcx),%ecx
 748:	85 01                	test   %eax,(%rcx)
 74a:	00 00                	add    %al,(%rax)
 74c:	00 00                	add    %al,(%rax)
	...

Disassembly of section .rela.dyn:

0000000000000750 <.rela.dyn>:
 750:	68 3d 00 00 00       	push   $0x3d
 755:	00 00                	add    %al,(%rax)
 757:	00 08                	add    %cl,(%rax)
 759:	00 00                	add    %al,(%rax)
 75b:	00 00                	add    %al,(%rax)
 75d:	00 00                	add    %al,(%rax)
 75f:	00 e0                	add    %ah,%al
 761:	11 00                	adc    %eax,(%rax)
 763:	00 00                	add    %al,(%rax)
 765:	00 00                	add    %al,(%rax)
 767:	00 70 3d             	add    %dh,0x3d(%rax)
 76a:	00 00                	add    %al,(%rax)
 76c:	00 00                	add    %al,(%rax)
 76e:	00 00                	add    %al,(%rax)
 770:	08 00                	or     %al,(%rax)
 772:	00 00                	add    %al,(%rax)
 774:	00 00                	add    %al,(%rax)
 776:	00 00                	add    %al,(%rax)
 778:	12 15 00 00 00 00    	adc    0x0(%rip),%dl        # 77e <__abi_tag+0x3f2>
 77e:	00 00                	add    %al,(%rax)
 780:	78 3d                	js     7bf <__abi_tag+0x433>
 782:	00 00                	add    %al,(%rax)
 784:	00 00                	add    %al,(%rax)
 786:	00 00                	add    %al,(%rax)
 788:	08 00                	or     %al,(%rax)
 78a:	00 00                	add    %al,(%rax)
 78c:	00 00                	add    %al,(%rax)
 78e:	00 00                	add    %al,(%rax)
 790:	a0 11 00 00 00 00 00 	movabs 0x800000000000011,%al
 797:	00 08 
 799:	40 00 00             	rex add %al,(%rax)
 79c:	00 00                	add    %al,(%rax)
 79e:	00 00                	add    %al,(%rax)
 7a0:	08 00                	or     %al,(%rax)
 7a2:	00 00                	add    %al,(%rax)
 7a4:	00 00                	add    %al,(%rax)
 7a6:	00 00                	add    %al,(%rax)
 7a8:	08 40 00             	or     %al,0x0(%rax)
 7ab:	00 00                	add    %al,(%rax)
 7ad:	00 00                	add    %al,(%rax)
 7af:	00 c8                	add    %cl,%al
 7b1:	3f                   	(bad)  
 7b2:	00 00                	add    %al,(%rax)
 7b4:	00 00                	add    %al,(%rax)
 7b6:	00 00                	add    %al,(%rax)
 7b8:	06                   	(bad)  
 7b9:	00 00                	add    %al,(%rax)
 7bb:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 7c1 <__abi_tag+0x435>
 7c1:	00 00                	add    %al,(%rax)
 7c3:	00 00                	add    %al,(%rax)
 7c5:	00 00                	add    %al,(%rax)
 7c7:	00 d0                	add    %dl,%al
 7c9:	3f                   	(bad)  
 7ca:	00 00                	add    %al,(%rax)
 7cc:	00 00                	add    %al,(%rax)
 7ce:	00 00                	add    %al,(%rax)
 7d0:	06                   	(bad)  
 7d1:	00 00                	add    %al,(%rax)
 7d3:	00 01                	add    %al,(%rcx)
	...
 7dd:	00 00                	add    %al,(%rax)
 7df:	00 d8                	add    %bl,%al
 7e1:	3f                   	(bad)  
 7e2:	00 00                	add    %al,(%rax)
 7e4:	00 00                	add    %al,(%rax)
 7e6:	00 00                	add    %al,(%rax)
 7e8:	06                   	(bad)  
 7e9:	00 00                	add    %al,(%rax)
 7eb:	00 02                	add    %al,(%rdx)
	...
 7f5:	00 00                	add    %al,(%rax)
 7f7:	00 e0                	add    %ah,%al
 7f9:	3f                   	(bad)  
 7fa:	00 00                	add    %al,(%rax)
 7fc:	00 00                	add    %al,(%rax)
 7fe:	00 00                	add    %al,(%rax)
 800:	06                   	(bad)  
 801:	00 00                	add    %al,(%rax)
 803:	00 09                	add    %cl,(%rcx)
	...
 80d:	00 00                	add    %al,(%rax)
 80f:	00 e8                	add    %ch,%al
 811:	3f                   	(bad)  
 812:	00 00                	add    %al,(%rax)
 814:	00 00                	add    %al,(%rax)
 816:	00 00                	add    %al,(%rax)
 818:	06                   	(bad)  
 819:	00 00                	add    %al,(%rax)
 81b:	00 0a                	add    %cl,(%rdx)
	...
 825:	00 00                	add    %al,(%rax)
 827:	00 f0                	add    %dh,%al
 829:	3f                   	(bad)  
 82a:	00 00                	add    %al,(%rax)
 82c:	00 00                	add    %al,(%rax)
 82e:	00 00                	add    %al,(%rax)
 830:	06                   	(bad)  
 831:	00 00                	add    %al,(%rax)
 833:	00 0b                	add    %cl,(%rbx)
	...
 83d:	00 00                	add    %al,(%rax)
 83f:	00 f8                	add    %bh,%al
 841:	3f                   	(bad)  
 842:	00 00                	add    %al,(%rax)
 844:	00 00                	add    %al,(%rax)
 846:	00 00                	add    %al,(%rax)
 848:	06                   	(bad)  
 849:	00 00                	add    %al,(%rax)
 84b:	00 0c 00             	add    %cl,(%rax,%rax,1)
	...
 856:	00 00                	add    %al,(%rax)
 858:	40                   	rex
 859:	40 00 00             	rex add %al,(%rax)
 85c:	00 00                	add    %al,(%rax)
 85e:	00 00                	add    %al,(%rax)
 860:	05 00 00 00 0e       	add    $0xe000000,%eax
	...

Disassembly of section .rela.plt:

0000000000000870 <.rela.plt>:
 870:	98                   	cwtl   
 871:	3f                   	(bad)  
 872:	00 00                	add    %al,(%rax)
 874:	00 00                	add    %al,(%rax)
 876:	00 00                	add    %al,(%rax)
 878:	07                   	(bad)  
 879:	00 00                	add    %al,(%rax)
 87b:	00 03                	add    %al,(%rbx)
	...
 885:	00 00                	add    %al,(%rax)
 887:	00 a0 3f 00 00 00    	add    %ah,0x3f(%rax)
 88d:	00 00                	add    %al,(%rax)
 88f:	00 07                	add    %al,(%rdi)
 891:	00 00                	add    %al,(%rax)
 893:	00 04 00             	add    %al,(%rax,%rax,1)
	...
 89e:	00 00                	add    %al,(%rax)
 8a0:	a8 3f                	test   $0x3f,%al
 8a2:	00 00                	add    %al,(%rax)
 8a4:	00 00                	add    %al,(%rax)
 8a6:	00 00                	add    %al,(%rax)
 8a8:	07                   	(bad)  
 8a9:	00 00                	add    %al,(%rax)
 8ab:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 8b1 <__abi_tag+0x525>
 8b1:	00 00                	add    %al,(%rax)
 8b3:	00 00                	add    %al,(%rax)
 8b5:	00 00                	add    %al,(%rax)
 8b7:	00 b0 3f 00 00 00    	add    %dh,0x3f(%rax)
 8bd:	00 00                	add    %al,(%rax)
 8bf:	00 07                	add    %al,(%rdi)
 8c1:	00 00                	add    %al,(%rax)
 8c3:	00 06                	add    %al,(%rsi)
	...
 8cd:	00 00                	add    %al,(%rax)
 8cf:	00 b8 3f 00 00 00    	add    %bh,0x3f(%rax)
 8d5:	00 00                	add    %al,(%rax)
 8d7:	00 07                	add    %al,(%rdi)
 8d9:	00 00                	add    %al,(%rax)
 8db:	00 07                	add    %al,(%rdi)
	...
 8e5:	00 00                	add    %al,(%rax)
 8e7:	00 c0                	add    %al,%al
 8e9:	3f                   	(bad)  
 8ea:	00 00                	add    %al,(%rax)
 8ec:	00 00                	add    %al,(%rax)
 8ee:	00 00                	add    %al,(%rax)
 8f0:	07                   	(bad)  
 8f1:	00 00                	add    %al,(%rax)
 8f3:	00 08                	add    %cl,(%rax)
	...

Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__@Base>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 62 2f 00 00    	push   0x2f62(%rip)        # 3f88 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 63 2f 00 00 	bnd jmp *0x2f63(%rip)        # 3f90 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nopl   (%rax)
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	push   $0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	push   $0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	push   $0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    105f:	90                   	nop
    1060:	f3 0f 1e fa          	endbr64 
    1064:	68 03 00 00 00       	push   $0x3
    1069:	f2 e9 b1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    106f:	90                   	nop
    1070:	f3 0f 1e fa          	endbr64 
    1074:	68 04 00 00 00       	push   $0x4
    1079:	f2 e9 a1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    107f:	90                   	nop
    1080:	f3 0f 1e fa          	endbr64 
    1084:	68 05 00 00 00       	push   $0x5
    1089:	f2 e9 91 ff ff ff    	bnd jmp 1020 <_init+0x20>
    108f:	90                   	nop

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090:	f3 0f 1e fa          	endbr64 
    1094:	f2 ff 25 2d 2f 00 00 	bnd jmp *0x2f2d(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    109b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

00000000000010a0 <__cxa_atexit@plt>:
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	f2 ff 25 ed 2e 00 00 	bnd jmp *0x2eed(%rip)        # 3f98 <__cxa_atexit@GLIBC_2.2.5>
    10ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010b0 <_ZNSolsEPFRSoS_E@plt>:
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	f2 ff 25 e5 2e 00 00 	bnd jmp *0x2ee5(%rip)        # 3fa0 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
    10bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010c0 <__stack_chk_fail@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 dd 2e 00 00 	bnd jmp *0x2edd(%rip)        # 3fa8 <__stack_chk_fail@GLIBC_2.4>
    10cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 d5 2e 00 00 	bnd jmp *0x2ed5(%rip)        # 3fb0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4>
    10db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010e0 <_ZNSt8ios_base4InitC1Ev@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 cd 2e 00 00 	bnd jmp *0x2ecd(%rip)        # 3fb8 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    10eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010f0 <_ZNSolsEi@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 c5 2e 00 00 	bnd jmp *0x2ec5(%rip)        # 3fc0 <_ZNSolsEi@GLIBCXX_3.4>
    10fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001100 <_start>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	31 ed                	xor    %ebp,%ebp
    1106:	49 89 d1             	mov    %rdx,%r9
    1109:	5e                   	pop    %rsi
    110a:	48 89 e2             	mov    %rsp,%rdx
    110d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1111:	50                   	push   %rax
    1112:	54                   	push   %rsp
    1113:	45 31 c0             	xor    %r8d,%r8d
    1116:	31 c9                	xor    %ecx,%ecx
    1118:	48 8d 3d 9e 01 00 00 	lea    0x19e(%rip),%rdi        # 12bd <main>
    111f:	ff 15 b3 2e 00 00    	call   *0x2eb3(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    1125:	f4                   	hlt    
    1126:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    112d:	00 00 00 

0000000000001130 <deregister_tm_clones>:
    1130:	48 8d 3d d9 2e 00 00 	lea    0x2ed9(%rip),%rdi        # 4010 <__TMC_END__>
    1137:	48 8d 05 d2 2e 00 00 	lea    0x2ed2(%rip),%rax        # 4010 <__TMC_END__>
    113e:	48 39 f8             	cmp    %rdi,%rax
    1141:	74 15                	je     1158 <deregister_tm_clones+0x28>
    1143:	48 8b 05 96 2e 00 00 	mov    0x2e96(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    114a:	48 85 c0             	test   %rax,%rax
    114d:	74 09                	je     1158 <deregister_tm_clones+0x28>
    114f:	ff e0                	jmp    *%rax
    1151:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1158:	c3                   	ret    
    1159:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001160 <register_tm_clones>:
    1160:	48 8d 3d a9 2e 00 00 	lea    0x2ea9(%rip),%rdi        # 4010 <__TMC_END__>
    1167:	48 8d 35 a2 2e 00 00 	lea    0x2ea2(%rip),%rsi        # 4010 <__TMC_END__>
    116e:	48 29 fe             	sub    %rdi,%rsi
    1171:	48 89 f0             	mov    %rsi,%rax
    1174:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1178:	48 c1 f8 03          	sar    $0x3,%rax
    117c:	48 01 c6             	add    %rax,%rsi
    117f:	48 d1 fe             	sar    %rsi
    1182:	74 14                	je     1198 <register_tm_clones+0x38>
    1184:	48 8b 05 65 2e 00 00 	mov    0x2e65(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    118b:	48 85 c0             	test   %rax,%rax
    118e:	74 08                	je     1198 <register_tm_clones+0x38>
    1190:	ff e0                	jmp    *%rax
    1192:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1198:	c3                   	ret    
    1199:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011a0 <__do_global_dtors_aux>:
    11a0:	f3 0f 1e fa          	endbr64 
    11a4:	80 3d a5 2f 00 00 00 	cmpb   $0x0,0x2fa5(%rip)        # 4150 <completed.0>
    11ab:	75 2b                	jne    11d8 <__do_global_dtors_aux+0x38>
    11ad:	55                   	push   %rbp
    11ae:	48 83 3d 12 2e 00 00 	cmpq   $0x0,0x2e12(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    11b5:	00 
    11b6:	48 89 e5             	mov    %rsp,%rbp
    11b9:	74 0c                	je     11c7 <__do_global_dtors_aux+0x27>
    11bb:	48 8b 3d 46 2e 00 00 	mov    0x2e46(%rip),%rdi        # 4008 <__dso_handle>
    11c2:	e8 c9 fe ff ff       	call   1090 <__cxa_finalize@plt>
    11c7:	e8 64 ff ff ff       	call   1130 <deregister_tm_clones>
    11cc:	c6 05 7d 2f 00 00 01 	movb   $0x1,0x2f7d(%rip)        # 4150 <completed.0>
    11d3:	5d                   	pop    %rbp
    11d4:	c3                   	ret    
    11d5:	0f 1f 00             	nopl   (%rax)
    11d8:	c3                   	ret    
    11d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011e0 <frame_dummy>:
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	e9 77 ff ff ff       	jmp    1160 <register_tm_clones>

00000000000011e9 <_Z6matmulPA4_iS0_S0_i>:
    11e9:	f3 0f 1e fa          	endbr64 
    11ed:	55                   	push   %rbp
    11ee:	48 89 e5             	mov    %rsp,%rbp
    11f1:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    11f5:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    11f9:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
    11fd:	89 4d d4             	mov    %ecx,-0x2c(%rbp)
    1200:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    1207:	e9 a1 00 00 00       	jmp    12ad <_Z6matmulPA4_iS0_S0_i+0xc4>
    120c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    1213:	e9 85 00 00 00       	jmp    129d <_Z6matmulPA4_iS0_S0_i+0xb4>
    1218:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    121f:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    1226:	eb 4a                	jmp    1272 <_Z6matmulPA4_iS0_S0_i+0x89>
    1228:	8b 45 f0             	mov    -0x10(%rbp),%eax
    122b:	48 98                	cltq   
    122d:	48 c1 e0 04          	shl    $0x4,%rax
    1231:	48 89 c2             	mov    %rax,%rdx
    1234:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1238:	48 01 c2             	add    %rax,%rdx
    123b:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    123e:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1241:	01 c8                	add    %ecx,%eax
    1243:	48 98                	cltq   
    1245:	8b 14 82             	mov    (%rdx,%rax,4),%edx
    1248:	8b 4d f0             	mov    -0x10(%rbp),%ecx
    124b:	8b 45 fc             	mov    -0x4(%rbp),%eax
    124e:	01 c8                	add    %ecx,%eax
    1250:	48 98                	cltq   
    1252:	48 c1 e0 04          	shl    $0x4,%rax
    1256:	48 89 c1             	mov    %rax,%rcx
    1259:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    125d:	48 01 c1             	add    %rax,%rcx
    1260:	8b 45 f4             	mov    -0xc(%rbp),%eax
    1263:	48 98                	cltq   
    1265:	8b 04 81             	mov    (%rcx,%rax,4),%eax
    1268:	0f af c2             	imul   %edx,%eax
    126b:	01 45 f8             	add    %eax,-0x8(%rbp)
    126e:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    1272:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1275:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    1278:	7c ae                	jl     1228 <_Z6matmulPA4_iS0_S0_i+0x3f>
    127a:	8b 45 f0             	mov    -0x10(%rbp),%eax
    127d:	48 98                	cltq   
    127f:	48 c1 e0 04          	shl    $0x4,%rax
    1283:	48 89 c2             	mov    %rax,%rdx
    1286:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    128a:	48 8d 0c 02          	lea    (%rdx,%rax,1),%rcx
    128e:	8b 45 f4             	mov    -0xc(%rbp),%eax
    1291:	48 98                	cltq   
    1293:	8b 55 f8             	mov    -0x8(%rbp),%edx
    1296:	89 14 81             	mov    %edx,(%rcx,%rax,4)
    1299:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    129d:	8b 45 f4             	mov    -0xc(%rbp),%eax
    12a0:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    12a3:	0f 8c 6f ff ff ff    	jl     1218 <_Z6matmulPA4_iS0_S0_i+0x2f>
    12a9:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    12ad:	8b 45 f0             	mov    -0x10(%rbp),%eax
    12b0:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    12b3:	0f 8c 53 ff ff ff    	jl     120c <_Z6matmulPA4_iS0_S0_i+0x23>
    12b9:	90                   	nop
    12ba:	90                   	nop
    12bb:	5d                   	pop    %rbp
    12bc:	c3                   	ret    

00000000000012bd <main>:
    12bd:	f3 0f 1e fa          	endbr64 
    12c1:	55                   	push   %rbp
    12c2:	48 89 e5             	mov    %rsp,%rbp
    12c5:	48 81 ec e0 00 00 00 	sub    $0xe0,%rsp
    12cc:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    12d3:	00 00 
    12d5:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    12d9:	31 c0                	xor    %eax,%eax
    12db:	c7 85 30 ff ff ff 01 	movl   $0x1,-0xd0(%rbp)
    12e2:	00 00 00 
    12e5:	c7 85 34 ff ff ff 01 	movl   $0x1,-0xcc(%rbp)
    12ec:	00 00 00 
    12ef:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%rbp)
    12f6:	00 00 00 
    12f9:	c7 85 3c ff ff ff 01 	movl   $0x1,-0xc4(%rbp)
    1300:	00 00 00 
    1303:	c7 85 40 ff ff ff 01 	movl   $0x1,-0xc0(%rbp)
    130a:	00 00 00 
    130d:	c7 85 44 ff ff ff 01 	movl   $0x1,-0xbc(%rbp)
    1314:	00 00 00 
    1317:	c7 85 48 ff ff ff 01 	movl   $0x1,-0xb8(%rbp)
    131e:	00 00 00 
    1321:	c7 85 4c ff ff ff 01 	movl   $0x1,-0xb4(%rbp)
    1328:	00 00 00 
    132b:	c7 85 50 ff ff ff 01 	movl   $0x1,-0xb0(%rbp)
    1332:	00 00 00 
    1335:	c7 85 54 ff ff ff 01 	movl   $0x1,-0xac(%rbp)
    133c:	00 00 00 
    133f:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%rbp)
    1346:	00 00 00 
    1349:	c7 85 5c ff ff ff 01 	movl   $0x1,-0xa4(%rbp)
    1350:	00 00 00 
    1353:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%rbp)
    135a:	00 00 00 
    135d:	c7 85 64 ff ff ff 01 	movl   $0x1,-0x9c(%rbp)
    1364:	00 00 00 
    1367:	c7 85 68 ff ff ff 01 	movl   $0x1,-0x98(%rbp)
    136e:	00 00 00 
    1371:	c7 85 6c ff ff ff 01 	movl   $0x1,-0x94(%rbp)
    1378:	00 00 00 
    137b:	c7 85 70 ff ff ff 02 	movl   $0x2,-0x90(%rbp)
    1382:	00 00 00 
    1385:	c7 85 74 ff ff ff 02 	movl   $0x2,-0x8c(%rbp)
    138c:	00 00 00 
    138f:	c7 85 78 ff ff ff 02 	movl   $0x2,-0x88(%rbp)
    1396:	00 00 00 
    1399:	c7 85 7c ff ff ff 02 	movl   $0x2,-0x84(%rbp)
    13a0:	00 00 00 
    13a3:	c7 45 80 02 00 00 00 	movl   $0x2,-0x80(%rbp)
    13aa:	c7 45 84 02 00 00 00 	movl   $0x2,-0x7c(%rbp)
    13b1:	c7 45 88 02 00 00 00 	movl   $0x2,-0x78(%rbp)
    13b8:	c7 45 8c 02 00 00 00 	movl   $0x2,-0x74(%rbp)
    13bf:	c7 45 90 02 00 00 00 	movl   $0x2,-0x70(%rbp)
    13c6:	c7 45 94 02 00 00 00 	movl   $0x2,-0x6c(%rbp)
    13cd:	c7 45 98 02 00 00 00 	movl   $0x2,-0x68(%rbp)
    13d4:	c7 45 9c 02 00 00 00 	movl   $0x2,-0x64(%rbp)
    13db:	c7 45 a0 02 00 00 00 	movl   $0x2,-0x60(%rbp)
    13e2:	c7 45 a4 02 00 00 00 	movl   $0x2,-0x5c(%rbp)
    13e9:	c7 45 a8 02 00 00 00 	movl   $0x2,-0x58(%rbp)
    13f0:	c7 45 ac 02 00 00 00 	movl   $0x2,-0x54(%rbp)
    13f7:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
    13fb:	48 8d b5 70 ff ff ff 	lea    -0x90(%rbp),%rsi
    1402:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    1409:	b9 04 00 00 00       	mov    $0x4,%ecx
    140e:	48 89 c7             	mov    %rax,%rdi
    1411:	e8 d3 fd ff ff       	call   11e9 <_Z6matmulPA4_iS0_S0_i>
    1416:	c7 85 28 ff ff ff 00 	movl   $0x0,-0xd8(%rbp)
    141d:	00 00 00 
    1420:	eb 76                	jmp    1498 <main+0x1db>
    1422:	c7 85 2c ff ff ff 00 	movl   $0x0,-0xd4(%rbp)
    1429:	00 00 00 
    142c:	eb 41                	jmp    146f <main+0x1b2>
    142e:	8b 85 2c ff ff ff    	mov    -0xd4(%rbp),%eax
    1434:	48 63 d0             	movslq %eax,%rdx
    1437:	8b 85 28 ff ff ff    	mov    -0xd8(%rbp),%eax
    143d:	48 98                	cltq   
    143f:	48 c1 e0 02          	shl    $0x2,%rax
    1443:	48 01 d0             	add    %rdx,%rax
    1446:	8b 44 85 b0          	mov    -0x50(%rbp,%rax,4),%eax
    144a:	89 c6                	mov    %eax,%esi
    144c:	48 8d 05 ed 2b 00 00 	lea    0x2bed(%rip),%rax        # 4040 <_ZSt4cout@GLIBCXX_3.4>
    1453:	48 89 c7             	mov    %rax,%rdi
    1456:	e8 95 fc ff ff       	call   10f0 <_ZNSolsEi@plt>
    145b:	be 20 00 00 00       	mov    $0x20,%esi
    1460:	48 89 c7             	mov    %rax,%rdi
    1463:	e8 68 fc ff ff       	call   10d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>
    1468:	83 85 2c ff ff ff 01 	addl   $0x1,-0xd4(%rbp)
    146f:	83 bd 2c ff ff ff 03 	cmpl   $0x3,-0xd4(%rbp)
    1476:	7e b6                	jle    142e <main+0x171>
    1478:	48 8b 05 51 2b 00 00 	mov    0x2b51(%rip),%rax        # 3fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    147f:	48 89 c6             	mov    %rax,%rsi
    1482:	48 8d 05 b7 2b 00 00 	lea    0x2bb7(%rip),%rax        # 4040 <_ZSt4cout@GLIBCXX_3.4>
    1489:	48 89 c7             	mov    %rax,%rdi
    148c:	e8 1f fc ff ff       	call   10b0 <_ZNSolsEPFRSoS_E@plt>
    1491:	83 85 28 ff ff ff 01 	addl   $0x1,-0xd8(%rbp)
    1498:	83 bd 28 ff ff ff 03 	cmpl   $0x3,-0xd8(%rbp)
    149f:	7e 81                	jle    1422 <main+0x165>
    14a1:	b8 00 00 00 00       	mov    $0x0,%eax
    14a6:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    14aa:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    14b1:	00 00 
    14b3:	74 05                	je     14ba <main+0x1fd>
    14b5:	e8 06 fc ff ff       	call   10c0 <__stack_chk_fail@plt>
    14ba:	c9                   	leave  
    14bb:	c3                   	ret    

00000000000014bc <_Z41__static_initialization_and_destruction_0ii>:
    14bc:	f3 0f 1e fa          	endbr64 
    14c0:	55                   	push   %rbp
    14c1:	48 89 e5             	mov    %rsp,%rbp
    14c4:	48 83 ec 10          	sub    $0x10,%rsp
    14c8:	89 7d fc             	mov    %edi,-0x4(%rbp)
    14cb:	89 75 f8             	mov    %esi,-0x8(%rbp)
    14ce:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    14d2:	75 3b                	jne    150f <_Z41__static_initialization_and_destruction_0ii+0x53>
    14d4:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    14db:	75 32                	jne    150f <_Z41__static_initialization_and_destruction_0ii+0x53>
    14dd:	48 8d 05 6d 2c 00 00 	lea    0x2c6d(%rip),%rax        # 4151 <_ZStL8__ioinit>
    14e4:	48 89 c7             	mov    %rax,%rdi
    14e7:	e8 f4 fb ff ff       	call   10e0 <_ZNSt8ios_base4InitC1Ev@plt>
    14ec:	48 8d 05 15 2b 00 00 	lea    0x2b15(%rip),%rax        # 4008 <__dso_handle>
    14f3:	48 89 c2             	mov    %rax,%rdx
    14f6:	48 8d 05 54 2c 00 00 	lea    0x2c54(%rip),%rax        # 4151 <_ZStL8__ioinit>
    14fd:	48 89 c6             	mov    %rax,%rsi
    1500:	48 8b 05 f1 2a 00 00 	mov    0x2af1(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    1507:	48 89 c7             	mov    %rax,%rdi
    150a:	e8 91 fb ff ff       	call   10a0 <__cxa_atexit@plt>
    150f:	90                   	nop
    1510:	c9                   	leave  
    1511:	c3                   	ret    

0000000000001512 <_GLOBAL__sub_I__Z6matmulPA4_iS0_S0_i>:
    1512:	f3 0f 1e fa          	endbr64 
    1516:	55                   	push   %rbp
    1517:	48 89 e5             	mov    %rsp,%rbp
    151a:	be ff ff 00 00       	mov    $0xffff,%esi
    151f:	bf 01 00 00 00       	mov    $0x1,%edi
    1524:	e8 93 ff ff ff       	call   14bc <_Z41__static_initialization_and_destruction_0ii>
    1529:	5d                   	pop    %rbp
    152a:	c3                   	ret    

Disassembly of section .fini:

000000000000152c <_fini>:
    152c:	f3 0f 1e fa          	endbr64 
    1530:	48 83 ec 08          	sub    $0x8,%rsp
    1534:	48 83 c4 08          	add    $0x8,%rsp
    1538:	c3                   	ret    

Disassembly of section .rodata:

0000000000002000 <_IO_stdin_used>:
    2000:	01 00                	add    %eax,(%rax)
    2002:	02 00                	add    (%rax),%al

Disassembly of section .eh_frame_hdr:

0000000000002004 <__GNU_EH_FRAME_HDR>:
    2004:	01 1b                	add    %ebx,(%rbx)
    2006:	03 3b                	add    (%rbx),%edi
    2008:	48 00 00             	rex.W add %al,(%rax)
    200b:	00 08                	add    %cl,(%rax)
    200d:	00 00                	add    %al,(%rax)
    200f:	00 1c f0             	add    %bl,(%rax,%rsi,8)
    2012:	ff                   	(bad)  
    2013:	ff                   	(bad)  
    2014:	7c 00                	jl     2016 <__GNU_EH_FRAME_HDR+0x12>
    2016:	00 00                	add    %al,(%rax)
    2018:	8c f0                	mov    %?,%eax
    201a:	ff                   	(bad)  
    201b:	ff a4 00 00 00 9c f0 	jmp    *-0xf640000(%rax,%rax,1)
    2022:	ff                   	(bad)  
    2023:	ff                   	(bad)  
    2024:	bc 00 00 00 fc       	mov    $0xfc000000,%esp
    2029:	f0 ff                	lock (bad) 
    202b:	ff 64 00 00          	jmp    *0x0(%rax,%rax,1)
    202f:	00 e5                	add    %ah,%ch
    2031:	f1                   	int1   
    2032:	ff                   	(bad)  
    2033:	ff d4                	call   *%rsp
    2035:	00 00                	add    %al,(%rax)
    2037:	00 b9 f2 ff ff f4    	add    %bh,-0xb00000e(%rcx)
    203d:	00 00                	add    %al,(%rax)
    203f:	00 b8 f4 ff ff 14    	add    %bh,0x14fffff4(%rax)
    2045:	01 00                	add    %eax,(%rax)
    2047:	00 0e                	add    %cl,(%rsi)
    2049:	f5                   	cmc    
    204a:	ff                   	(bad)  
    204b:	ff 34 01             	push   (%rcx,%rax,1)
	...

Disassembly of section .eh_frame:

0000000000002050 <__FRAME_END__-0x108>:
    2050:	14 00                	adc    $0x0,%al
    2052:	00 00                	add    %al,(%rax)
    2054:	00 00                	add    %al,(%rax)
    2056:	00 00                	add    %al,(%rax)
    2058:	01 7a 52             	add    %edi,0x52(%rdx)
    205b:	00 01                	add    %al,(%rcx)
    205d:	78 10                	js     206f <__GNU_EH_FRAME_HDR+0x6b>
    205f:	01 1b                	add    %ebx,(%rbx)
    2061:	0c 07                	or     $0x7,%al
    2063:	08 90 01 00 00 14    	or     %dl,0x14000001(%rax)
    2069:	00 00                	add    %al,(%rax)
    206b:	00 1c 00             	add    %bl,(%rax,%rax,1)
    206e:	00 00                	add    %al,(%rax)
    2070:	90                   	nop
    2071:	f0 ff                	lock (bad) 
    2073:	ff 26                	jmp    *(%rsi)
    2075:	00 00                	add    %al,(%rax)
    2077:	00 00                	add    %al,(%rax)
    2079:	44 07                	rex.R (bad) 
    207b:	10 00                	adc    %al,(%rax)
    207d:	00 00                	add    %al,(%rax)
    207f:	00 24 00             	add    %ah,(%rax,%rax,1)
    2082:	00 00                	add    %al,(%rax)
    2084:	34 00                	xor    $0x0,%al
    2086:	00 00                	add    %al,(%rax)
    2088:	98                   	cwtl   
    2089:	ef                   	out    %eax,(%dx)
    208a:	ff                   	(bad)  
    208b:	ff 70 00             	push   0x0(%rax)
    208e:	00 00                	add    %al,(%rax)
    2090:	00 0e                	add    %cl,(%rsi)
    2092:	10 46 0e             	adc    %al,0xe(%rsi)
    2095:	18 4a 0f             	sbb    %cl,0xf(%rdx)
    2098:	0b 77 08             	or     0x8(%rdi),%esi
    209b:	80 00 3f             	addb   $0x3f,(%rax)
    209e:	1a 3a                	sbb    (%rdx),%bh
    20a0:	2a 33                	sub    (%rbx),%dh
    20a2:	24 22                	and    $0x22,%al
    20a4:	00 00                	add    %al,(%rax)
    20a6:	00 00                	add    %al,(%rax)
    20a8:	14 00                	adc    $0x0,%al
    20aa:	00 00                	add    %al,(%rax)
    20ac:	5c                   	pop    %rsp
    20ad:	00 00                	add    %al,(%rax)
    20af:	00 e0                	add    %ah,%al
    20b1:	ef                   	out    %eax,(%dx)
    20b2:	ff                   	(bad)  
    20b3:	ff 10                	call   *(%rax)
	...
    20bd:	00 00                	add    %al,(%rax)
    20bf:	00 14 00             	add    %dl,(%rax,%rax,1)
    20c2:	00 00                	add    %al,(%rax)
    20c4:	74 00                	je     20c6 <__GNU_EH_FRAME_HDR+0xc2>
    20c6:	00 00                	add    %al,(%rax)
    20c8:	d8 ef                	fsubr  %st(7),%st
    20ca:	ff                   	(bad)  
    20cb:	ff 60 00             	jmp    *0x0(%rax)
	...
    20d6:	00 00                	add    %al,(%rax)
    20d8:	1c 00                	sbb    $0x0,%al
    20da:	00 00                	add    %al,(%rax)
    20dc:	8c 00                	mov    %es,(%rax)
    20de:	00 00                	add    %al,(%rax)
    20e0:	09 f1                	or     %esi,%ecx
    20e2:	ff                   	(bad)  
    20e3:	ff d4                	call   *%rsp
    20e5:	00 00                	add    %al,(%rax)
    20e7:	00 00                	add    %al,(%rax)
    20e9:	45 0e                	rex.RB (bad) 
    20eb:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
    20f1:	02 cb                	add    %bl,%cl
    20f3:	0c 07                	or     $0x7,%al
    20f5:	08 00                	or     %al,(%rax)
    20f7:	00 1c 00             	add    %bl,(%rax,%rax,1)
    20fa:	00 00                	add    %al,(%rax)
    20fc:	ac                   	lods   %ds:(%rsi),%al
    20fd:	00 00                	add    %al,(%rax)
    20ff:	00 bd f1 ff ff ff    	add    %bh,-0xf(%rbp)
    2105:	01 00                	add    %eax,(%rax)
    2107:	00 00                	add    %al,(%rax)
    2109:	45 0e                	rex.RB (bad) 
    210b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
    2111:	03 f6                	add    %esi,%esi
    2113:	01 0c 07             	add    %ecx,(%rdi,%rax,1)
    2116:	08 00                	or     %al,(%rax)
    2118:	1c 00                	sbb    $0x0,%al
    211a:	00 00                	add    %al,(%rax)
    211c:	cc                   	int3   
    211d:	00 00                	add    %al,(%rax)
    211f:	00 9c f3 ff ff 56 00 	add    %bl,0x56ffff(%rbx,%rsi,8)
    2126:	00 00                	add    %al,(%rax)
    2128:	00 45 0e             	add    %al,0xe(%rbp)
    212b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
    2131:	02 4d 0c             	add    0xc(%rbp),%cl
    2134:	07                   	(bad)  
    2135:	08 00                	or     %al,(%rax)
    2137:	00 1c 00             	add    %bl,(%rax,%rax,1)
    213a:	00 00                	add    %al,(%rax)
    213c:	ec                   	in     (%dx),%al
    213d:	00 00                	add    %al,(%rax)
    213f:	00 d2                	add    %dl,%dl
    2141:	f3 ff                	repz (bad) 
    2143:	ff 19                	lcall  *(%rcx)
    2145:	00 00                	add    %al,(%rax)
    2147:	00 00                	add    %al,(%rax)
    2149:	45 0e                	rex.RB (bad) 
    214b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
    2151:	50                   	push   %rax
    2152:	0c 07                	or     $0x7,%al
    2154:	08 00                	or     %al,(%rax)
	...

0000000000002158 <__FRAME_END__>:
    2158:	00 00                	add    %al,(%rax)
	...

Disassembly of section .init_array:

0000000000003d68 <__frame_dummy_init_array_entry>:
    3d68:	e0 11                	loopne 3d7b <__do_global_dtors_aux_fini_array_entry+0x3>
    3d6a:	00 00                	add    %al,(%rax)
    3d6c:	00 00                	add    %al,(%rax)
    3d6e:	00 00                	add    %al,(%rax)
    3d70:	12 15 00 00 00 00    	adc    0x0(%rip),%dl        # 3d76 <__frame_dummy_init_array_entry+0xe>
	...

Disassembly of section .fini_array:

0000000000003d78 <__do_global_dtors_aux_fini_array_entry>:
    3d78:	a0                   	.byte 0xa0
    3d79:	11 00                	adc    %eax,(%rax)
    3d7b:	00 00                	add    %al,(%rax)
    3d7d:	00 00                	add    %al,(%rax)
	...

Disassembly of section .dynamic:

0000000000003d80 <_DYNAMIC>:
    3d80:	01 00                	add    %eax,(%rax)
    3d82:	00 00                	add    %al,(%rax)
    3d84:	00 00                	add    %al,(%rax)
    3d86:	00 00                	add    %al,(%rax)
    3d88:	4b 01 00             	rex.WXB add %rax,(%r8)
    3d8b:	00 00                	add    %al,(%rax)
    3d8d:	00 00                	add    %al,(%rax)
    3d8f:	00 01                	add    %al,(%rcx)
    3d91:	00 00                	add    %al,(%rax)
    3d93:	00 00                	add    %al,(%rax)
    3d95:	00 00                	add    %al,(%rax)
    3d97:	00 5a 01             	add    %bl,0x1(%rdx)
    3d9a:	00 00                	add    %al,(%rax)
    3d9c:	00 00                	add    %al,(%rax)
    3d9e:	00 00                	add    %al,(%rax)
    3da0:	0c 00                	or     $0x0,%al
    3da2:	00 00                	add    %al,(%rax)
    3da4:	00 00                	add    %al,(%rax)
    3da6:	00 00                	add    %al,(%rax)
    3da8:	00 10                	add    %dl,(%rax)
    3daa:	00 00                	add    %al,(%rax)
    3dac:	00 00                	add    %al,(%rax)
    3dae:	00 00                	add    %al,(%rax)
    3db0:	0d 00 00 00 00       	or     $0x0,%eax
    3db5:	00 00                	add    %al,(%rax)
    3db7:	00 2c 15 00 00 00 00 	add    %ch,0x0(,%rdx,1)
    3dbe:	00 00                	add    %al,(%rax)
    3dc0:	19 00                	sbb    %eax,(%rax)
    3dc2:	00 00                	add    %al,(%rax)
    3dc4:	00 00                	add    %al,(%rax)
    3dc6:	00 00                	add    %al,(%rax)
    3dc8:	68 3d 00 00 00       	push   $0x3d
    3dcd:	00 00                	add    %al,(%rax)
    3dcf:	00 1b                	add    %bl,(%rbx)
    3dd1:	00 00                	add    %al,(%rax)
    3dd3:	00 00                	add    %al,(%rax)
    3dd5:	00 00                	add    %al,(%rax)
    3dd7:	00 10                	add    %dl,(%rax)
    3dd9:	00 00                	add    %al,(%rax)
    3ddb:	00 00                	add    %al,(%rax)
    3ddd:	00 00                	add    %al,(%rax)
    3ddf:	00 1a                	add    %bl,(%rdx)
    3de1:	00 00                	add    %al,(%rax)
    3de3:	00 00                	add    %al,(%rax)
    3de5:	00 00                	add    %al,(%rax)
    3de7:	00 78 3d             	add    %bh,0x3d(%rax)
    3dea:	00 00                	add    %al,(%rax)
    3dec:	00 00                	add    %al,(%rax)
    3dee:	00 00                	add    %al,(%rax)
    3df0:	1c 00                	sbb    $0x0,%al
    3df2:	00 00                	add    %al,(%rax)
    3df4:	00 00                	add    %al,(%rax)
    3df6:	00 00                	add    %al,(%rax)
    3df8:	08 00                	or     %al,(%rax)
    3dfa:	00 00                	add    %al,(%rax)
    3dfc:	00 00                	add    %al,(%rax)
    3dfe:	00 00                	add    %al,(%rax)
    3e00:	f5                   	cmc    
    3e01:	fe                   	(bad)  
    3e02:	ff 6f 00             	ljmp   *0x0(%rdi)
    3e05:	00 00                	add    %al,(%rax)
    3e07:	00 b0 03 00 00 00    	add    %dh,0x3(%rax)
    3e0d:	00 00                	add    %al,(%rax)
    3e0f:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 3e15 <_DYNAMIC+0x95>
    3e15:	00 00                	add    %al,(%rax)
    3e17:	00 40 05             	add    %al,0x5(%rax)
    3e1a:	00 00                	add    %al,(%rax)
    3e1c:	00 00                	add    %al,(%rax)
    3e1e:	00 00                	add    %al,(%rax)
    3e20:	06                   	(bad)  
    3e21:	00 00                	add    %al,(%rax)
    3e23:	00 00                	add    %al,(%rax)
    3e25:	00 00                	add    %al,(%rax)
    3e27:	00 d8                	add    %bl,%al
    3e29:	03 00                	add    (%rax),%eax
    3e2b:	00 00                	add    %al,(%rax)
    3e2d:	00 00                	add    %al,(%rax)
    3e2f:	00 0a                	add    %cl,(%rdx)
    3e31:	00 00                	add    %al,(%rax)
    3e33:	00 00                	add    %al,(%rax)
    3e35:	00 00                	add    %al,(%rax)
    3e37:	00 91 01 00 00 00    	add    %dl,0x1(%rcx)
    3e3d:	00 00                	add    %al,(%rax)
    3e3f:	00 0b                	add    %cl,(%rbx)
    3e41:	00 00                	add    %al,(%rax)
    3e43:	00 00                	add    %al,(%rax)
    3e45:	00 00                	add    %al,(%rax)
    3e47:	00 18                	add    %bl,(%rax)
    3e49:	00 00                	add    %al,(%rax)
    3e4b:	00 00                	add    %al,(%rax)
    3e4d:	00 00                	add    %al,(%rax)
    3e4f:	00 15 00 00 00 00    	add    %dl,0x0(%rip)        # 3e55 <_DYNAMIC+0xd5>
	...
    3e5d:	00 00                	add    %al,(%rax)
    3e5f:	00 03                	add    %al,(%rbx)
    3e61:	00 00                	add    %al,(%rax)
    3e63:	00 00                	add    %al,(%rax)
    3e65:	00 00                	add    %al,(%rax)
    3e67:	00 80 3f 00 00 00    	add    %al,0x3f(%rax)
    3e6d:	00 00                	add    %al,(%rax)
    3e6f:	00 02                	add    %al,(%rdx)
    3e71:	00 00                	add    %al,(%rax)
    3e73:	00 00                	add    %al,(%rax)
    3e75:	00 00                	add    %al,(%rax)
    3e77:	00 90 00 00 00 00    	add    %dl,0x0(%rax)
    3e7d:	00 00                	add    %al,(%rax)
    3e7f:	00 14 00             	add    %dl,(%rax,%rax,1)
    3e82:	00 00                	add    %al,(%rax)
    3e84:	00 00                	add    %al,(%rax)
    3e86:	00 00                	add    %al,(%rax)
    3e88:	07                   	(bad)  
    3e89:	00 00                	add    %al,(%rax)
    3e8b:	00 00                	add    %al,(%rax)
    3e8d:	00 00                	add    %al,(%rax)
    3e8f:	00 17                	add    %dl,(%rdi)
    3e91:	00 00                	add    %al,(%rax)
    3e93:	00 00                	add    %al,(%rax)
    3e95:	00 00                	add    %al,(%rax)
    3e97:	00 70 08             	add    %dh,0x8(%rax)
    3e9a:	00 00                	add    %al,(%rax)
    3e9c:	00 00                	add    %al,(%rax)
    3e9e:	00 00                	add    %al,(%rax)
    3ea0:	07                   	(bad)  
    3ea1:	00 00                	add    %al,(%rax)
    3ea3:	00 00                	add    %al,(%rax)
    3ea5:	00 00                	add    %al,(%rax)
    3ea7:	00 50 07             	add    %dl,0x7(%rax)
    3eaa:	00 00                	add    %al,(%rax)
    3eac:	00 00                	add    %al,(%rax)
    3eae:	00 00                	add    %al,(%rax)
    3eb0:	08 00                	or     %al,(%rax)
    3eb2:	00 00                	add    %al,(%rax)
    3eb4:	00 00                	add    %al,(%rax)
    3eb6:	00 00                	add    %al,(%rax)
    3eb8:	20 01                	and    %al,(%rcx)
    3eba:	00 00                	add    %al,(%rax)
    3ebc:	00 00                	add    %al,(%rax)
    3ebe:	00 00                	add    %al,(%rax)
    3ec0:	09 00                	or     %eax,(%rax)
    3ec2:	00 00                	add    %al,(%rax)
    3ec4:	00 00                	add    %al,(%rax)
    3ec6:	00 00                	add    %al,(%rax)
    3ec8:	18 00                	sbb    %al,(%rax)
    3eca:	00 00                	add    %al,(%rax)
    3ecc:	00 00                	add    %al,(%rax)
    3ece:	00 00                	add    %al,(%rax)
    3ed0:	1e                   	(bad)  
    3ed1:	00 00                	add    %al,(%rax)
    3ed3:	00 00                	add    %al,(%rax)
    3ed5:	00 00                	add    %al,(%rax)
    3ed7:	00 08                	add    %cl,(%rax)
    3ed9:	00 00                	add    %al,(%rax)
    3edb:	00 00                	add    %al,(%rax)
    3edd:	00 00                	add    %al,(%rax)
    3edf:	00 fb                	add    %bh,%bl
    3ee1:	ff                   	(bad)  
    3ee2:	ff 6f 00             	ljmp   *0x0(%rdi)
    3ee5:	00 00                	add    %al,(%rax)
    3ee7:	00 01                	add    %al,(%rcx)
    3ee9:	00 00                	add    %al,(%rax)
    3eeb:	08 00                	or     %al,(%rax)
    3eed:	00 00                	add    %al,(%rax)
    3eef:	00 fe                	add    %bh,%dh
    3ef1:	ff                   	(bad)  
    3ef2:	ff 6f 00             	ljmp   *0x0(%rdi)
    3ef5:	00 00                	add    %al,(%rax)
    3ef7:	00 f0                	add    %dh,%al
    3ef9:	06                   	(bad)  
    3efa:	00 00                	add    %al,(%rax)
    3efc:	00 00                	add    %al,(%rax)
    3efe:	00 00                	add    %al,(%rax)
    3f00:	ff                   	(bad)  
    3f01:	ff                   	(bad)  
    3f02:	ff 6f 00             	ljmp   *0x0(%rdi)
    3f05:	00 00                	add    %al,(%rax)
    3f07:	00 02                	add    %al,(%rdx)
    3f09:	00 00                	add    %al,(%rax)
    3f0b:	00 00                	add    %al,(%rax)
    3f0d:	00 00                	add    %al,(%rax)
    3f0f:	00 f0                	add    %dh,%al
    3f11:	ff                   	(bad)  
    3f12:	ff 6f 00             	ljmp   *0x0(%rdi)
    3f15:	00 00                	add    %al,(%rax)
    3f17:	00 d2                	add    %dl,%dl
    3f19:	06                   	(bad)  
    3f1a:	00 00                	add    %al,(%rax)
    3f1c:	00 00                	add    %al,(%rax)
    3f1e:	00 00                	add    %al,(%rax)
    3f20:	f9                   	stc    
    3f21:	ff                   	(bad)  
    3f22:	ff 6f 00             	ljmp   *0x0(%rdi)
    3f25:	00 00                	add    %al,(%rax)
    3f27:	00 04 00             	add    %al,(%rax,%rax,1)
	...

Disassembly of section .got:

0000000000003f80 <_GLOBAL_OFFSET_TABLE_>:
    3f80:	80 3d 00 00 00 00 00 	cmpb   $0x0,0x0(%rip)        # 3f87 <_GLOBAL_OFFSET_TABLE_+0x7>
	...
    3f97:	00 30                	add    %dh,(%rax)
    3f99:	10 00                	adc    %al,(%rax)
    3f9b:	00 00                	add    %al,(%rax)
    3f9d:	00 00                	add    %al,(%rax)
    3f9f:	00 40 10             	add    %al,0x10(%rax)
    3fa2:	00 00                	add    %al,(%rax)
    3fa4:	00 00                	add    %al,(%rax)
    3fa6:	00 00                	add    %al,(%rax)
    3fa8:	50                   	push   %rax
    3fa9:	10 00                	adc    %al,(%rax)
    3fab:	00 00                	add    %al,(%rax)
    3fad:	00 00                	add    %al,(%rax)
    3faf:	00 60 10             	add    %ah,0x10(%rax)
    3fb2:	00 00                	add    %al,(%rax)
    3fb4:	00 00                	add    %al,(%rax)
    3fb6:	00 00                	add    %al,(%rax)
    3fb8:	70 10                	jo     3fca <_GLOBAL_OFFSET_TABLE_+0x4a>
    3fba:	00 00                	add    %al,(%rax)
    3fbc:	00 00                	add    %al,(%rax)
    3fbe:	00 00                	add    %al,(%rax)
    3fc0:	80 10 00             	adcb   $0x0,(%rax)
	...

Disassembly of section .data:

0000000000004000 <__data_start>:
	...

0000000000004008 <__dso_handle>:
    4008:	08 40 00             	or     %al,0x0(%rax)
    400b:	00 00                	add    %al,(%rax)
    400d:	00 00                	add    %al,(%rax)
	...

Disassembly of section .bss:

0000000000004040 <_ZSt4cout@GLIBCXX_3.4>:
	...

0000000000004150 <completed.0>:
	...

0000000000004151 <_ZStL8__ioinit>:
    4151:	00 00                	add    %al,(%rax)
    4153:	00 00                	add    %al,(%rax)
    4155:	00 00                	add    %al,(%rax)
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp (%r8),%spl
   5:	28 55 62             	sub    %dl,0x62(%rbp)
   8:	75 6e                	jne    78 <__abi_tag-0x314>
   a:	74 75                	je     81 <__abi_tag-0x30b>
   c:	20 31                	and    %dh,(%rcx)
   e:	31 2e                	xor    %ebp,(%rsi)
  10:	34 2e                	xor    $0x2e,%al
  12:	30 2d 31 75 62 75    	xor    %ch,0x75627531(%rip)        # 75627549 <_end+0x756233f1>
  18:	6e                   	outsb  %ds:(%rsi),(%dx)
  19:	74 75                	je     90 <__abi_tag-0x2fc>
  1b:	31 7e 32             	xor    %edi,0x32(%rsi)
  1e:	32 2e                	xor    (%rsi),%ch
  20:	30 34 29             	xor    %dh,(%rcx,%rbp,1)
  23:	20 31                	and    %dh,(%rcx)
  25:	31 2e                	xor    %ebp,(%rsi)
  27:	34 2e                	xor    $0x2e,%al
  29:	30 00                	xor    %al,(%rax)
