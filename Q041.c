#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for (int i = 0; i < digits; i++)
    {
        power = power * 10;
    }

    result = last * power + (n % power) - last + first;

    printf("Number after swapping = %d", result);

    return 0;
}
