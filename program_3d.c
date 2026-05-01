#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,z;
  printf("Enter the value of x,y,z");
  scanf("%f,%f,%f", &x,&y,&z);
  printf("the log equation is %.2f", log(pow(x,3) + pow(y,3) + pow(z,3)));
return 0;
}
