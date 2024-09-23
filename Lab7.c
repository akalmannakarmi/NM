#include<stdio.h>
// #include<conio.h>
#include<math.h>

int main()
{
    int i,n;
    float x[10],y[10],a0,a1,b0,b1,sx=0,sy=0,sx2=0,sy2=0,sxy=0,x1,y1;
    printf("Enter the number of data points:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values of x[%d] and y[%d]:\n",i,i);
        scanf("\n%f%f",&x[i],&y[i]);
    }
    printf(" x \t\t y \t\t\t xy \t\t\t x2 \t\t\t y2");
    for(i=0;i<n;i++)
    {
        printf("\n %f \t %f \t\t %f \t\t %f \t\t %f",x[i],y[i],x[i]*y[i],pow(x[i],2),pow(y[i],2));
    }
    for(i=0;i<n;i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sx2=sx2+pow(x[i],2);
        sy2=sy2+pow(y[i],2);
        sxy=sxy+x[i]*y[i];
    }
     printf("\n sx=%f \t sy=%f \t\t sxy=%f \t sx2=%f \t sy2=%f",sx,sy,sxy,sx2,sy2);
     a1=(n*sxy-sx*sy)/(n*sx2-pow(sx,2));
     a0=(sx2*sy-sxy*sx)/(n*sx2-pow(sx,2));
     b1=(n*sxy-sx*sy)/(n*sy2-pow(sy,2));
     b0=(sx*sy2-sxy*sy)/(n*sy2-pow(sy,2));
     printf("\n The regression line of Y on X is y=%fx+%f",a1,a0);
     printf("\n The regression line of X on Y is x=%fy+%f",b1,b0);
     printf("\n Enter the value of x to find y:");
     scanf("%f",&x1);
     y1=a1*x1+a0;
     printf("\n The value of y when x is %f is=%f\n",x1,y1);
    //  getch();
    return 0;
}
