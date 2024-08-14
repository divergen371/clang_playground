//
// Created by 石川篤 on 24/08/14.
//

#include <stdio.h>

int main()
{
    int i, sum = 0;
    int a[] = {1, 23, 4, 56, 7};
    for (i = 0; i < 5; ++i)
        {
            printf("a[%d]=%d\n", i, a[i]);
            sum = sum + a[i];
        }
    printf("array total %d\n", sum);
    return 0;
}