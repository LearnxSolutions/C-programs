#include <stdio.h>
/*lab 04
question 3:Equal or Not
03/02/2020*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char str1[100], str2[100];//defining two arrays to get two strings
    scanf("%s %s",str1,str2);//gets two strings as inputs seperated by a space
    
     int k=0;
     for(int i=0;str1[i]!='\0';i++){//loop for check the first string until character is      not equal to null terminating character
         for(int j=0;j<=i;j++){// loop for the second string
            if(str1[i]==str2[j]){// checks whether the characters can be made equal or not
               k=1;//assigns a value

            }
        }
     }
         if(k==1){//checks the value
            printf("Yes");
         }else if(k!=1) {
            printf("No");
            
}
         
     

    return 0;
}