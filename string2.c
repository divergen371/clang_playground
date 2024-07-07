//
// Created by 石川篤 on 24/07/07.
//

#include <stdio.h>

int main()
{
    char s[] = "Hello";
    printf("%c\n", s[1]);

    s[3] = 'p';
    s[4] = '\0';
    printf("%s\n", s);
    return 0;
}