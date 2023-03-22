/**
 * @file path_max.cpp
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief PATH_MAX(パスの最大長)と  NAME_MAX(ファイル名の最大長)を出力する
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <climits>
#include <iostream>

int main()
{
    std::cout << "PATH_MAX(パスの最大長)と  NAME_MAX(ファイル名の最大長)を出力する" << std::endl;

    std::cout << "PATH_MAX(パスの最大長) = " << PATH_MAX << std::endl;
    std::cout << "NAME_MAX(ファイル名の最大長) = " << NAME_MAX << std::endl;

    return 0;
}
