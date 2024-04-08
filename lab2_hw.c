#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // n is the no of terms for taylor series
    float exp;
    float exp_sum = 1; // initial term in taylor series is 1
    printf("Enter no. of terms for taylor series:\n");
    scanf("%d", &n);

    printf("Enter the value of X in the taylor series:\n");
    scanf("%f", &exp);

    // loop forcalculating each term of taylor series
    for (int i = n - 1; i > 0; --i)
    {
        exp_sum = 1 + exp * exp_sum / i;
    }

    printf("The sum of taylor series expansion is = %f\n", exp_sum);
}