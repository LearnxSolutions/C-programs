/*lab 05
Question 03:Maximum difference in an array
06.04.2020*/


#include<stdio.h>//calling standard input output library
void read_array( int my_array1[],int n);//function prototype 
int max_difference(int arr[], int arr_size);//function prototype 

int main() {
 int size;//defining an int variable to get the number of elements
 int output;//defining an int variable to take the return value of max_difference function
   scanf( "%d",&size);//takes the number of elements as input
   int my_array[size];//defining an array to call within in the functions
   read_array(my_array,size);// calling the read_array function
   output=max_difference(my_array,size);//// calling the max_difference function and assigning its return value to a variable
   printf("%d",output);//prints the max difference of the array as a output
   return 0; 
} 

// a function to take list of elments and put them into array
void read_array( int my_array1[],int n){
     for(int i=0;i<=n;i++){//a loop for take all elements
      scanf("%d",&my_array1[i]);// scans elements one by one and puts into an array
      }
}
// a function to calculate the maximum difference of an array
int max_difference(int my_array2[], int n){

int  maxDif = my_array2[1] - my_array2[0];//substracts the second element from the first elemnt of the array and assigns its value to a variable
int min_element = my_array2[0];//defining first element of the array as min_element
int i;
for(i = 1; i <n; i++){//a loop to check all the elments in the array 
    
if (my_array2[i] - min_element >  maxDif)//checks whether the difference of i th element of the array is greater than the maxDif                            
 maxDif = my_array2[i] - min_element;//if so then the new maxDif is the difference of i th element of the array
if (my_array2[i] < min_element)//checks whether the i th elemnt of array is less than the first elemnt of array
min_element = my_array2[i];//if so then then new min_element  is the i th element                  
}
return maxDif;//finally function returns the max dif of array
}                                                                                                                