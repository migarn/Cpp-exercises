#include <iostream>


int main()
{
    using namespace std;
    auto x1 = 1;
    auto x2 = 2uL;
    auto x3 = 2.71;
    auto x4 = 3.14f;

    decltype (x3) x5 = 1.23;
    using t1 = decltype (x2);
    t1 x6 = 5;

    typedef unsigned long t2;
    t2 x7 = 6;

    cout << "sizeof(x1) = " << sizeof(x1) << endl;
    cout << "sizeof(x2) = " << sizeof(x2) << endl;
    cout << "sizeof(x3) = " << sizeof(x3) << endl;
    cout << "sizeof(x4) = " << sizeof(x4) << endl;
    cout << "sizeof(x5) = " << sizeof(x5) << endl;
    cout << "sizeof(x6) = " << sizeof(x6) << endl;
    cout << "sizeof(x7) = " << sizeof(x7) << endl;

    const int i = 3;
    auto j = i; // j is not a constant
    const double k = 3.0;

    cout << "sizeof(i) = " << sizeof(i) << endl;
    cout << "sizeof(j) = " << sizeof(j) << endl;
    cout << "sizeof(k) = " << sizeof(k) << endl;

    return 0;
}
