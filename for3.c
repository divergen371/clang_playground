//
// Created by 石川篤 on 24/08/14.
//


#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    const int MAX = 10;
    for (x = 0; x <= MAX; x++)
        {
            for (y = 0; y <= MAX; y++)
                {
                    for (z = 0; z < MAX; ++z)
                        {
                            a = (x * y + z);
                            if (a >= 35)
                                {
                                    break;
                                }
                        }
                    if (a >= 35)
                        {
                            break;
                        }
                }
            if (a >= 35)
                {
                    break;
                }
        }
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    return 0;
}