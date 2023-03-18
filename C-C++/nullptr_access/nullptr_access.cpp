/**
 * @file nullptr_access.c
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief 意図的に nullptr にアクセスする実験
 * @version 0.1
 * @date 2023-03-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

void nullptr_access(char *p)
{
    std::cout << p[0] << std::endl;
}

int main()
{
    nullptr_access(nullptr);
    return 0;
}
