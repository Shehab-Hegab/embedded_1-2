#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;
    float average = (float)sum / 3;
    int product = num1 * num2 * num3;
    int smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Product: %d\n", product);
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
    return 0;
}
// other way is using this method 
// we have x,y,z and we find the largest number 
// result = (x + y + abs(x - y)) / 2;
// // Calculate the maximum value
// max = (result + z + abs(result - z)) / 2;