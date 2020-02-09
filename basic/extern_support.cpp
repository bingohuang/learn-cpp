//
// Created by BingoHuang on 2020/2/9.
//

#include <iostream>

extern int count;

void write_extern(void)
{
    std::cout << "Count is " << count << std::endl;
}