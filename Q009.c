#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float si, ci, amount;

    printf("Enter principal amout: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    amount = principal * pow(1 + rate / 100, time);
    ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    scanf("Compound Interest = %.2f\n", ci);

    return 0;

}
