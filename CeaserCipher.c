/*lab 05
question 1:Caesar Cipher
06.04.2020*/

#include <stdio.h>
#define SIZE 500 //defining the array size
int rotateRight (int ch);//function prototype
int rotateLeft(int ch);//function prototype
int encode(int ch,int shift);//function prototype
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int main() {

    int shift;//defining a int varibale to get number of shifts
    scanf("%d",&shift);//gets the number of shifts as a input
    char text[SIZE];//defining an array for the text which is wanted to change
    char a1[SIZE];//defining another array to copy the changed array
    int j=0;//defining a variable for the loop
    scanf("%[^\r]s",text);//gets the multiline input using scanf
       
        while(text[j]!='\0'){//a loop to change the every character in text until its equal to null terminating character
        a1[j]=encode(text[j],shift);//using the predefined encode function changes the every character 
        j=j+1;//increment to run the loop
        }
        printf("Here is the encoded text:%s",a1);//prints the changed out put array
        return 0;
}
// a function which shifts the character to right
int rotateRight (int ch){
   if((ch>=97&& ch<122)||(ch>=65&& ch<90)){//used the ascii values of alpahbet to give the condition range('A'=65,'Z'=90,'a'=97,'z'=122)
         return ch=ch+1;
        
       }else if((ch==90)||(ch==122)){
         return ch=ch-25;
         
       }else
           return ch;
       }
//a function which shifts the chrachter to left 
int rotateLeft(int ch){
    if((ch>97&& ch<=122)||(ch>65&& ch<=90 )){//used the ascii values of alpahbet to give the condition range('A'=65,'Z'=90,'a'=97,'z'=122)
        return ch=ch-1;
    
}else if((ch==65)||(ch==97)){
       return ch=ch+25;
        
}else
    return ch;
}



//a function to do the shifts according to its value
int encode(int ch,int shift){
     if(shift==0){ //when shift equals 0 returns the same chrachter
         ch=ch;
    
     }else if(shift>0){ //when shift is positive shifts it to right
           for(int i=0;i<shift;i++){//loop to run the number of shifts
           ch=rotateRight(ch);//calls the rotateRight function
           }
           return ch;
        
     }else if(shift<0){//when shift is negative shifts it to left
        shift=(-shift);
        for(int i=0;i<shift;i++){//loop to run the number of shifts
        ch=rotateLeft(ch);//calls the rotateLeft function

        }
        return ch;
     }
return ch;
}