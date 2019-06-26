#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step, temp;

    lower = 0;
    upper = 200;
    step = 20;

    celsius = lower;

    while (celsius <= upper)
    {
        temp = (celsius / 5) * 9;
        fahr = temp + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = step;
    }
    
}