/**
 * @file lambda_capture.cpp
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief ラムダ式のcaptureリストの動作を確かめる
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

/**
 * @brief キャプチャリストの変数を値渡しにした場合の動作確認。定義したときの値になる。
 *
 */
void pass_by_value()
{
    int a = 0;

    std::cout << "main(): a = " << a << std::endl;

    auto f = [a]() { std::cout << "f(): a = " << a << std::endl; };

    a++;

    std::cout << "main(): a = " << a << std::endl;

    // ラムダ式を定義したときの a の値を出力する
    f();
}

void pass_by_reference()
{
    int a = 0;

    std::cout << __func__ << std::endl;

    std::cout << "(): a = " << a << std::endl;

    auto f = [&a]() { std::cout << "f(): a = " << a << std::endl; };

    a++;

    std::cout << "main(): a = " << a << std::endl;

    // 参照なので、実行した時の a の値が出力される
    f();
}

int main(int argc, char *argv[])
{
    pass_by_value();
    pass_by_reference();

    return 0;
}
