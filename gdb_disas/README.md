查看汇编源码和调用栈

```shell
(gdb) disas
Dump of assembler code for function main():
   0x0000000000400667 <+0>:	    push   %rbp
   0x0000000000400668 <+1>:	    mov    %rsp,%rbp
   0x000000000040066b <+4>:	    movl   $0x1,-0xc(%rbp)
   0x0000000000400672 <+11>:	movl   $0x2,-0x8(%rbp)
=> 0x0000000000400679 <+18>:	mov    -0xc(%rbp),%edx     # =>表示当前程序运行到这一行
   0x000000000040067c <+21>:	mov    -0x8(%rbp),%eax
   0x000000000040067f <+24>:	add    %edx,%eax
   0x0000000000400681 <+26>:	mov    %eax,-0x4(%rbp)
   0x0000000000400684 <+29>:	mov    $0x0,%eax
   0x0000000000400689 <+34>:	pop    %rbp
   0x000000000040068a <+35>:	retq   
End of assembler dump.
(gdb) i r
rax            0x400667	4195943
rbx            0x0	0
rcx            0x120	288
rdx            0x7fffffffde18	140737488346648
rsi            0x7fffffffde08	140737488346632
rdi            0x1	1
rbp            0x7fffffffdd20	0x7fffffffdd20
rsp            0x7fffffffdd20	0x7fffffffdd20
r8             0x7ffff7dd4f60	140737351864160
r9             0x7ffff7dc8f20	140737351814944
r10            0x32f	815
r11            0x7ffff7664290	140737344062096
r12            0x400590	4195728
r13            0x7fffffffde00	140737488346624
r14            0x0	0
r15            0x0	0
rip            0x400679	0x400679 <main()+18>
eflags         0x246	[ PF ZF IF ]
cs             0x33	51
ss             0x2b	43
ds             0x0	0
es             0x0	0
fs             0x0	0
gs             0x0	0

```

