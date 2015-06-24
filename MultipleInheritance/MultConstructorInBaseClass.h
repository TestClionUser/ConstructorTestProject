//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_BASEINHERITANCECLASS_H
#define CONSTRUCTORTESTPROJECT_BASEINHERITANCECLASS_H


#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestUnion.h"
#include "../TESTDATA/TestStruct.h"

/*
 * Testing constructor
 * with multiple constructors in BaseClass
 * with/without default constructor
 *
 * Add constructor to a child
 * (1) child has constructors
 * (2) child doesn't have constructors
 * (3) child doesn't have constructors, child1::child has constructors
 */
class MultConstructorInBaseClass {

    int pubByDefaultField;
private:
    int privateField;
protected:
    int protField;
public:
    int pubField;

    //more fields
public:
    TestClass testClassField;
    TestUnion testUnionField;
    TestStruct testStuctField;

    TestClass *testClassFieldP = nullptr;
    TestUnion *testUnionFieldP;
    TestStruct *testStuctFieldP;


    MultConstructorInBaseClass() { }


    MultConstructorInBaseClass(int pubByDefaultField) : pubByDefaultField(pubByDefaultField) {
    }


    MultConstructorInBaseClass(int pubByDefaultField, int privateField, int protField)
            : pubByDefaultField(pubByDefaultField), privateField(privateField), protField(protField) { }

    MultConstructorInBaseClass(int pubByDefaultField, int privateField, int protField, int pubField,
                                                  const TestClass &testClassField, const TestUnion &testUnionField,
                                                  const TestStruct &testStuctField, TestClass *testClassFieldP,
                                                  TestUnion *testUnionFieldP, TestStruct *testStuctFieldP)
            : pubByDefaultField(pubByDefaultField), privateField(privateField), protField(protField),
              pubField(pubField), testClassField(testClassField), testUnionField(testUnionField),
              testStuctField(testStuctField), testClassFieldP(testClassFieldP), testUnionFieldP(testUnionFieldP),
              testStuctFieldP(testStuctFieldP) { }
};


//==============================================================================//
/*
 * (1)
 */
//==============================================================================//

/*
 * (1) child has constructors
 * (1.1) add the same constructor
 * (1.2)add another constructor
 */
class ChildPrivate : private MultConstructorInBaseClass {
    int aChildField;

public:

    ChildPrivate(int aChildField) : MultConstructorInBaseClass(), aChildField(aChildField){}
};

/*
 * (1.3)comment hier constructor, check error about default constructor
 * Check "createDefault Constructor" menu item "Alt Enter" on the error, generate default constructor for a Parent
 */
class Child1Private : private ChildPrivate {
    int aChild1Field;

public:
    Child1Private(int aChildField) : ChildPrivate(aChildField) { }
};

//==============================================================================//
/*
 * (2)
 */
// ==============================================================================//

/*
 * (2.1) child doesn't have constructors
 */
class ChildProtected : protected MultConstructorInBaseClass {
    int aChildProtectedField;
};

/*
 *  (2.2)Parent doesn't have constructors
 */
class Child1Protected : protected ChildProtected {
    int aChild1ProtectedField;
};


//==============================================================================//
/*
 * (3)
 */
//==============================================================================//
/*
 * (3) child doesn't have constructors, child1::child has constructors
 */
class ChildPublic : public MultConstructorInBaseClass {
    int aChildPublicField;
    //generate constructor hier

};

class Child1Public : public ChildPublic {
    int aChild1PublicField;
public:
    Child1Public(int aChild1PublicField) : aChild1PublicField(aChild1PublicField) { }
};



#endif //CONSTRUCTORTESTPROJECT_BASEINHERITANCECLASS_H
