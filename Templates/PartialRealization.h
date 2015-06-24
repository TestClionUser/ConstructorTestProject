//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_PARTIALREALIZATION_H
#define CONSTRUCTORTESTPROJECT_PARTIALREALIZATION_H

/*
 * Generate Constructor for classes below
 * -default constructors in Base
 * -constructor in Base=PartialRealization contains params
 * -constructor in Base=PartialRealization<int, U> contains params
 */
template<typename T1, typename T2>
class PartialRealization {
    T1 t1;
    T2 t2;

public:
    //PartialRealization(T1 t1, T2 t2) : t1(t1), t2(t2) { }

};


template<typename U>
class PartialRealization<int, U> {
public:
    U u1;
    //PartialRealization(U u1) : u1(u1) { }
};

class TestClass1 : public PartialRealization<bool,int>{

};
class TestClass2 : public PartialRealization<int,int>{

};


#endif //CONSTRUCTORTESTPROJECT_PARTIALREALIZATION_H
