//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TEMPLATECLASS_H
#define CONSTRUCTORTESTPROJECT_TEMPLATECLASS_H


#include <iostream>
#include "../TESTDATA/TestClass.h"

/*
 * Generate Constructors for Parent, Child
 * Generate Constructor in AnotherClass with commented/notCommented partial realization
 */
template <typename T1, typename T2>
class TemplateClass {
    T1 t1;

public:

    TemplateClass() { }

    TemplateClass(T1 t1) : t1(t1) { }

    template<typename Dran>
    TemplateClass(T1 t1, Dran& d1) : t1(t1) {
        std::cout << d1 << std::endl;
    }

};



/*
* Child
*/
class Child : TemplateClass<int, int> {

};



//==============================================

/*template <typename T1>
class TemplateClass<T1, int>
{

};*/
//==============================================


/*
 *  field =template type
 */
class AnotherClass
{
    TemplateClass<TemplateClass<int, int>, bool> obj1;

};


class AnotherClass1 : public TemplateClass<int, bool>{
    TemplateClass<int,bool> *testObj2;
    int a;
    char b;
    bool d;
    double  aDouble;
    TestClass testClassField;
};

#endif //CONSTRUCTORTESTPROJECT_TEMPLATECLASS_H
