//Question 2
//27/04/2020
// Lab06_Pow.c
// Compute the nth power of x, where
// n is a non-negative integer.
#include <stdio.h>

double mypow(double, int);//function prototype

int main(void) {
    double x;//defining double and int variables
    int n;

    printf("Enter x and n:\n");
    scanf("%lf %d", &x, &n);//gets two variables as user inputs

    printf("mypow(%f, %d) = %f\n", x, n, mypow(x, n));//prints the nth power of value x
    return 0;
}

// Compute the nth power of x.
// Precond: n >= 0
double mypow(double x, int n) {
    if (n>0){//checks whether n is greater than 0
        return (x*mypow(x,n-1));//if so uses recursion algorithom

    }else {//else return 1(if n=0)
        return 1;
    }
    // to be completed

}