#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three slides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles triangle");
        }
        else
        {
            printf("scalene Triangle");
        
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;

}
