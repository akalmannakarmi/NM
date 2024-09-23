#include<stdio.h>
// #include<conio.h>
#include<math.h>
float f (float i)
{
	return i*sin(i)+cos(i);
}
float fd(float i)
{
	return(i*cos(i));
}
int main ()
{
	float i,x1,x0, xmin, xmax, error;
	printf("\n  Enter the values of xmin and xmax :\n");
	scanf("%f%f", &xmin,&xmax);
	printf("\n i \t f(i)");
	for (i = xmin; i<xmax; i++)
	{
		printf("\n %.1f \t%.1f",i,f(i));
	}
	printf("\n Enter the initial guess value(x1,x0):\n");
	scanf("%f%f",&x1,&x0);
	printf("\n i\t \t  x0\t\t  f(x0)\t\t  x1\t\t  fd(x0)\t  error");
	i=1.0;
		if(fd(x0)==0)
		{
			printf("\n Change the initial guess value (x0):\n");
		}
		else
		{
			do{
				x1 = x0-f(x0)/fd(x0);
				error = fabs(x1-x0);
				printf("\n %f \t%f \t%f \t%f \t%f \t%f ", i++,x0,f(x0),fd(x0),x1,error);
				x0=x1;
			}
				while (error>0.000002);
	            printf("\n The root of the given equation = %f",x1);

		}
		printf("\n The functional value of the given equation=%f\n",f(x1));
		//  getch();
	            return 0;
	}
