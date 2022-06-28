//Question 3
//27/04/2020
// Lab06_SumDigits.c
// Sum up all digits in an integer.

#include <stdio.h>

int sum_digits(int);//function prototype

int main(void) {
    int num;//defining a variable

    printf("Enter a non-negative integer:\n");
    scanf("%d", &num);//gets the number as user input

    printf("Sum of its digits = %d\n", sum_digits(num));//prints the sum of the digits

    return 0;
}

// Return sum of digits in integer n
// Pre-cond: n >= 0
int sum_digits(int n) {

    if(n==0){//checks whether the number is equal to 0
        return 0;//then returns value 0
    }else{//if f is not equal to 0(n>0)
        return ((n%10)+sum_digits(n/10));//returns the value by adding the mod when number is divide by 10 and the recursive function
    }

}