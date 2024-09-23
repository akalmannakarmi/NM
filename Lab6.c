#include<stdio.h>
// #include<conio.h>
#include<math.h>

int main()
{
    int i,n,j;
    float x[10],f[10],a,product,sum;
    printf("Enter the number of data points:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values of x[%d] and f[%d]:\n",i,i);
        scanf("\n%f%f",&x[i],&f[i]);
    }
    printf(" x \t\t f(x)");
    for(i=0;i<n;i++)
    {
        printf("\n %f \t %f",x[i],f[i]);
    }
    printf("\n Enter the value of x at which f(x) is required:");
    scanf("%f",&a);
    for(i=0;i<n;i++)
    {
        product=1.0;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                product=product*((a-x[j])/(x[i]-x[j]));
            }
        }
        sum=sum+f[i]*product;
    }
    printf("sum=%f\n",sum);
    // getch();
    return 0;
}

