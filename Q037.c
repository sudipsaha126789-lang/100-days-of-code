#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive numbers");
    }
    else
    {
        for (i = (a > b ? a : b); ; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }

        printf("LCM of %d and %d = %d", a, b, lcm);
    }

    return 0;
}
