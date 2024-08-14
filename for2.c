//
// Created by 石川篤 on 24/08/14.
//
#include <stdio.h>


int main()
{
    for(int i = 0; i <= 5; i++)
        {
            printf("%d回目\n", i);
            if (i == 3)
                {
                    break;
                }
        }
    return 0;
}