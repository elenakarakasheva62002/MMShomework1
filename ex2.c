#include <stdio.h>
#include <math.h>
#define PI (3.141592653589793)
int main()
{
    float R, L, H;
    printf("Enter radius R: ");
    scanf("%f", &R);
    printf("Enter height H: ");
    scanf("%f", &H);
    printf("Enter length L: ");
    scanf("%f", &L);

    float area, volume;
    area = (pow(cos((R-H)/R), -1) * pow(R,2)) - ((R-H)*sqrt(2*R*H - pow(H,2)));
    volume = area * L;
    printf("Volume of Horizontal Cylinder: %.2f\n", volume);

    float volume1;
    volume1 = PI*pow(R,2)*H;
    printf("Volume of straight cylinder: %.2f\n", volume1);
    return 0;
}