#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    int a = 1;
    int b = 3;

    // Dla dwóch argumentów zwraca licznik i mianownik. Dla jednego przyjmuje mianownik jako 1
    Rational *number = new Rational(3,7);
    Rational *number2 = new Rational(3);
    Rational r8(5);

    Rational r2(2, 11), r3(1, -3), r5(18, 6);

    cout << number->denominator() << endl;
    cout << number2->denominator() << endl;
    cout << r2.denominator() << endl;
    cout << r3.denominator() << endl;
    cout << r5.denominator() << endl;
    cout << r8.denominator() << endl;
    // Dlaczego raz '.', a innym razem ->?


    return 0;
}
