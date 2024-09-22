#include <stdio.h>

#define PI 3.14128

int main(void)
{
    float radius = 10.0, volume;

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume of the sphere: %.1f", volume);

    return 0;
}
