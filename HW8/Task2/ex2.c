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
    char text[MAX], c, reverse[MAX];
    int i;
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
  

    for (i = 0; i <= length; i++) {
        reverse[length-i-1]=text[i];
    }
    
    if (strcmp(reverse, text)==0) {
        printf("\%sFound Palindrome", text);
    }else{
        printf("\%sNot a Palindrome", text);
    }

    
   
    
    puts("\nYou typed:");
    printf("\t%s reverse letters\n", reverse);
    printf("A string with %d characters\n", length);
    printf("\t%d lower case letters\n", lowercase);
    printf("\t%d upper case letters\n", uppercase);
    printf("\t%d digits\n", digits);
    printf("\t%d others\n", other);
    
}


