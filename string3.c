//
// Created by 石川篤 on 24/07/07.
//

#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>

int main()
{
    // "Hello" 文字列の長さを数える
    char s[] = "Hello";
    int len = strlen(s);
    printf("%d\n", len);

    // ロケールを設定する
    if (setlocale(LC_ALL, "") == NULL)
        {
            printf("ロケールの設定に失敗しました。\n");
            return 1;
        }

    // 日本語の文字列を wchar_t で初期化する
    wchar_t ws2[] = L"こんにちは";

    // ws2 の内容を確認する
    for (int i = 0; i < 6; i++)
        {
            wprintf(L"ws2[%d] = %lc\n", i, ws2[i]);
        }

    // 日本語のワイド文字列の長さを計算する
    int japaneselen = wcslen(ws2);

    // ws2 のアドレスを表示する
    wprintf(L"%p\n", ws2);

    // 日本語のワイド文字列を表示する
    wprintf(L"%ls\n", ws2);

    // 日本語のワイド文字列の長さを表示する
    printf("%d\n", japaneselen);

    return 0;
}
