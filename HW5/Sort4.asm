// Sort4 – sorts (ascending) values in R0-R3. Your program must finish
// in 200 cycles or fewer.

(BEGIN)
@R0
D=M
@R10 //temp
M=D

@R1
D=M
@R10
D=M-D

@SORT1
D;JGT

@R1
D=M
@R10
M=D

@R2
D=M
@R10
D=M-D

@SORT2
D;JGT

@R2
D=M
@R10
M=D

@R3
D=M
@R10
D=M-D

@SORT3
D;JGT

(END)
@END
0;JMP

(SORT1)  //R0 AND R1
@R0
D=M
@R10
M=D

@R1
D=M
@R0
M=D

@R10
D=M
@R1
M=D

@BEGIN
0;JMP

(SORT2)  //R1 AND R2
@R1
D=M
@R10
M=D

@R2
D=M
@R1
M=D

@R10
D=M
@R2
M=D

@BEGIN
0;JMP

(SORT3) //R2 AND R3
@R2
D=M
@R10
M=D

@R3
D=M
@R2
M=D

@R10
D=M
@R3
M=D

@BEGIN
0;JMP
