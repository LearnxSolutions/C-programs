
/*Lab 04
question 02:count occurrences
02/04/2020*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char word[256],a1[256],text[256];//initializing three arrays to get two inputs and to copy                                   one array to another one
int c=0;
int i=0;
scanf("%s",word);  //get input word from the user which is need to search
strncpy(a1,word,100);  //using strncpy function in c library copies the first 100                                   charcters of word into a1
word[0]=tolower(word[0]);//change the first characterof word into a lowercase letter


for (i=0;i<256;i++){ //a loop to check all the words in the text
    scanf("%s",text);//get a text input from a user
    text[0]=tolower(text[0]);// change the first character of every word into lowercase
    if(ispunct(text[3])){
        c=5;
        break;
    }

if(strcmp(word,text)==0){// here using srtcmp function  compares the characters of word                                and text are equal or not using return value 0
c++; //counts the occurrences
}
}
if(c==0){ 
    printf("Wrong Input");
}else if(c!=0){//checks whether the occurences are not equal to zero
     printf("The occurrences of \"%s\" in the text are %i.",a1,c);
}
return 0;
}



























/*Lab 04
Question 1:Alphabet pattern printing
02/04/2020*/

#include <stdio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char alphabet='A';//defining a character to stand as alphabet 
  int n,i,j,k,l;//defining 5 variables to construct loops and the for the input from the user
  scanf("%i",&n);//getting input number from the user
    
    
//loops for print the first half of the pattern
  
    for(i=0;i<n;i++){//loop for the rows
       for(j=0;j<=i;j++){//loop for the columns
           printf("%c",alphabet);//prints the pattern
           alphabet++;
           if (alphabet>'Z') {//if condition to if the input number is greater than 26
        alphabet='A';
    }
       }
        printf("\n");//prints line by line
        alphabet='A';


        
//loops for print the second half of the pattern
   }for(k=n;k>1;k--){//loop for the rows
       for(l=k;l>=2;l--){//loop for the columns
           printf("%c",alphabet);
           alphabet++;
           if (alphabet>'Z') {//if condition to if the input number is greater than 26
        alphabet='A';
    }

       }
       printf("\n");
       alphabet='A';
   
   }
   return 0;
}







 }else if(ch>'Z'||ch<'z'){
        return ch=ch-26;
       }else if(ch<'A'||ch<'a'){
        return ch=ch+26;
}