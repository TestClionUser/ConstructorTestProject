//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TESTCOPYCONSTRUCTORCLASS_H
#define CONSTRUCTORTESTPROJECT_TESTCOPYCONSTRUCTORCLASS_H

/*
 * Create Copy-constructor in Base( remove // )
 * check constructor generation in Child
 */
class TestCopyConstructorClass {

public:

    //TestCopyConstructorClass(const TestCopyConstructorClass& a){}


};
/*
 *
 * Ћюгично было бы ожидать генерацию конструктора копировани€ у Child, если в Base - конструктор копировани€
 * —ейчас генеритс€ обычный
 */
class ChildTestCopyConstructorClass: TestCopyConstructorClass{



};

#endif //CONSTRUCTORTESTPROJECT_TESTCOPYCONSTRUCTORCLASS_H
