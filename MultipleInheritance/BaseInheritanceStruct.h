//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_BASEINHERITANCESTRUCT_H
#define CONSTRUCTORTESTPROJECT_BASEINHERITANCESTRUCT_H

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
 */
struct BaseInheritanceStruct {

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


};

//==============================================================================//
//private inheritance
//==============================================================================//
/*
 * Private inheritance
 * (1) With fields in Child
 */
struct ChildPrivate : private BaseInheritanceStruct {

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
struct Child1Private : private ChildPrivate {
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
struct ChildProtected : protected BaseInheritanceStruct {

};

/*
 * Protected inheritance
 * Without fields in Child
 */
struct Child1Protected : protected ChildProtected {

};


//==============================================================================//
//public inheritance
//==============================================================================//

/*
 * Public inheritance
 *
 */
struct ChildPublic : public BaseInheritanceStruct {
    int aChildPublicField;

};

struct Child1Public : public ChildPublic {
    int aChild1PublicField;

};


#endif //CONSTRUCTORTESTPROJECT_BASEINHERITANCESTRUCT_H
