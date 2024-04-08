#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci series up to %d terms:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\n");
}

int main() {
    int numTerms;
    
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &numTerms);
    
    if (numTerms <= 0) {
        printf("Number of terms must be greater than zero.\n");
        return 1;
    }
    
    printFibonacci(numTerms);
    
    return 0;
}
