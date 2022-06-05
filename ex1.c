#include <stdio.h>
#include <math.h>
int main()
{
    float mass, height, BMI, newBMI;
    printf("Enter your mass in kg: ");
    scanf("%f", &mass);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    BMI = mass / (pow(height,2));
    printf("BMI is: %.2f \n", BMI);

    newBMI = (1.2 * mass) / (pow(height,2));
    printf("new BMI is: %.2f \n", BMI);
    return 0;
}