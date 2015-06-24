//
// Created by Ed on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_CPP_3648_H
#define CONSTRUCTORTESTPROJECT_CPP_3648_H


#include <memory>
#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestStruct.h"
#include "../TESTDATA/TestUnion.h"

/*
 * CPP-3648 Don't create duplicated constructor for some field types
 */
class CPP_3648 {
    std::shared_ptr<TestClass> p2;
    TestClass testCls;
    TestStruct testStr;
    TestUnion testUnn;

public:
    CPP_3648(const std::shared_ptr<TestClass> &p2) : p2(p2) { }

    CPP_3648(const TestClass &testCls) : testCls(testCls) { }

    CPP_3648(const TestStruct &testStr) : testStr(testStr) { }

    CPP_3648(const TestUnion &testUnn) : testUnn(testUnn) { }


};


#endif //CONSTRUCTORTESTPROJECT_CPP_3648_H
