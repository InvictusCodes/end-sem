#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2, real_part, imag_part;

    printf("Enter Coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        real_part = -b / (2 * a);
        imag_part = sqrt(-d) / (2 * a);
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", real_part, imag_part, real_part, imag_part);
    }

    return 0;
}
