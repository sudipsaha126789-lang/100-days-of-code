#include <stdio.h>

int main()
{
    int n, digit, rev = 0, complement = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else
        {
            printf("Invalid binary number!");
            return 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %d", complement);

    return 0;
}