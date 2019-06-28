#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
    for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}