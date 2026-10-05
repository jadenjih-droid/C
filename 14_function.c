#include <stdio.h>

int add(int a, int b){
    return a+b;
}
double average(double a, double b){
    return (a+b)/2;
}

int get_lucky_number(void){
    return 7;
}






int main(void)
{
    int x=3, y=4;
    
    
    printf("add(3, 4)             = %d\n", add(x, y));
    //printf("average(3, 4)         = %.1f\n", average(x, y));
    //printf("get_lucky_number()    = %d\n", get_lucky_number());

    //printf("add(add(1, 2), 3)     = %d\n", add(add(3, 3), 3));

    return 0;
}