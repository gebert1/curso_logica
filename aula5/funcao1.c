#include <stdio.h>

int eh_divisivel(int a, int b)
{
    if(a % b == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d\n", eh_divisivel(9, 3));
    printf("%d\n", eh_divisivel(10, 3));

    return 0;
    
}