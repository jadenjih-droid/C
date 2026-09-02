#include <stdio.h>
#include <limits.h>

int main(void){
    printf("hello\n\n\n\n");
 
    printf("bye\n");

    int a=7;
    double t=7;
    double b=3.5;
    char c='A';
    printf("%d %zu\n", a, sizeof(a));
    printf("%.1lf %zu\n", b, sizeof(b));
    printf("%c %zu\n\n\n", c, sizeof(c));

    printf("max value of int=%d\n", INT_MAX);
    printf("min value of ints=%d\n", INT_MIN);
    printf("size of variable=%zu\n", sizeof(int));

    long long n=INT_MAX;

    printf("n = %lld\n", n );
    
    n=n+1;
    printf("n+1= %lld\n", n);

    printf("%.1lf\n", t/2);

    int x=7;
    int y=2;
    printf("int     7/2=%d\n",x/y);

    double p=7;
    double q=2;
    printf("double 7/2=%lf\n", p/q);
    printf("7.0/2=%f\n\n", 7.0/2);
    printf("(double)x/y=%f\n", (double)x/y);
    printf("(double)(x/y)=%f\n", (double)(x/y));
    printf("7%%2=%d\n", x/y);

    int m=65;
    double d=3.14159;
    printf("%d\n", m);
    printf("%c\n", m);
    printf("%lf\n", d);
    printf("%.2lf\n", d);
    printf("     %.2lf\n", d);
    printf("%50.2lf\n", d);
    printf("%d\n", (int)d);


    double c1=40; 
    //uble f;
    double g=1.8;
    double h=32;
    //printf("fanrenheit=%d\n",c1);
    printf("%lf", c1*g+h);
    printf("=f");












    return 0;
}











