//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TEMPLATESTRUCT_H
#define CONSTRUCTORTESTPROJECT_TEMPLATESTRUCT_H


#include <iostream>

/*
 * Generate Constructors for Parent, Child
 * Generate Constructor in AnotherClass with commented/notCommented partial realization
 */
template<typename T1, typename T2>
struct TemplateStruct {
    T1 t1;

    TemplateStruct() { }

    template<typename Dran>
    TemplateStruct(T1 t1, Dran &hz) : t1(t1) {
        std::cout << hz << std::endl;
    }

};

/*
 * Child
 */
struct Child : TemplateStruct<int, int> {

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
struct AnotherClass {
    TemplateStruct<TemplateStruct<int, int>, bool> obj1;


};


#endif //CONSTRUCTORTESTPROJECT_TEMPLATESTRUCT_H
