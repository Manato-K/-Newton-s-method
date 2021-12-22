#include <stdio.h>
#include <math.h>
double f(double x)
{   
    return(x*x*x*x-6.0);
}
double f1(double x)
{
    return(4.0*x*x*x);
}
int main(void)
{
    int n=0;
    double x,x1,er=1.0e-9;
    x1=1.50;
    do {
        x=x1;
        if(fabs(f1(x))<er) break;
        x1=x-f(x)/f1(x);
        n++;
        printf("%2d : %.10lf(%.10lf)\n",
        n,x1,f(x1));
    } while(fabs(x1-x)>er);
}