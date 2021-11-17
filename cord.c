#include <stdio.h>
#include <math.h>

double f(double x)
{
    return(x*x-2.0);
}

double f1(double x)
{
    return(2.0*x);
}
int main(void)
{
    int n=0;
    double x,x1,er=1.0e-9;
    
    x1=2.0;
    do{
        x=x1;
        if(fabs(f1(x))<er) break;
        n++;
        printf("%2d : %.10lf(%.10lf)\n", n,x1,f(x1));
    } while(fabs(x1-x)>er);
}