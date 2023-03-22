/**
 * @file assert.cpp
 * @author yutotnh (57719497+yutotnh@users.noreply.github.com)
 * @brief assert マクロを使ってみる
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <cassert>
#include <iostream>

int main(int argc, char** argv)
{
    // std::abort();
    assert(true);
    std::cout << "__FILE__ =" << __FILE__ << std::endl;
    assert(1 + 2 == 4);
    return 0;
}
