/**
 * @file posix_version.cpp
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief _POSIX_VERSION マクロの出力を確かめる
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <unistd.h>  // _POSIX_VERSION マクロが定義されている

#include <iostream>

int main()
{
    std::cout << _POSIX_VERSION << std::endl;
    std::cout << _POSIX_C_SOURCE << std::endl;
    std::cout << __STRICT_ANSI__ << std::endl;
    return 0;
}
