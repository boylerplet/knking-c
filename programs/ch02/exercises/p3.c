#include <stdio.h>

#define PI 3.14128

int main(void)
{
    float radius, volume;

    printf("Enter raius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume of the sphere: %.1f", volume);

    return 0;
}
