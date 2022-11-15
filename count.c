#include <stdio.h>

int main()
{
    unsigned int n = 0;
    while (n < 1000000000)
    {
        n++;
    }
    printf("n = %d", n);
}
