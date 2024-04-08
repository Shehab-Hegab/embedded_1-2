#include <stdio.h>

int main()
{

    int num, bit;
    char rotation;
    printf(" Enter a positive number that takes 8 bits: ");
    scanf(" %d", &num);
    printf(" No. of binary bits shifted to be shifted: ");
    scanf(" %d", &bit);
    printf("Enter l for left shift || Enter r for right shift");
    scanf(" %c", &rotation);

    switch (rotation)
    {
    case 'r':
        num = (num >> bit);
        printf("The new value of num after right shift: %d\n", num);
        break;
    case 'l':
        num = (num << bit);
        printf("The new value of num after left shift: %d\n", num);
        break;
    default:
        printf("Invalid option!\n");
        break;
    }
}