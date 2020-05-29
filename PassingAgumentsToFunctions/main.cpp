#include <iostream>

int argByValue(int i)
{
    return 2 * i;
}

int argByReference(int &r)
{
    r *= 2;
    return 5 * r;
}

int argByPointer(int *p)
{
    *p *= 2;
    return 5 * *p;
}

int add(int *px, int *py)
{
   return *px + *py;
}

int main()
{
    using std::cout;
    using std::endl;

    int x = 1;
    cout << "x = " << x << endl;

    cout << "Calling argByValue(x):" << endl;
    int y = argByValue(x);
    cout << "x = " << x << ", y = " << y << endl;

    cout << "Calling argByReference(x):" << endl;
    y = argByReference(x);
    cout << "x = " << x << ", y = " << y << endl;

    cout << "Calling argByPointer(&x):" << endl;
    y = argByPointer(&x);
    cout << "x = " << x << ", y = " << y << endl;

        cout << "Calling add(int *px, int *py):" << endl;
    int z = add(&x, &y);
    cout << "x = " << x << ", y = " << y << ", z = " << z <<endl;

    return 0;
}
