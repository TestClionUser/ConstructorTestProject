//
// Created by Ed on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_CPP_3646_H
#define CONSTRUCTORTESTPROJECT_CPP_3646_H

/*
 * CPP-3646 Missing error for invalid constructor of base template class
 * Bug - see TODO
 */

template<typename T, typename S>
class CPP_3646 {
public:
    CPP_3646() { }
};


template<typename U>
class CPP_3646<int, U> {
public:
    int t;

    CPP_3646(int t) : t(t) { }
};


class TestClass1 : public CPP_3646<bool, int> {
public:
    // TestClass1(int t) : CPP_3646(t) { } //TODO remove comment. Here must be error: no matching function for call to 'PartialRealization<bool, int>::PartialRealization(int&)'
};


#endif //CONSTRUCTORTESTPROJECT_CPP_3646_H
