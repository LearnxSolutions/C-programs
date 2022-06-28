//Question 4
//27/04/2020
// Lab06_SumArray.c
// Sum up all values in an integer array.
// appear in an array.
#include <stdio.h>
#define MAX_SIZE 10//defining size of array
//function prototypes
int readArray(int []);
void printArray(int [], int);
int sumArray(int [], int);

int main(void) {
    int list[MAX_SIZE], size;

    size = readArray(list);//by calling function read the array and gets the size of array
    printArray(list, size);//prints the values in array

    printf("Sum = %d\n", sumArray(list, size));//prints the sum of the array elements

    return 0;
}

// Read values into array.
// Return number of elements read.
int readArray(int arr[]) {
    int size, i;

    printf("Enter number of elements:\n");
    scanf("%d", &size);
    printf("Enter %d values:\n", size);
    for (i=0; i<size; i++)//loop for read array element by element
        scanf("%d", &arr[i]);

    return size;
}

// Print values in array
void printArray(int arr[], int size) {
    int i;

    printf("Array read: ");
    for (i=0; i<size; i++)//loop to print the array elemnt by element
        printf("%d ", arr[i]);
    printf("\n");
}

// Sum all the values in the array arr
// Pre-cond: size >= 0
int sumArray(int arr[], int size) {
    
    if(size==0){//checks the size of the array is 0
        return 0;//if so returns 0
        }else{//if size of the array is not equal to 0
            return(arr[size-1]+sumArray(arr,size-1));//then returns the value by adding element by element using recursive function
        }
    }

    