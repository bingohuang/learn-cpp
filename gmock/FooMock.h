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
    };

}  // namespace seamless

#endif //LEARN_CPP_FOOMOCK_H
