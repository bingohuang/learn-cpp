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
    };

}  // namespace seamless

#endif //LEARN_CPP_FOOINTERFACE_H
