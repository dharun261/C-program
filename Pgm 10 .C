#include <stdio.h>

// 1. No Argument, No Return
void NANR()
{
    printf("Hello from NANR\n");
}

// 2. Argument, No Return
void ANR(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

// 3. No Argument, With Return
int NAWR()
{
    return 10 + 20;
}

// 4. Argument, With Return
int AWR(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    NANR();

    ANR(10, 20);

    result = NAWR();
    printf("NAWR Result = %d\n", result);

    result = AWR(30, 40);
    printf("AWR Result = %d\n", result);

    return 0;
}
