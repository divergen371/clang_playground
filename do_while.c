//
// Created by 石川篤 on 24/07/14.
//

#include <stdio.h>

int main()
{
    char a;
    printf("好きなアルファベットを入力してください\n");

    do
        {
            a = getchar();
            printf("%c", a);
        } while (a != 'z');
    return 0;
}