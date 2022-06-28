//Question 1
//27/04/2020
// Lab06_GCD.c
// Compute the greatest common divisor (GCD) of two
// non-negative integers, not both zero.
#include <stdio.h>

int gcd(int, int);//function prototype

int main(void) {
    int num1, num2;//defining two integers

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);//gets two integers as user inputs

    printf("gcd(%d, %d) = %d\n", num1, num2, gcd(num1, num2));//outputs the gcd of two integers
    return 0;
}

// Compute the greatest common divisor of a and b
// Precond: a and b non-negative, not both zero
int gcd(int a, int b) {
    if(b == 0) {//checks whether b is equal to 0
        return a;//if so returns a as it must be the gcd of a and b
    }else{
        return gcd(b,a%b);//if b is not 0 return gcd(b,a%b) using recursion algorithom
    }
}    // to be completed