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

    printf("%.1lf", t/2);








    return 0;
}











