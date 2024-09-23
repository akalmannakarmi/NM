
#include<stdio.h>
#include<math.h>
float fun(float x, float y)
{
float z;
z=y+sin(x);
return z;
}
int main()
{
int i,n;
float x,y,xp,h,d,m1,m2,m3,m4;
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
    m1=fun(x,y);
    m2=fun(x+(h/2),y+m1*(h/2));
    m3=fun(x+(h/2),y+m2*(h/2));
    m4=fun(x+h,y+m3*h);
     x=x+h;
    y=y+(m1+2*m2+2*m3+m4)*(h/6);
printf("\n %d \t %f \t %f \t",i,x,y);
}
printf("\n The value of y at x =%f is %f\n",x,y);
// getch();
return 0;
}
