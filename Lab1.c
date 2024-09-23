#include<stdio.h>
#include<math.h>
// #include<conio.h>
int main()
{
    float a,b,c,r1,r2,dis,rp,ip;
    printf("\n Enter the values of a, b and c: \n");
    scanf("%f %f %f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis==0)
    {
        printf("\n the roots are real and equal : \n");
        r1=(-b)/(2*a);
        r2=r1;
        printf("r1=%f \n",r1);
        printf("r2=%f \n",r2);
    }
    else if(dis>0)
    {
        printf("\n the roots are real and unequal : \n");
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("r1=%f \n",r1);
        printf("r2=%f \n",r2);
    }
    else
    {
        printf("\n the roots are imaginary : \n");
        rp=(-b)/(2*a);
        ip=sqrt(-dis)/(2*a);
        printf("r1=%f +i %f \n",rp,ip);
        printf("r2=%f -i %f \n",rp,ip);

    }
    // getch();
    return 0;
}
