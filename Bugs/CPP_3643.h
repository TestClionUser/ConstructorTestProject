//
// Created by Ed on 25/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_CPP_3643_H
#define CONSTRUCTORTESTPROJECT_CPP_3643_H

/*
 * Inaccessible method is not marked as an error by private/protected inheritance
 * See TODO.
 */
class CPP_3643 {

};

class Base {
public:
    void Foo() { }
};

class Child : private Base {
};

class OneMoreClass {
    void Func() {
        Child child;
        //child.Foo(); //TODO remove comment. Bug:  child.Foo() is not marked as an error, should be marked.
    }
};

#endif //CONSTRUCTORTESTPROJECT_CPP_3643_H
