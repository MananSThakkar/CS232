// adds four numbers (found in RAM[0], …, RAM[3] or R0, …, R3
// equivalently) and stores result in RAM[0] (a.k.a. R0). Your program
// must finish in 30 cycles or fewer.

@R0
D=M

@R1
D=D+M

@R2
D=D+M

@R3
D=D+M

@R0
M=D

(end)
@end
0;JMP