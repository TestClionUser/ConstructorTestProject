//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TEMPLATEUNION_H
#define CONSTRUCTORTESTPROJECT_TEMPLATEUNION_H

#include <iostream>
/*
 * Generate constructor for Union
 */
template <typename T1, typename T2>
class TemplateUnion {
        T1 t1;
        T2 t2;


public:
    template<typename T3>
        TemplateUnion(T1 t1, T3 t3) : t1(t1) {
            std::cout << t2 << std::endl;
        }

};


#endif //CONSTRUCTORTESTPROJECT_TEMPLATEUNION_H
