#include<stdio.h>
int main()
{
  float a,b,c;
  printf("Enter the value of a");
  scanf("%f", &a);
  printf("Enter the value of b");
  scanf("%f", &b);
  printf("Enter the value of c");
  scanf("%f", &c);

  if(a>b & a>c)
    printf("%.2f is greater", a);
else if(b>a & b>c)
  printf("%.2f is greatest",b);
else
  printf("%.2f is greatest",c);
  return 0;
}

