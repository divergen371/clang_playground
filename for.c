//
// Created by 石川篤 on 24/07/12.
//


#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
                {
                    printf("%d * %d = %d\n", i, j, i * j);
                }
        }
}