#include <stdio.h>
#include <limits.h>

int main(void){ 
    int ANSWER=5;
    int guess;
    int count=0;
    printf("Guess the number between 1-100\n");
    scanf("%d", &guess);

    
    if(guess==ANSWER){
        printf("CORRECTTT!\n");
    }
    if(guess>ANSWER){
        printf("lower\n");
    }
    if(guess<ANSWER){
        printf("higher\n");
    }
    while(guess>ANSWER || guess<ANSWER){
        int guess=0;
            if (guess=ANSWER){
                break;
            }

                
            
            
        
    }
    


    

    

















        return 0;
}