//
// Created by 石川篤 on 24/08/14.
//

#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (y = 0; y < 2; y++)
        {
            for (x = 0; x < 3; x++)
                {
                    printf("a[%d][%d]=%d\n", y, x, a[y][x]);
                    sum = sum + a[y][x];
                }
        }
    printf("total %d\n", sum);
    return 0;
}