
#include<stdio.h>
#include<math.h>

/* Define the function to be integrated here: */
double f(double x){
  return 1/(1+x*x);
}

/*Program begins*/
main(){
  int n,i;
  double a,b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
  printf("\nEnter the no. of sub-intervals: ");
  scanf("%d",&n);
  printf("\nEnter the lower limit: ");
  scanf("%lf",&a);
  printf("\nEnter the upper limit: ");
  scanf("%lf",&b);
  /*Begin Trapezoidal Procedure: */
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
      sum=sum+2*f(x);
  }
  integral=(h/2)*(f(a)+f(b)+sum);
   /*Print the answer */
  printf("\nThe integral is: %lf\n",integral);
}
