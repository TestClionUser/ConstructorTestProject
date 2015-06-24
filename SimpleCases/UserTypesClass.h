//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_USERTYPESCLASS_H
#define CONSTRUCTORTESTPROJECT_USERTYPESCLASS_H


#include <memory>
#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestUnion.h"
#include "../TESTDATA/TestStruct.h"

class UserTypesClass {
    TestClass testClassField;
    TestStruct testStructField;
    TestUnion testUnionField;

    TestClass *testClassFieldP;
    TestStruct *testStructFieldP;
    TestUnion *testUnionFieldP;

    /*TestClass &testClassFieldRef;
    TestStruct &testStructFieldRef;
    TestUnion &testUnionFieldRef;
     */

    std::shared_ptr<TestClass> p2;
};


#endif //CONSTRUCTORTESTPROJECT_USERTYPESCLASS_H
