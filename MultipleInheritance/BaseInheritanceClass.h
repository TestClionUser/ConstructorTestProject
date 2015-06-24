//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TESTBASECLASSINHERITANCE_H
#define CONSTRUCTORTESTPROJECT_TESTBASECLASSINHERITANCE_H


#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestUnion.h"
#include "../TESTDATA/TestStruct.h"

/*
 * Testing constructor for
 * Not-multiple Inheritance
 * public,private,protected
 *
 * (1) with fields in Child
 * (2) without fields in Child
 * (3) ChildFieldName is the same as ParentFieldName, generate Constructor with both fields
 */
class BaseInheritanceClass {

    int pubByDefaultField;
private:
    int privateField;
protected:
    int protField;
public:
    int pubField;

    //more
public:
    TestClass testClassField;
    TestUnion testUnionField;
    TestStruct testStuctField;

    TestClass *testClassFieldP = nullptr;
    TestUnion *testUnionFieldP;
    TestStruct *testStuctFieldP;


    BaseInheritanceClass() { }
};


//==============================================================================//
//private inheritance
//==============================================================================//
/*
 * Private inheritance
 * (1) With fields in Child
 */
class ChildPrivate : private BaseInheritanceClass {

    int aChildField;
    TestClass testClassField;
    TestUnion testUnionField;
    TestStruct testStuctField;

    TestClass *testClassFieldP = nullptr;
    TestUnion *testUnionFieldP;
    TestStruct *testStuctFieldP;

};

/*
 * Private inheritance
 * (1) With fields in Child
 */
class Child1Private : private ChildPrivate {
    int aChild1Field;

    //more
    TestClass testClassField;
    TestUnion testUnionField;
    TestStruct testStuctField;

    TestClass *testClassFieldP = nullptr;
    TestUnion *testUnionFieldP;
    TestStruct *testStuctFieldP;

};

//==============================================================================//
//protected inheritance
//==============================================================================//

/*
 * Protected inheritance
 * (2) Without fields in Child
 */
class ChildProtected : protected BaseInheritanceClass {

};

/*
 * Protected inheritance
 * Without fields in Child
 */
class Child1Protected : protected ChildProtected {

};


//==============================================================================//
//public inheritance
//==============================================================================//

/*
 * Public inheritance
 * (3) ChildFieldName is the same as ParentFieldName
 * 1. Generate constructor with param for ChildPublic
 * 2. generate Constructor with param for Child1Public
 * Check names.
 */
class ChildPublic : public BaseInheritanceClass {
    int aChildPublicField;

};

class Child1Public : public ChildPublic {
    int aChildPublicField;



};

#endif //CONSTRUCTORTESTPROJECT_TESTBASECLASSINHERITANCE_H
