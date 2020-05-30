#include <iostream>

using namespace std;

class ConcreteClassDemo
{
public:
    void pubFun1() {
        cout << "pubFun1()" << endl;
        pubField1++; protField2++; privField3;
        protFun2(); privFun3();
    }

    int pubField1 = 1;

protected:
    void protFun2();
    int protField2 = 2;

private:
    void privFun3();
    int privField3 = 3;

    friend void gFriendFun1(ConcreteClassDemo&);
};

class AbstractClassDemo
{
public:
    virtual void vFun1() = 0;
    void fun2() {cout << "fun2()" << endl;}
    virtual ~AbstractClassDemo();
};

AbstractClassDemo::~AbstractClassDemo() {}

void ConcreteClassDemo::protFun2()
{
    cout << "protFun2()" << endl;
    pubField1++;
    protField2++;
    privField3++;

    privFun3();
}

void ConcreteClassDemo::privFun3()
{
    cout << "privFun3()" << endl;
    pubField1++;
    protField2++;
    privField3++;
}

void gFriendFun1(ConcreteClassDemo& cCD)
{
    cout << "gFriendFun1()" << endl;
    cCD.pubField1++;
    cCD.protField2++;
    cCD.privField3++;

    cCD.pubFun1();
    cCD.protFun2();
    cCD.privFun3();
}

void gNonFriendFun2(ConcreteClassDemo& cCD)
{
    cout << "gNonFriendFun2()" << endl;
    cCD.pubField1++;
    //cCD.protField2++;
    //cCD.privField3++;

    cCD.pubFun1();
    //cCD.protFun2();
    //cCD.privFun3();
}

int main()
{
    ConcreteClassDemo ccd;

    gFriendFun1(ccd);
    gNonFriendFun2(ccd);
    //AbstractClassDemo acd;

    return 0;
}
