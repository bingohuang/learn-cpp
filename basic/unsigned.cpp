//
// Created by BingoHuang on 2020/2/8.
//

#include <iostream>
using namespace std;

/* This program shows the difference between
 * signed and unsigned integers.
*/
int main()
{
    short int i;   // a signed short integer
    short unsigned int j;  // an unsigned short integer

    j = 50000;

    i = j;
    cout << i << " " << j;
    // -15536 50000

    return 0;
}