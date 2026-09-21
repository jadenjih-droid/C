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
    printf("=f\n\n");

    double c2=-20;
    int f1=c2*1.8+32;
    printf("%d\n", f1);

    //int age;
    //printf("type your age");
    //scanf("%d", &age);
    //printf("your age:%d\n", age);
    //printf("your age in ten years:%d\n", age+10 );

    //int a;
    //int b;
    //double d1;
   // printf("Enter a number with two decimal points");
    //scanf("%lf", &d1);
    //printf("%.2f", d1);
    
     
    int score;
    printf("Type a score (1-100)");
    scanf("%d", &score);
    if(score>=90){
        printf("A+");
    }else if(score>=85){
        printf("A");
    }else if(score>=80){
        printf("A-");
    }else if(score>=77){
        printf("B+");
    }else if(score>=73){
        printf("B");
    }else if(score>=67){
        printf("C+");
    }else if(score>=63){
        printf("C");
    }else if(score>=60){
        printf("C-");
    }else if(score>=57){
        printf("D+");
    }else if(score>=50){
        printf("D");
    }else if(score<=49){
        printf("F");
    }   
    
    
    printf("for loop\n");
    for(int i=1; i<=5;i+=2){
        printf("%d\n", i);
    }

    printf("while loop\n");
    int j=1; 
    while(j<=5){
        printf("%d\n", j);
        ++j;
    
    }

    printf("do while loop\n");
    int k=6;
    do{
        printf("%d", k);
        k++;
    }while(k<=5);

    printf("[break] 1-10 stop at six:\n");
    for(int i=1; i<=10;i++){
        printf("%d\n", i);
        if(i==6){
            break;
        }
    }

    printf("[continue] 1-10 only odd numbers:\n");
    for(int i=1; i<=10;i++){
        if(i%2==1){
            continue;
        }
        printf("%d\n", i);
    }

    
    printf("Double for loop triangle:\n");
    for(int i=1; i<=5;i++){
        for(int j=1; j<=i;j++){
            printf("0");
        }
     printf("\n");
     
    
        
    }
    
    printf("double for loop opposite triangle:\n");
    for(int i=5; i>=1;i--){
        for(int j=1; j<=i;j++){
            printf("0");
        }
    printf("\n");
    }

    


    






       return 0;
}











