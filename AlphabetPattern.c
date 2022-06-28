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