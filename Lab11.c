
#include<stdio.h>
#include<math.h>
float fun(float x, float y)
{
float z;
z=2.0*(y/x);
return z;
}
int main()
{
int i,n;
float x,y,xp,h,dy;
float fun(float,float);
printf("\n Enter the initial values of x and y:\n");
scanf("%f%f",&x,&y);
printf("\n Enter the value of x at which y is required:\n");
scanf("%f",&xp);
printf("\n Enter the step size:\n");
scanf("%f",&h);
n=(int)((xp-x)/h);
printf("\n i \t\t x \t\t y \t",i,x,y);
for(i=1;i<=n;i++)
{
    dy=h*fun(x,y);
    x=x+h;
    y=y+dy;
printf("\n %d \t %f \t %f \t",i,x,y);
}
printf("\n The value of y at x =%f is %f\n",x,y);
// getch();
return 0;
}
