#include <string>

class B1{
public:
    virtual void vf();
    void f();
    virtual void pvf() =0;
};

class D1 : public B1 {
public:
    void vf() override;
    void f();
};

class D2 : public D1 {
public:
    //void vf();
    //void f();
    void pvf() override;
};

class B2{
public:
    virtual void pvf() =0;
};

class D21 : public B2 {
public:
    // Yes, this should not be defined like this, it should use a getter/setter, but that's not the point
    std::string st = "D21 String"; 
    void pvf() override; 
};

class D22 : public B2 {
public:
    // Yes, this should not be defined like this, it should use a getter/setter, but that's not the point
    int st = 7; 
    void pvf() override; 
};