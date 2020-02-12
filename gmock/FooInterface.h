//
// Created by BingoHuang on 2020/2/11.
//

#ifndef LEARN_CPP_FOOINTERFACE_H
#define LEARN_CPP_FOOINTERFACE_H

#include <string>

namespace seamless {

    class FooInterface {
    public:
        virtual ~FooInterface() {}

    public:
        virtual std::string getArbitraryString() = 0;
        virtual void setValue(std::string& value) = 0;
        virtual void setDoubleValues(int x, int y) = 0;
        virtual int getParameter(std::string* name, std::string* value) = 0;
        virtual int getSize() = 0;
        virtual std::string getValue() = 0;
    };

}  // namespace seamless

#endif //LEARN_CPP_FOOINTERFACE_H
