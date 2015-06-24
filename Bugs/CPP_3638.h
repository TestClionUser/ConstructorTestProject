//
// Created by Ed on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_CPP_3638_H
#define CONSTRUCTORTESTPROJECT_CPP_3638_H

/*
 *  Generate constructor generates incorrect code for a child with a field if parent has some constructors.
 *  Bug - see TODO
 */
class CPP_3638 {

    int pubByDefaultField;
public:
    CPP_3638() { }

    CPP_3638(int pubByDefaultField) : pubByDefaultField(pubByDefaultField) { }
};


class ChildClass : private CPP_3638 {
    int fieldChildClass;

    //TODO Generate constructor for ChildClass: select TestBase() constructor, select field. Generated constructor is invalid:

    /*public:
        ChildClass(int fieldChildClass) : TestBase()

        fieldChildClass(fieldChildClass){}
    };*/
};


#endif //CONSTRUCTORTESTPROJECT_CPP_3638_H
