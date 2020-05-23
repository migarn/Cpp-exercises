#include <iostream>

using namespace std;

void fun1()
{
    float f1 = 0.1f, f2 = 0.3f, f3 = 0.4f;
    float f4 = (f1 + f2) + f3;
    float f5 = f1 + (f2 + f3);

    cout << "f4 = " << f4 << endl;
    cout << "f5 = " << f5 << endl;

    if (f4 == f5) {
        cout << "f4 == f5" << endl;
    } else {
        cout << "f4 != f5" << endl;
    }
}

int absInt(int x)
{
    return (x >= 0) ? x : -x;
}

void switchDemo(char c)
{
    switch (c) {
        case 'y':
            cout << "'y' matched" << endl;
            break;
        case 'n':
            cout << "'n' matched" << endl;
            break;
        case 'c':
            cout << "'c' matched" << endl;
            break;
        default:
            cout << "Default case, please select 'y', 'n' or 'c'" << endl;
    }
}

int main()
{
    fun1();
    switchDemo('c');
    cout << "absInt(-3) = " << absInt(-3) << endl;
    return 0;
}
