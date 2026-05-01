#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the value of a,b,c");
  scanf("%d,%d,%d", &a,&b,&c);
  printf("The equation is %d", (a+b+(2*c/(3*a)+2*a+2*b)));
return 0;
}
