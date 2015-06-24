//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_USERTYPESSTRUCT_H
#define CONSTRUCTORTESTPROJECT_USERTYPESSTRUCT_H


#include <memory>
#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestStruct.h"
#include "../TESTDATA/TestUnion.h"

struct UserTypesStruct {
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


#endif //CONSTRUCTORTESTPROJECT_USERTYPESSTRUCT_H
