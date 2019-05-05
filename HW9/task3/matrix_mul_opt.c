//
//  matrix_mul_opt.c
//  
//
//  Created by Manan Thakkar on 5/4/19.
//

#include <sys/syscall.h>
#include "stdio.h"
#define Dim     2048

int A[Dim][Dim];
int B[Dim][Dim];
int C[Dim][Dim];

int
main()
{
    int i, j, k;
    
    for (i = 0; i < Dim; i++)        /* first initialize the matrices */
        for (j = 0; j < Dim; j++) {
            A[i][j] = i;
            B[i][j] = j;
            C[i][j] = 0;
        }
    
    for (i = 0; i < Dim; i++)        /* then multiply them together */
        for (k = 0; k < Dim; k++)
            for (j = 0; j < Dim; j++)
                C[i][j] += A[i][k] * B[k][j];
    
    printf("C[%d][%d] = %d\n", Dim-1, Dim-1, C[Dim-1][Dim-1]);
    return (C[Dim-1][Dim-1]);        /* and then we're done */
}

