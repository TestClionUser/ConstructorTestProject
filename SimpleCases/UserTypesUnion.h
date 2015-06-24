//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_USERTYPESUNION_H
#define CONSTRUCTORTESTPROJECT_USERTYPESUNION_H


#include <memory>
#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestStruct.h"
#include "../TESTDATA/TestUnion.h"

union UserTypesUnion {
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


#endif //CONSTRUCTORTESTPROJECT_USERTYPESUNION_H
