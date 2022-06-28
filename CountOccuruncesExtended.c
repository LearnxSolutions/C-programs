/*Lab 05
question 02:count occurrences extended
06/04/2020*/

#include<stdio.h>
void lower_string(char str[]);//function prototype
char* copyAr (char *s1, const char *s2);//function prototype
int strCmp (char *str1,char *str2);//function prototype
int isPunct(char ch);//function prototype
int occur(char word[],char text[]);//function prototype

int main(){
int count;
char word[256], text[256]; //initializing two arrays to get two inputs and to copy one array to another one
count=occur(word,text);//calls the occur function and assigns its return value to a variable 
if(count==0){ //checks whether the occurences are equal to 0
    printf("Wrong Input");

}else if(count!=0){//checks whether the occurences are not equal to zero
printf("The occurrences of \"%s\" in the text are %i.",word,count);//prints the number of occurences in the given text
}
return 0;
}



// a function to count the occurences of a word in a text
int occur(char word[],char text[]){
int j=0;
int i=0;
char array1[256];//defining an array to copy word array
scanf("%s",word); //get input word from the user which is need to search
copyAr(array1,word);//copy word array to array1 array by calling copyAr function
lower_string(array1);//change the first characterof word into a lowercase letter by calling lower_string function

for (i=0;i<256;i++){ //a loop to check all the words in the text
    scanf("%s",text);//get a text input from a user
    lower_string(text);// change the first character of every word into lowercase
    if(isPunct(text[3])){//checks the punctuation character
        j=5;
        break;
    }
if(strCmp(array1,text)==0){//compares the characters of word and text are equal or not by calling strCmp function
j++; //counts the occurrences
}
}
return j;//returns the number of occurrences
}



 //a function to change the first charachter of the a word with return type of void
void lower_string(char str[]) {
     if (str[0] >= 'A' && str[0] <= 'Z') {//checks whether the first character  of word is in the range of 'A' and 'Z'
         str[0] = str[0] + 32;//makes the character into lowercase by changing the ascii value
      }
    }




// a function to copy one array(s2)into another array(s1) using character pointers
char* copyAr (char *s1, const char *s2){
    char*s3=s1;//points the starting of s1 string
    while(*s2){// aloop to copy s2 charcter by charcter
        *s1=*s2;//copies the s2 charcter to s1 (here * points first charcter of array)
        s1=s1+1;//increments the character by one
        s2=s2+1;//increments the character by one
    }
    *s1='\0';//s1 string is null terminated 
    return s3;//returns the copied string
}
  
  
 
//a function to check whether a charchter is a punctuation or not with return type of int
int isPunct(char ch){
        int l; 
        if(ch=='!'||ch==','||ch==';'||ch=='.'||ch=='?'||ch=='-'||ch==':'||ch=='/'){//checks the charchter with punctuations
         l=1; //if it is a punctuation assign its value to 1
        }else{
        l=0;//if not value is 0
    }
    return l;//returns the value l
    }
 



// a function to compare two strings with return type of int using charcter pointers
   int strCmp (char *str1,char *str2){
       int l;
       while((*str1 !='\0') && (*str2!='\0')&&(*str1==*str2)){//a loop which runs while the characters of stings are not equal to null terminating charachter and while strings are equal
         str1=str1+1;//increments the character by one
         str2=str2+1;//increments the character by one
        
       }if(*str1==*str2){//checks whether the characters are equal or not
           l=0;//if so value is 0 
       }else{
          l=*str1-*str2;//else value is str1-str2
       }
       return l;//returns the value l
   }

                                   