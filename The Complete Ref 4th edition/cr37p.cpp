#include <stdio.h>

int main()
{
    int x, y;

    x = 5;
    y = 2;

    printf("%d ", x / y);
    printf("%d ", x % y);

    x = 1;
    y = 2;

    printf("%d %d", x / y, x % y);
    

    return 0;
}