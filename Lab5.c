#include<stdio.h>
// #include<conio.h>
#include<math.h>

int main()
{
    int i,n;
    float x[10],y[10],a,z,f1,f2,x1,x2;
    printf("Enter the number of data points:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values of x[%d] and y[%d]:\n",i,i);
        scanf("\n%f%f",&x[i],&y[i]);
    }
    printf(" x \t\t y");
    for(i=0;i<n;i++)
    {
        printf("\n %f\t %f",x[i],y[i]);
    }
    printf("\n Enter the value of x at which f(x) is required:");
    scanf("%f",&a);
    printf("\n Enter 1st pivotal point(x1):\n");
    scanf("%f",&x1);
    printf("\n Enter the functional value at 1st pivotal point:\n");
    scanf("%f",&f1);
    printf("\n Enter 2nd pivotal point(x2):\n");
    scanf("%f",&x2);
    printf("\n Enter the functional value at 2nd pivotal point:\n");
    scanf("%f",&f2);
    z=f1+(a-x1)*((f2-f1)/(x2-x1));
    printf("\n The required functional value is = %f\n",z);
    // getch();
    return 0;
}
