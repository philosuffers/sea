#include <stdio.h>

float add(int a, int b)
{
    return(float)(a + b);
}

int main()
{
    int c;
    int d;
    scanf ("%d", &c);
    scanf ("%d", &d);
    float result = add(c,d);
    printf("Result: %f\n", result);
    return 0;
}
