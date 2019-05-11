#include <stdio.h>
#include <stdlib.h>
// Note, the bits are counted from right to left. 
// Return the bit states of x within range of [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
unsigned * get_bits(unsigned x,
                 unsigned start,
                 unsigned end) {

    // Returning NULL is a placeholder
    // get_bits dynamically allocates an array a and set a[i] = 1 when (i+start)-th bit
    // of x is 1, otherwise set a[i] = 0;
    // At last, get_bits returns the address of the array.

    unsigned * a = (unsigned *)malloc((end - start + 1) * sizeof(int));
    for(int i = 31; i >= start; i--){
        x = a[i + start];
        if (x == 1){
            a[i] = 1;
        }
        else{
            a[i] = 0;
        }
        return a;
    }
    return NULL;
}

// Set the bits of x within range of [start, end], in which both are inclusive
// Assume 0 <= start & end <= 31
void set_bits(unsigned * x,
             unsigned start,
             unsigned end,
             unsigned *v) {
    // YOUR CODE HERE
    // No return value
    // v points to an array of at least (end-start+1) unsigned integers.
    // if v[i] == 0, then set (i+start)-th bit of x zero, otherwise, set (i+start)-th bit of x one.
    for(int i = 0; i < end; i++){
        if(v[i] == 0){
            *x = *x ^ (0 << start);
        }
        if(v[i] == 1){
            *x = *x ^ (1 << start);
        }
    }
}

// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(unsigned * x,
              unsigned start,
              unsigned end) {
    
    *x = *x^(1<<start);
}


/*
 * YOU CAN IGNORE THE REST OF THIS FILE
 */

void test_get_bits(unsigned x,
                  unsigned n,
                  unsigned expected) {
    unsigned* a = get_bits(x, n, n);
    if(*a!=expected) {
        printf("get_bits(0x%08x,%u): 0x%08x, expected 0x%08x\n",x,n,*a,expected);
    } else {
        printf("get_bits(0x%08x,%u): 0x%08x, correct\n",x,n,*a);
    }
    free(a);
}

void test_set_bits(unsigned x,
                  unsigned n,
                  unsigned v,
                  unsigned expected) {
    unsigned o = x;
    set_bits(&x, n, n, &v);
    if(x!=expected) {
        printf("set_bits(0x%08x,%u,%u): 0x%08x, expected 0x%08x\n",o,n,v,x,expected);
    } else {
        printf("set_bits(0x%08x,%u,%u): 0x%08x, correct\n",o,n,v,x);
    }
}

void test_flip_bits(unsigned x,
                   unsigned n,
                   unsigned expected) {
    unsigned o = x;
    flip_bits(&x, n, n);
    if(x!=expected) {
        printf("flip_bits(0x%08x,%u): 0x%08x, expected 0x%08x\n",o,n,x,expected);
    } else {
        printf("flip_bits(0x%08x,%u): 0x%08x, correct\n",o,n,x);
    }
}

int main(int argc,
         const char * argv[]) {
    printf("\nTesting get_bits()\n\n");
    test_get_bits(0b1001110,0,0);
    test_get_bits(0b1001110,1,1);
    test_get_bits(0b1001110,5,0);
    test_get_bits(0b11011,3,1);
    test_get_bits(0b11011,2,0);
    test_get_bits(0b11011,9,0);
    printf("\nTesting set_bits()\n\n");
    test_set_bits(0b1001110,2,0,0b1001010);
    test_set_bits(0b1101101,0,0,0b1101100);
    test_set_bits(0b1001110,2,1,0b1001110);
    test_set_bits(0b1101101,0,1,0b1101101);
    test_set_bits(0b1001110,9,0,0b1001110);
    test_set_bits(0b1101101,4,0,0b1101101);
    test_set_bits(0b1001110,9,1,0b1001001110);
    test_set_bits(0b1101101,7,1,0b11101101);
    printf("\nTesting flip_bits()\n\n");
    test_flip_bits(0b1001110,0,0b1001111);
    test_flip_bits(0b1001110,1,0b1001100);
    test_flip_bits(0b1001110,2,0b1001010);
    test_flip_bits(0b1001110,5,0b1101110);
    test_flip_bits(0b1001110,9,0b1001001110);
    printf("\n");
    return 0;
}
