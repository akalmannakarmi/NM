#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float i)
{
    return (i*i-4*i-10);
}
int main()
{
    float i,xmin,xmax,x0,x1,x2,error;
    printf("\n Enter the values of xmin and xmax :\n");
	scanf("\n %f%f", &xmin,&xmax);
	printf("\n i \t f(i)");
	for(i=xmin;i<=xmax;i++)
	{
	    printf("\n %.1f \t %.1f",i,f(i));
	}
    printf("\n Enter the initial guess value(x0,x1):\n");
    scanf("%f%f",&x0,&x1);
    printf("\n i\t\t x0\t\t x1\t\t f(x0)\t\t f(x1)\t\t x2\t\t  error");
    i=1.0;
    do
    {
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        error=fabs(x2-x1);
        printf("\n %f\t %f\t %f\t %f\t %f\t %f\t %f\t",i++,x0,x1,f(0),f(1),x2,error);
        x0=x1;
        x1=x2;

    }
    while(error>0.000002);
    printf("\n The root of the given equation = %f",x2);
    printf("\n The functional value of the given equation=%f",f(x2));
	getch();
	return 0;

}
