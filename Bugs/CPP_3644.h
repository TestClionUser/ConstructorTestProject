//
// Created by Ed on 25/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_CPP_3644_H
#define CONSTRUCTORTESTPROJECT_CPP_3644_H

/*
 *  Parameter type mismatch in template constructor call
 */
class CPP_3644 {


};

class TestClass {
public:
    template<typename T>
    TestClass(T &t) { }
};

class OneMoreClass {
public:
    void Foo() {
        TestClass obj1("blabla"); //TODO  Bug: now  Error is displayed here. Should not be displayed.
    }
};

#endif //CONSTRUCTORTESTPROJECT_CPP_3644_H
