//
// Created by 石川篤 on 24/07/01.
//

#include <stdio.h>


int main()
{
    const int a = 5; // aが他の場所で3として使用されていない場合、この行を削除できます
    const int b = a;
    const int c = 10;
    const int d = 7;

    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
};