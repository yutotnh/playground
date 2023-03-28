/**
 * @file uint_int.cpp
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief uint32_t 型の変数に -1 を代入した時に、実際の値が何になるかを検証する
 * @version 0.1
 * @date 2023-03-28
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    uint32_t num = -1;
    std::cout << "num = " << num << std::endl;
    // num = 4294967295
    return 0;
}
