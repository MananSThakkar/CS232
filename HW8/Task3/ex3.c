#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i;
  char buf[MAX_BUF];

  puts("Type some text (then ENTER):");
  fgets(buf, MAX_BUF, stdin);
    
  do {
      if(buf[i] >= 'a' && buf[i] <='z'){
          len = buf[i] - 'a';
          letter_frequency[len]++;
      }else if(buf[i] >= 'A' && buf[i] <= 'Z'){
          len = buf[i] - 'A';
          letter_frequency[len]++;
      }
      i++;
          
  } while (buf[i] > 0);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
}
