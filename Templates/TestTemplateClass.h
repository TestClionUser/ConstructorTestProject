//
// Created on 24/06/2015.
//

#ifndef CONSTRUCTORTESTPROJECT_TESTTEMPLATECLASS_H
#define CONSTRUCTORTESTPROJECT_TESTTEMPLATECLASS_H


template <typename T1, typename T2>
class TestTemplateClass {


public:
    template < typename T3>
    TestTemplateClass(T3& t3){}
/*
    T2 Foo(T1 t1)
    {
        return 0;
    }*/
};


class ChildTestTemplateClass : public TestTemplateClass<int, int >{


    int field1;

public:
    ChildTestTemplateClass(int &t3) : TestTemplateClass(t3) { }

    ChildTestTemplateClass(bool &t3) : TestTemplateClass(t3) { }

    ChildTestTemplateClass(int &t3, int field1) : TestTemplateClass(t3), field1(field1) { }
};



class OneMoreCls
{
    // TestTemplateClass<int,int>  obj("hjsadjh");

public:
    void Foo()
    {
        //TemplateClass<int, bool> obj(5, "blabla");

        TestTemplateClass<int, bool> obj1( "blabla");
    }
};



#endif //CONSTRUCTORTESTPROJECT_TESTTEMPLATECLASS_H
