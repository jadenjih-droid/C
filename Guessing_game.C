#include <stdio.h>
#include <limits.h>

int main(void){ 
    int ANSWER=5;
    int guess;
    int count=0;
    printf("Guess the number between 1-100\n");
    scanf("%d", &guess);
    count++;

    while(guess>ANSWER || guess<ANSWER){
        
        if(guess>ANSWER){
            printf("lower\n");
        }
        if(guess<ANSWER){
            printf("higher\n");
        }
        
        scanf("%d", &guess);
        count++;
    }
    if (guess==ANSWER){
        printf("CORREECTT!!!!\n");
        printf("It took you %d trys", count );
        
        
    }
    
    


    

    

















        return 0;
}