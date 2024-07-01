#include <stdio.h>

int main()
{
    long a[] = {1, 2, 3, 4};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++)
        {
            printf("%ld\n", a[i]);
        }

    printf("%lu\n", sizeof(unsigned char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(long[3]));

    int e[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printf("%lu\n", sizeof(e));

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
                {
                    printf("%d%s", e[i][j], j < 3 ? ", " : "\n");
                }
        }

    return 0;
}
