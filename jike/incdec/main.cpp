//
// Created by BingoHuang on 2020/2/5.
//

#include <iostream>

int main() {
    int i = 0, j;

    j = ++i; // 前置形式得到自增之后的值，j = 1, i = 1
    std::wcout << "j = " << j
               << ", i = " << i << std::endl;
    j = i++; // 后置形式得到自增之前的值，j = 1, i = 2
    std::wcout << "j = " << j
               << ", i = " << i << std::endl;
    ++i = 3; // 这种奇怪的用法是允许的，想一下为什么？
    std::wcout << "i = " << i << std::endl;

    int &refi = ++i;
    std::wcout << "refi = " << refi << std::endl;

    //i++ = 3; // 这种奇怪的用法是不允许的，想一下为什么？
    //int &refi2 = i++;
    const int &crefi = i++;
    std::wcout << "crefi = " << crefi << std::endl;

    std::cout << "Hello, Bingo!" << std::endl;
    return 0;
}
