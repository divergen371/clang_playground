//
// Created by 石川篤 on 24/07/07.
//
#include <stdio.h>
#include <string.h>

int main()
{
    char s[10] = "Hello";
    char s2[10];
    printf("%s\n", s);
    strcpy(s, "Goodbye");
    printf("%s\n", s);
    strncpy(s2, "test", 10);
    printf("%s\n", s2);
    return 0;
}