#include <stdio.h>

long addTwoNumbers(long *, long *);//function prototype

int main() {
    long firstNum,secondNum,sum;//defining two long type variables
    long *pfirstNum;//defining long type pointer variable
    long *psecondNum;//defining long type pointer variable
    printf("Pointers: Add two numbers\n");//prints system message
    printf("-------------------------\n");
    printf("Input first number: ");
    scanf("%ld",&firstNum);//gets input from the user 
    pfirstNum=&firstNum;//assign its address to a pointer variable
    printf("Input second number: \n");
    scanf("%ld",&secondNum);//gets input from the user 
    psecondNum=&secondNum;//assign its address to a pointer variable
    sum=addTwoNumbers(pfirstNum,psecondNum);//assigning the return value of addTwoNumbers function to sum variable 
printf("The sum of %ld and %ld is %ld.",*pfirstNum,*psecondNum,sum);//prints the statement
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// Sum two integers using pointers
// Pre-cond: both numbers are integers
long addTwoNumbers(long *num1, long *num2){
    return *num1+*num2;//returns the sum of pointer varables
    
//     Complete the function
}











#include <stdio.h>
#include <stdlib.h>
void stringReverse(char *);//function prototype
int stringLength(char *);//function prototype

int main() {
    
    char *inputStr;//defining a char type pointer variable
    inputStr=(char*)malloc(sizeof(char)*100);//dynamically allocating space from memory by using malloc function
    printf("Pointers: Print a string in reverse order\n");//prints system message
    printf("-----------------------------------------\n");
    printf("Enter a string:");
    scanf("%[^\t\n]",inputStr);//scanning input string with multiple words
    printf("\n");
    printf("Reverse of the string: ");
    stringReverse(inputStr);//calling string reverse function to reverse the string
    free(inputStr);//freeing up the memory used in above pointer variable 
    inputStr=NULL;//assign it to null value
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
}

// Function to reverse a string
void stringReverse(char *str){
    int length=stringLength(str);//calling stringLength function to find the length
    for(int i=length-1;i>=0;i--){
        printf("%c",*(str+i));//printing element by element
    }
    //Complete the function
}

// Function to find the length of a string
int stringLength(char *str){
    int count=0;
    while(*(str)!='\0'){//counts the number of characters in the pointer variable while it equals to null terminating character
        count=count+1;
        str++;

    }
    return count;
//     Complete the function
}












#include <stdio.h>
#include <stdlib.h>

void sortArray(int, int *);//function prototype

int main() {
   int NoElements;//defining int variable
   int i;
   scanf("%i",&NoElements);//gets the number of elements as the user input
   int *array;//defining int type pointer variable
   array=(int*)malloc(sizeof(int)*100);//dynamically allocates memory using malloc function
    printf("Pointers: Sort an array using pointers\n");//prints system message
    printf("--------------------------------------\n");
    printf("Enter number of elements: ");
    printf("Enter %i values:\n",NoElements);
    
     for ( i = 0; i < NoElements;i++){//scanning element by element
         printf("Element-%i: ",i+1);
            scanf("%i",array+i);
    
        } 
    printf("\n");
    printf("Sorted array elements:\n");
    sortArray(NoElements,array);//calling sortArray function to sort the array in ascending order 
    free(array);//freeing up the allocated space
    array=NULL;//assign it to null value
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// Function to sort an integer array
void sortArray(int size, int *array){ 
  int i=0,t;
    // Sort the numbers using pointers 
    while(i < size){ //loop to check element by element 
  
        for (int j = i + 1; j < size; j++) { //checks one element with all the other elemnts in the pointer
  
            if (*(array + j) < *(array + i)) { //checks whether the which element(jth) is less than choosed element by first loop(ith) element or not
                
                t = *(array + i); 
                *(array + i) = *(array + j); //if so assign the j th elemnt as the ith element
                *(array + j) = t; //then puts the ith element to the jth element
            } 
        } 
        i=i+1;
    } 
  
    // print the numbers 
    for (i = 0; i < size; i++) {
        printf("Element-%i: %d\n",i+1, *(array + i)); 
    }
} 