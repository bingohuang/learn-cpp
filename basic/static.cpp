//
// Created by BingoHuang on 2020/2/9.
//

#include <iostream>

// Function declaration
void func(void);

static int count = 10; /* Global static variable */

int main()
{
    while(count--)
    {
        func();
    }
    return 0;
}
// Function definition
void func( void )
{
    static int i = 5; // local static variable
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}