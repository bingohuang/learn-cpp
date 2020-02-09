//
// Created by BingoHuang on 2020/2/9.
//

#include <iostream>

int count ;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}