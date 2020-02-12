//
// Created by BingoHuang on 2020/2/11.
//

#include <cstdlib>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "FooInterface.h"

class MockFoo: public seamless::FooInterface {
public:
    MOCK_METHOD0(getArbitraryString, std::string());
};


//using namespace seamless;
using namespace std;
using ::testing::Return;

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc, argv);

    string value = "Hello World!";
    MockFoo mockFoo;
    EXPECT_CALL(mockFoo, getArbitraryString()).Times(1).
            WillOnce(Return(value));
    string returnValue = mockFoo.getArbitraryString();
    cout << "Returned Value: " << returnValue << endl;

    return EXIT_SUCCESS;
}