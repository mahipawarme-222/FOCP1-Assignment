#include <stdio.h>

int main() {
    float x, y;
    printf("Enter coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("Point lies in First Quadrant\n");
    else if (x < 0 && y > 0)
        printf("Point lies in Second Quadrant\n");
    else if (x < 0 && y < 0)
        printf("Point lies in Third Quadrant\n");
    else if (x > 0 && y < 0)
        printf("Point lies in Fourth Quadrant\n");
    else if (x == 0 && y != 0)
        printf("Point lies on Y-axis\n");
    else if (y == 0 && x != 0)
        printf("Point lies on X-axis\n");
    else
        printf("Point is at the Origin\n");

    return 0;
}