#include "input.h"
#include <stdio.h>

void input_int(int *a, int *b)
{
    printf("please input two number:\r\n");
    scanf("%d %d", a, b);
    printf("\r\n");
}
