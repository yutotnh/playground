#include <stdio.h>

int main()
{
    // 直接文字列リテラルを sizeof() に渡した場合
    printf("sizeof(\"Normal\") = %ld\n", sizeof("Normal"));

    // 配列を sizeof() に渡した場合
    char str[] = "Normal";
    printf("char str[] = \"Normal\"; sizeof(str) = %ld\n", sizeof(str));
}
