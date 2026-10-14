#include <stdio.h>

void greet(void){
    printf("hello\n");
}
   
void print_grade(int score){
    if(score>100 || score<0){
        printf("Not a grade.\n");
        return;
    }
    
    if(score>86){
        printf("A\n");
    
    }
    else if(score>=73){
        printf("B\n");
    }
    else if(score>50){
        printf("C\n");
    }
    else if(score>0){
        printf("F\n");
    }


}

int absolute(int x){
    if (x>0){
        return x;
    }
    (x*-1);
        
}

int absolute(int n)
{
    if (n < 0) {
        return -n;
    }
    return n;
}
    


int main (void)
{
    greet();

    print_grade(95);
    print_grade(72);
    print_grade(150);
    printf("\n");
    

    printf("absolute(-7) = %d\n", absolute(-7));
    printf("absolute(7)  = %d\n", absolute(7));
    
    
    
    
    
    
    
    
    
    
    return 0;
}