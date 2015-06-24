//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_MULTIPLEINHERITANCE_H
#define CONSTRUCTORTESTPROJECT_MULTIPLEINHERITANCE_H

#include "../TESTDATA/TestClass.h"
#include "../TESTDATA/TestUnion.h"
#include "../TESTDATA/TestStruct.h"





/*
 *  (1) Generate constructor in case of MultipleInheritance (in the Child class down)
 *  (2) Place cursor out of any class. Check "Choose destination" possibility.
 *  (3) Generate constructor with big number of fields
 *  - generate constructors with maximal number of fields for all Parents
 *  - generate constructor with all these parentConstructors for a Child
 */
class Parent1 {
    int aParent1;
    int intParent1;
    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;

    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent1(int aParent1, int intParent1) : aParent1(aParent1), intParent1(intParent1) { }
    Parent1() { }


};

struct Parent2 {
    bool aParent2;
    int intParent2;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent2() { }
    Parent2(bool aParent2, int intParent2) : aParent2(aParent2), intParent2(intParent2) { }

    Parent2(bool aParent2, int intParent2, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent2(
            aParent2), intParent2(intParent2), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }


};

class Parent3 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent3() { }
    Parent3(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent3(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent3(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};



class Parent4 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent4() { }
    Parent4(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent4(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent4(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent5 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent5() { }
    Parent5(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent5(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent5(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent6 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent6() { }
    Parent6(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent6(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent6(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent7 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent7() { }
    Parent7(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent7(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent7(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent8 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent8() { }
    Parent8(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent8(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent8(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent9 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent9() { }
    Parent9(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent9(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                     aBool(aBool), aChar(aChar),
                                                                     aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                     aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                     aUnsignedShort(aUnsignedShort),
                                                                     aShortInt(aShortInt),
                                                                     aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                     aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                     aUnsigned(aUnsigned),
                                                                     aUnsignedLongInt(aUnsignedLongInt),
                                                                     aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                     aFloat(aFloat), aDouble(aDouble),
                                                                     aLongDouble(aLongDouble) { }

    Parent9(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
            unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
            unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
            unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
            float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
            const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                          aUnsignedInt(
                                                                                                                  aUnsignedInt),
                                                                                                          aShort(aShort),
                                                                                                          aUnsignedShort(
                                                                                                                  aUnsignedShort),
                                                                                                          aShortInt(
                                                                                                                  aShortInt),
                                                                                                          aUnsignedShortInt(
                                                                                                                  aUnsignedShortInt),
                                                                                                          aLong(aLong),
                                                                                                          aLongInt(
                                                                                                                  aLongInt),
                                                                                                          aLongLongInt(
                                                                                                                  aLongLongInt),
                                                                                                          aUnsigned(
                                                                                                                  aUnsigned),
                                                                                                          aUnsignedLongInt(
                                                                                                                  aUnsignedLongInt),
                                                                                                          aUnsignedLongLongInt(
                                                                                                                  aUnsignedLongLongInt),
                                                                                                          aFloat(aFloat),
                                                                                                          aDouble(aDouble),
                                                                                                          aLongDouble(
                                                                                                                  aLongDouble),
                                                                                                          testCls(testCls),
                                                                                                          testUnn(testUnn),
                                                                                                          testStr(testStr),
                                                                                                          testClsP(
                                                                                                                  testClsP),
                                                                                                          testUnnP(
                                                                                                                  testUnnP),
                                                                                                          testStrP(
                                                                                                                  testStrP) { }
};

class Parent10 {
    char aParent3;
    int intParent3;

    //more
    bool aBool;

    char aChar;
    unsigned char aUnsignedChar;

    int aInt;
    unsigned int aUnsignedInt;
    short aShort;
    unsigned short aUnsignedShort;
    short int aShortInt;
    unsigned short int aUnsignedShortInt;


    long aLong;
    long int aLongInt;
    long long int aLongLongInt;
    unsigned long aUnsigned;
    unsigned long int aUnsignedLongInt;
    unsigned long long int aUnsignedLongLongInt;

    float aFloat;

    double aDouble;
    long double aLongDouble;
    //more
    TestClass testCls;
    TestUnion testUnn;
    TestStruct testStr;

    TestClass *testClsP = nullptr;
    TestUnion *testUnnP;
    TestStruct *testStrP;

public:
    Parent10() { }
    Parent10(char aParent3, int intParent3) : aParent3(aParent3), intParent3(intParent3) { }

    Parent10(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
             unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
             unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
             unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
             float aFloat, double aDouble, long double aLongDouble) : aParent3(aParent3), intParent3(intParent3),
                                                                      aBool(aBool), aChar(aChar),
                                                                      aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                      aUnsignedInt(aUnsignedInt), aShort(aShort),
                                                                      aUnsignedShort(aUnsignedShort),
                                                                      aShortInt(aShortInt),
                                                                      aUnsignedShortInt(aUnsignedShortInt), aLong(aLong),
                                                                      aLongInt(aLongInt), aLongLongInt(aLongLongInt),
                                                                      aUnsigned(aUnsigned),
                                                                      aUnsignedLongInt(aUnsignedLongInt),
                                                                      aUnsignedLongLongInt(aUnsignedLongLongInt),
                                                                      aFloat(aFloat), aDouble(aDouble),
                                                                      aLongDouble(aLongDouble) { }

    Parent10(char aParent3, int intParent3, bool aBool, char aChar, unsigned char aUnsignedChar, int aInt,
             unsigned int aUnsignedInt, short aShort, unsigned short aUnsignedShort, short aShortInt,
             unsigned short aUnsignedShortInt, long aLong, long aLongInt, long long int aLongLongInt,
             unsigned long aUnsigned, unsigned long aUnsignedLongInt, unsigned long long int aUnsignedLongLongInt,
             float aFloat, double aDouble, long double aLongDouble, const TestClass &testCls, const TestUnion &testUnn,
             const TestStruct &testStr, TestClass *testClsP, TestUnion *testUnnP, TestStruct *testStrP) : aParent3(
            aParent3), intParent3(intParent3), aBool(aBool), aChar(aChar), aUnsignedChar(aUnsignedChar), aInt(aInt),
                                                                                                           aUnsignedInt(
                                                                                                                   aUnsignedInt),
                                                                                                           aShort(aShort),
                                                                                                           aUnsignedShort(
                                                                                                                   aUnsignedShort),
                                                                                                           aShortInt(
                                                                                                                   aShortInt),
                                                                                                           aUnsignedShortInt(
                                                                                                                   aUnsignedShortInt),
                                                                                                           aLong(aLong),
                                                                                                           aLongInt(
                                                                                                                   aLongInt),
                                                                                                           aLongLongInt(
                                                                                                                   aLongLongInt),
                                                                                                           aUnsigned(
                                                                                                                   aUnsigned),
                                                                                                           aUnsignedLongInt(
                                                                                                                   aUnsignedLongInt),
                                                                                                           aUnsignedLongLongInt(
                                                                                                                   aUnsignedLongLongInt),
                                                                                                           aFloat(aFloat),
                                                                                                           aDouble(aDouble),
                                                                                                           aLongDouble(
                                                                                                                   aLongDouble),
                                                                                                           testCls(testCls),
                                                                                                           testUnn(testUnn),
                                                                                                           testStr(testStr),
                                                                                                           testClsP(
                                                                                                                   testClsP),
                                                                                                           testUnnP(
                                                                                                                   testUnnP),
                                                                                                           testStrP(
                                                                                                                   testStrP) { }
};

/*
 * Child Class.
 */
class MultipleInheritance : public Parent1, public Parent2, Parent3, Parent4, Parent5, Parent6, Parent7, Parent8, Parent9, Parent10
{
    int childField;
};


#endif //CONSTRUCTORTESTPROJECT_MULTIPLEINHERITANCE_H
