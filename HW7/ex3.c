/*  Example: C program to find area and circumference of a circle  */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r = 0.0, a, c;
  printf("Enter radius (in mm),  enter -1 to exit \n");
  scanf("%f", &r);
while(r!=-1){

  r = r * (1 / 25.4);
  a = PI * r * r;
  c = PI * (2 * r);
  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Circle's circumference is %3.2f (in).\n", c);
  printf("\n");
  printf("Enter radius (in mm),  enter -1 to exit \n");
  scanf("%f", &r);
}
return 0;
}
