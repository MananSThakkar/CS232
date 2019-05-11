// Sort4 – sorts (ascending) values in R0-R3. Your program must finish
// in 200 cycles or fewer.
//R10 is temp

(BEGIN)
//check value at R0 and R1
@R0
D=M
@R10   //store R1 at R10
M=D
@R1
D=M
@R10
D=M-D

//value at R0-R1 is greater than zero then swap.
@SWAP1
D;JGT

//check value at R1 and R2
@R1
D=M
@R10   //store R1 at R10
M=D
@R2
D=M
@R10
D=M-D

//value at R1-R2 is greater than zero then swap.
@SWAP2
D;JGT

//check value at R2 and R3
@R2
D=M
@R10   //store R2 at R10
M=D
@R3
D=M
@R10
D=M-D

//value at R2-R3 is greater than zero then swap.
@SWAP3
D;JGT

//sorting complete, end!.
(END)
@END
0;JMP

(SWAP1)  //R0 AND R1
//if R0 is greater then R1, put R0 in R10(temp) and R1 in R0 and put R10(temp) in R1
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

(SWAP2)  //R1 AND R2
//if R1 is greater then R2, put R1 in R10(temp) and R2 in R1 and put R10(temp) in R2
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

(SWAP3) //R2 AND R3
//if R2 is greater then R3, put R2 in R10(temp) and R3 in R2 and put R10(temp) in R3
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
