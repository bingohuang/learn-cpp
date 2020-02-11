//
// Created by BingoHuang on 2020/2/11.
//

#ifndef LEARN_CPP_FOOMOCK_H
#define LEARN_CPP_FOOMOCK_H

#include <gmock/gmock.h>
#include <string>
#include "FooInterface.h"

namespace seamless {

    class MockFoo: public FooInterface {
    public:
        MOCK_METHOD0(getArbitraryString, std::string());
        MOCK_METHOD1(setValue, void(std::string& value));
        MOCK_METHOD2(setDoubleValues, void(int x, int y));
    };

}  // namespace seamless

#endif //LEARN_CPP_FOOMOCK_H
