//
// Created by 石川篤 on 24/08/14.
//

#include <stdio.h>

int main()
{
    int a, b;
    for (a = 1; a <= 3; a++)
        {
            for (b = 1; b <= 4; b++)
                {
                    if (a + b == 5)
                        {
                            continue;
                        }
                    printf("%d+%d=%d\n", a, b, a + b);
                }
        }
    return 0;
}