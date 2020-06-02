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
    Rational r9(r8);

    Rational r2(2, 11), r3(1, -3), r5(18, 6);

    Rational r89 = r3;
    Rational r500 = 6;
    Rational r56(24,12);
    Rational r66(27,-81);
    Rational r76(25,15);
    Rational r0(0);
    //Rational r00(0,0);
    Rational r07(0,7);


    cout << number->denominator() << endl;
    cout << number2->denominator() << endl;
    cout << number2->numerator() << endl;
    cout << r2.denominator() << endl;
    cout << r3.denominator() << endl;
    cout << r5.denominator() << endl;
    cout << r8.denominator() << endl;
    cout << r8.numerator() << endl;
    cout << r9.numerator() << endl;
    cout << r9.denominator() << endl;
    cout << r89.numerator() << endl;
    cout << r89.denominator() << endl;
    cout << r500.numerator() << endl;
    cout << r500.denominator() << endl;
    cout << r0.numerator() << endl;
    cout << r0.denominator() << endl;
    //cout << r00.numerator() << endl;
    //cout << "mianownik dla 0,0: " << r00.denominator() << endl;
    //cout << "GCD dla 0: " << r0.gcd() << endl;
    //cout << "GCD dla 0,0: " << r00.gcd() << endl;
    //cout << "GCD dla 0,7: " << r07.gcd() << endl;
    //cout << "GCD dla r66(27,-81): " << r66.gcd() << endl;
    cout << "Licznik i mianownik r66(27,-81): " << r66.numerator() << ", " << r66.denominator() << endl;

    // to jest niby statyczne więc powinno pójść
    Rational rN = Rational::normalized(27,-81);

    // TU zrobić
    Rational rN2 = Rational::normalize(r66);
    cout << "Licznik i mianownik r66(27,-81): " << r66.numerator() << ", " << r66.denominator() << endl;
    cout << "Licznik i mianownik rN = normalized(27,-81): " << rN.numerator() << ", " << rN.denominator() << endl;
    cout << "Licznik i mianownik rN2 = normalized(r66): " << rN2.numerator() << ", " << rN2.denominator() << endl;

    Rational product = r66*rN;
    cout << "Licznik i mianownik product = r66*rN: " << product.numerator() << ", " << product.denominator() << endl;

    Rational rp1(2,56);
    Rational rp2(43,-18);
    Rational rp3 = rp1 * rp2;
    cout << "Licznik i mianownik rp3 = rp1 * rp2: " << rp3.numerator() << ", " << rp3.denominator() << endl;

    Rational rd1(34,2);
    Rational rd2(3,-12);
    Rational rd3 = rd1 / rd2;
    cout << "Licznik i mianownik rd3 = rd1 / rd2: " << rd3.numerator() << ", " << rd3.denominator() << endl;

    Rational rs1(1,2);
    Rational rs2(2,-4);
    Rational rs3 = rs1 + rs2;
    cout << "Licznik i mianownik rs3 = rs1 + rs2: " << rs3.numerator() << ", " << rs3.denominator() << endl;

    Rational rm1(5,2);
    Rational rm2(7,3);
    Rational rm3 = rm1 - rm2;
    cout << "Licznik i mianownik rm3 = rm1 - rm2: " << rm3.numerator() << ", " << rm3.denominator() << endl;

    Rational rs(10,4);
    Rational rss = +rs;
    cout << "Licznik i mianownik rss = +rs: " << rss.numerator() << ", " << rss.denominator() << endl;

    Rational rm(-10,4);
    Rational rmm = -rm;
    cout << "Licznik i mianownik rmm = -rm: " << rmm.numerator() << ", " << rmm.denominator() << endl;

    Rational re1(20,-8);
    Rational re2(-10,4);
    bool e = re1 == re2;
    cout << "re1 == re2 = " << e << endl;

    Rational rge1(20,-1);
    Rational rge2(-40,2);
    bool ge = rge1 >= rge2;
    cout << "re1 >= re2 = " << ge << endl;

    Rational rle1(20,1);
    Rational rle2(-40,2);
    bool le = rle1 <= rle2;
    cout << "rle1 <= rle2 = " << le << endl;

    Rational rg1(19,-1);
    Rational rg2(-40,2);
    bool g = rg1 > rg2;
    cout << "rg1 > rg2 = " << g << endl;

    Rational rl1(20,1);
    Rational rl2(39,2);
    bool l = rl1 < rl2;
    cout << "rl1 < rl2 = " << l << endl;

    cout << r56 << endl;
    cout << r66 << endl;

    Rational r100(0);
    cin >> r100;
    cout << "r100 = " << r100 << endl;




    // Dlaczego raz '.', a innym razem ->?


    return 0;
}
