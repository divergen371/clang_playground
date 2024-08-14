//
// Created by 石川篤 on 24/08/14.
//
#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i < 4; i++)
        {
            switch (i)
                {
                case 0:
                    printf("今日は晴れ\n");
                    break;

                case 2:
                    printf("今日は曇り\n");
                    break;

                case 3:
                    printf("今日は雨\n");
                    break;

                default:
                    printf("今日は台風\n");
                }
        }

    return 0;
}