#include <stdio.h>
#include <math.h>

int main()
{

    float u, a, t;
    printf("Please Enter the initial velocity: ");
    scanf("%f", &u);
    printf("Please Enter the acceleration: ");
    scanf("%f", &a);
    printf("Please Enter the time elapsed by object: ");
    scanf("%f", &t);

    float finalVelocity = u + a * t;
    float distance = (u * t) + (0.5 * a * pow(t, 2));

    printf("Final Velocity is : %.2f\n", finalVelocity);
    printf("Distance traversed is : %.2f\n", distance);

    return 0;
}