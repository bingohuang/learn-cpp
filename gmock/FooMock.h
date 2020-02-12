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
        /*
        virtual std::string getArbitraryString() = 0;
        virtual void setValue(std::string& value) = 0;
        virtual void setDoubleValues(int x, int y) = 0;
        virtual int getParamter(std::string* name, std::string* value) = 0;
         */
        MOCK_METHOD0(getArbitraryString, std::string());
        MOCK_METHOD1(setValue, void(std::string& value));
        MOCK_METHOD2(setDoubleValues, void(int x, int y));
        MOCK_METHOD2(getParameter, int(std::string* name, std::string* value));
        MOCK_METHOD0(getSize, int());
        MOCK_METHOD0(getValue, std::string());
    };

}  // namespace seamless

#endif //LEARN_CPP_FOOMOCK_H
