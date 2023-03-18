/**
 * @file return_value.c
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief [関数内でreturnを省略することで発生しうる未定義バグ](https://qiita.com/pshiko/items/835907b89c08a185e5f6) の記事を読んで、実際にどう動くか気になったので、検証してみた
 * @version 0.1
 * @date 2023-03-16
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int funcA()
{
    return 100;
}

int funcB()
{
}

/**
 * @brief 内部で funcA を呼び出して、 自身は return xxx をしない関数
 * @return funcA() の返り値
 */
int funcC()
{
    funcA();
}

int main()
{
    printf("funcB: %d\n", funcB());  // funcB: 0

    printf("funcA: %d\n", funcA());  // funcA: 100

    // このような関数は直前に実行した関数の返り値が100だけど、 0 を返す
    printf("funcB: %d\n", funcB());  // funcB: 0

    // funcC 内で funcA を呼んでいるので、その値が返る
    printf("funcC: %d\n", funcC());  // funcC: 100

    return 0;
}
