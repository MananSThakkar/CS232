// Max4 – finds the largest value in R0-R3 and stores result in R0. Your program must finish in 
// 100 cycles or fewer.


// @saveMax - TEMP RESGISTER
//@CompR0andR1 - TEMP RESGISTER
//@CompR0andR1andR2 - TEMP RESGISTER
//@CompR0andR1andR3 - TEMP RESGISTER



@R0
D=M
@saveMax 
M=D     

@R1
D=M
@saveMax
D=M-D 

@CompR0andR1
D;JGT  

@R1  
D=M
@saveMax 
M=D    

@CompR0andR1
0;JMP    

(CompR0andR1)
@R2
D=M
@saveMax
D=M-D   

@CompR0andR1andR2
D;JGT

@R2
D=M
@saveMax
M=D

@CompR0andR1andR2
0;JMP

(CompR0andR1andR2)
@R3
D=M
@saveMax
D=M-D

@CompR0andR1andR2andR3
D;JGT

@R3
D=M
@saveMax
M=D

@CompR0andR1andR2andR3
0;JMP

(CompR0andR1andR2andR3)
@saveMax
D=M
@R0
M=D

(END)
@END
0;JMP