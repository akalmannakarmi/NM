#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float i){
    return (i*i-4*i-10);

}

int main(){
    float i, x1, x2, xm , xmin , xmax, error;
    printf("\n Enter the values of xmin and xmax :\n");
    scanf("\n %f %f", &xmin, &xmax);
    printf("\n i \t f(i)");
    for(i=xmin;i<=xmax;i++){
        printf("\n %.1f \t %.1f",i,f(i));

    }
    printf("\n Enter the two initial guess values (x1,x2) : \n");
    scanf("%f %f", &x1, &x2);
    printf("\n i\t\t x1\t\t  x2\t\t  xm\t\t  f(x1)\t\t  f(xm)\t\t  error");
    i=1.0;
        do
	{
		xm = (x1+x2)/2;
		error = fabs(x2-x1);
		printf("\n %f\t %f\t %f\t %f\t %f\t %f\t %f\t", i++,x1,x2,xm,f(x1),f(xm),error);
		if(f(xm)*f(x1)<0)
		x2=xm;
		else
		x1=xm;
	}
	while (error>0.00002);
	printf("\n The root of the given equation = %f",xm);
	printf("\n The functional value of the given equation= %f",f(xm));
	  getch();
        return 0;
    }
