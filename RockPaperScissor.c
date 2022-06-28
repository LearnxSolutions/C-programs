
/* A program to find the winner of rock paper scissor spock lizard  game
24/02/2020*/

#include <stdio.h> //preprocessor derective
/* Enter your code here. Read input from STDIN. Print output to STDOUT */

int main() {
    char input1,input2; //define two inputs as characters
    scanf("%c %c ",&input1,&input2);// get two inputs to the program seperated by a single space

    if((input1=='R'||input1=='C'||input1=='L'||input1=='P'||input1=='S')&&(input2=='R'||input2=='C'||input2=='L'||input2=='P'||input2=='S')){ // first checks whether the inputs(characters) are correct.
        if(input1==input2){ // checks whether the two inputs are equal to decide a Tie on game
        printf("Tie");

        }else{
            if(input1=='R'){// checks whether the palyer 1 inputs rock and decides the winner according to the input of the player 2
                if(input2=='P'||input2=='S'){
                printf("Player 2 wins");
                }else{
                printf("Player 1 wins");
                }
            }
            
            
            if(input1=='P'){//checks whether the palyer 1 inputs paper and decides the winner according to the input of the player 2
                if(input2=='C'||input2=='L'){
                printf("Player 2 wins");
                }else{
                printf("Player 1 wins");
                }
            }else{
                if(input1=='C'){ //checks whether the palyer 1 inputs scissor and decides the winner according to the input of the player 2
                   if(input2=='S'||input2=='R'){
                   printf("Player 2 wins");
                   }else{
                   printf("Player 1 wins");
                   }
               }else{
                  if(input1=='S'){
                      if(input2=='P'||input2=='L'){ //checks whether the palyer 1 inputs spock and decides the winner according to the input of the player 2
                      printf("Player 2 wins");
                      }else{
                      printf("Player 1 wins");
                      }
                  }else{
                     if(input1=='L'){
                         if(input2=='R'||input2=='C'){ //checks whether the palyer 1 inputs Lizard and decide the winner according to the input of the player 2
                         printf("Player 2 wins");
                         }else{
                         printf("Player 1 wins");
                         }
                  }
               }
            }
        }
        
    }
        }else{//print as wrong input when first if condition of this program doesn't satisfy
            printf("Wrong input");
        }
    

    
    
    return 0;
}

