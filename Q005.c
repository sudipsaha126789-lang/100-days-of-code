#include <stdio.h>

int main() {
    float celcius, fahrenheit;

    printf("Enter temperture in celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;

}
