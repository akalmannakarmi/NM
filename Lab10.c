#include<stdio.h>
#include<math.h>
float f(float x)
{
float z;
z=1/(1+x*x);
return z;
}
int main()
{
    int n,i;
    float a,b,h,integral,sum;
    float f(float x);
  printf("\nEnter the lower limit (x0=a): ");
  scanf("%f",&a);
  printf("\nEnter the upper limit (xn=b): ");
  scanf("%f",&b);
  printf("\nEnter the value of slip size(h):");
  scanf("%f",&h);
  n=(int)(b-a)/h;
  sum=(f(a)+f(b))/2;
  for(i=1;i<n;i++)
  {
      sum=sum+f(a+i*h);
  }
  integral=sum*h;
  printf("The integral value is=%f",integral);
  getch();
}
