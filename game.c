// To create a game which in which u have to guess a number .
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    int num,guess,nguess=1;
    srand(time(0));
    num=rand()%100+1;
    // printf("the no is %d\n",num);
    do
    {
        printf("guess the number between 1 and 100:\n");
        scanf("%d",&guess);
        if (guess<num)
        {
            printf("enter a higher no please:\n");
     }
     
     else if(guess>num){
        printf("enter a smaller no:\n");
     }
     else{
        printf("%d is right no u guessed dude in %d guess. congo\n ",guess,nguess);
        
     }
        nguess++;
    } while (guess!=num);
    
return 0;
}