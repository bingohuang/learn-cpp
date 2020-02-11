//
// Created by BingoHuang on 2020/2/11.
//

#include <gmock/gmock.h>

#include "FooMock.h"

using namespace seamless;
using namespace std;

using ::testing::Return;

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc, argv);

    string value = "Hello Bingo!";
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, getArbitraryString()).Times(1).
            WillOnce(Return(value));
    string returnValue = mockFoo.getArbitraryString();
    cout << "Returned Value: " << returnValue << endl;

    return EXIT_SUCCESS;
}