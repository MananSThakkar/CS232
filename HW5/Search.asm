// Search – given a value to find in R0 and a memory address in R1 (>= 2) that indicates the last 
// position in memory of the values to search through, search through RAM[2]-RAM[n] (where n is 
// the value in R1) for the value R0. If the value is found, set R0 to 1. Otherwise, set R0 to 0.
// Your program must finish in 200 cycles or fewer.

//R20-R26 - using temp registers for temp values.


 @R0
 D=M
 @R20 //search for number
 M=D

 @R1
 D=M
 @R21 //max number
 M=D-1
 M=M-1

 @R1
 D=A
 @R22 //save number
 M=D
 (LOOP)
 @R22
 M=M+1
 A=M

 D=M
 @R23 //number searching for
 M=D

 @R20
 D=M
 @R23
 D=M-D

@R24 //If the number is Not Found
 D;JNE

@R25 //if the number is Found
 D;JEQ

(END)
 @END
 0;JMP // Infinite loop

(R24) //Number is Not Found
 @R21
 D=M
 M=M-1
 D=M

@R26 //Zero
 D;JLT

@LOOP
 D;JGE

(R25) //Number is Found
 @R0
 D=M
 M=1

 @END
 0;JMP // Infinite loop

 (R26) // if Zero
 @R0
 D=M
 M=0

 @END
 0;JMP // Infinite loop

