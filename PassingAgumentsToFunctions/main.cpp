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

void swap2Ints(int *px, int *py)
{
    int tempX = *px;
    int tempY = *py;
    *px = tempY;
    *py = tempX;
}

void swap2(int *px, int *py)
{
   int *tmp = px;
   px = py;
   py = tmp;
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
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    cout << "Calling swap2Ints(int *px, int *py):" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swap2Ints(&x, &y);
    cout << "x = " << x << ", y = " << y << endl;

    cout << "x = " << x << ", y = " << y << endl;
    swap2(&x, &y);
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
