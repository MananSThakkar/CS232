//
//  ex2.c
//  
//
//  Created by Manan Thakkar on 4/22/19.
//
//

/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
    char text[MAX], c, reverse[MAX], text2[MAX];
    int i = 0, j = 0;
    int lowercase, uppercase, digits, other;
    int length;
    
    puts("Type some text (then ENTER):");
    
    /* Save typed characters in text[]: */
    
    /* for (i = 0; i < MAX; i++)
     {
     text[i] = getchar();
     if (text[i] == '\n')
     break;
     }
     length = i;  */
    
    fgets(text, MAX, stdin);
    length = strlen(text) - 1;

    
    /* Analyse contents of text[]: */
    
    for (i = lowercase = uppercase = digits = other = 0; i < MAX; i++)
    {
        c = text[i];
        if (c >= 'a' && c <= 'z')
            lowercase++;
        else if (c >= 'A' && c <= 'Z')
            uppercase++;
        else if (c >= '0' && c <= '9')
            digits++;
        else
        {
            if (c == '\n')
                break;
            other++;
        }
    }
  

    for (i = length; i >= 0; i--) {
        if(text[i] != '\n'){
           reverse[j] = text[i];
           j++;
           }
    }
    
    int palindrome = 0;
    for(i = 0;i < length ;i++){
        if(text[i] != text[length-i-1]){
            palindrome = 1;
            break;
        }
    }
    
   
    
    puts("You typed:");
    printf("Reverse letters: %s\n", text);
        if (palindrome) {
            printf("%s is not a palindrome\n", reverse);
        }
        else {
            printf("%s is a palindrome\n", reverse);
        }
    printf("A string with %d characters\n", length);
    printf("\t%d lower case letters\n", lowercase);
    printf("\t%d upper case letters\n", uppercase);
    printf("\t%d digits\n", digits);
    printf("\t%d others\n", other);
    
}


