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
 * ������� ���� �� ������� ��������� ������������ ����������� � Child, ���� � Base - ����������� �����������
 * ������ ��������� �������
 */
class ChildTestCopyConstructorClass: TestCopyConstructorClass{



};

#endif //CONSTRUCTORTESTPROJECT_TESTCOPYCONSTRUCTORCLASS_H
