#include <stdio.h>

int fun_num(char c)

{
    return (
        c == '0' || c == '1' ||
        c == '2' || c == '3' ||
        c == '4' || c == '5' ||
        c == '6' || c == '7' ||
        c == '8' || c == '9' 
    );
}

int main()
{
    printf("%d\n", fun_num('1'));
    printf("%d\n", fun_num('0'));
    printf("%d\n", fun_num('t'));

    return 0;
}