#include <iostream>
#include "rational.h"

Rational::Rational(int numerator, int denominator) {
    initialize(numerator, denominator);
}

Rational::Rational(const Rational& copy) {
    initialize(copy.numer, copy.denom);
}

Rational& Rational::operator=(const Rational& other) {
    if (&other != this) {
        initialize(other.numer, other.denom);
    }
    return *this;
}

Rational& Rational::operator=(int i) {
    initialize(i, 1);
    return *this;
}

Rational Rational::normalize(const Rational& other) {
    return normalized(other.numer, other.denom);
}

int calculateGcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

Rational Rational::normalized(int numerator, int denominator) {
    int absNum = abs(numerator);
    int absDen = abs(denominator);
    int gcd = calculateGcd(absNum, absDen);

    if ((numerator >= 0 && denominator > 0) || (numerator < 0 && denominator < 0)) {
        Rational r(absNum / gcd, absDen / gcd);
        return r;
    } else {
        Rational r(absNum * (-1) / gcd, absDen / gcd);
        return r;
    }
}

Rational Rational::operator+(const Rational& other) const {
    return normalized(this->numer * other.denom + other.numer * this->denom, this->denom * other.denom);
}

Rational Rational::operator-(const Rational& other) const {
    return normalized(this->numer * other.denom - other.numer * this->denom, this->denom * other.denom);
}

Rational Rational::operator*(const Rational& other) const {
    return normalized(this->numer * other.numer, this->denom * other.denom);
}

Rational Rational::operator/(const Rational& other) const {
    return normalized(this->numer * other.denom, this->denom * other.numer);
}

Rational Rational::operator+() const {
    return normalize(*this);
}

Rational Rational::operator-() const {
    return normalized(this->numer * (-1), this->denom);
}

bool Rational::operator==(const Rational& other) const {
    Rational r1 = normalize(*this);
    Rational r2 = normalize(other);

    return (r1.numer == r2.numer && r1.denom == r2.denom);
}

bool Rational::operator>=(const Rational& other) const {
    Rational r1(this->numer * other.denom, this->denom * other.denom);
    Rational r2(other.numer * this->denom, this->denom * other.denom);

    return r1.denom > 0 ? r1.numer >= r2.numer : r2.numer >= r1.numer;
}

bool Rational::operator<=(const Rational& other) const {
    Rational r1(this->numer * other.denom, this->denom * other.denom);
    Rational r2(other.numer * this->denom, this->denom * other.denom);

    return r1.denom > 0 ? r1.numer <= r2.numer : r2.numer <= r1.numer;
}

bool Rational::operator>(const Rational& other) const {
    Rational r1(this->numer * other.denom, this->denom * other.denom);
    Rational r2(other.numer * this->denom, this->denom * other.denom);

    return r1.denom > 0 ? r1.numer > r2.numer : r2.numer > r1.numer;
}

bool Rational::operator<(const Rational& other) const {
    Rational r1(this->numer * other.denom, this->denom * other.denom);
    Rational r2(other.numer * this->denom, this->denom * other.denom);

    return r1.denom > 0 ? r1.numer < r2.numer : r2.numer < r1.numer;
}

void Rational::initialize(int numerator, int denominator) {
    this->numer = numerator;
    if (denominator == 0) {
        this->denom = 1/0; //Forcing program to crash
    } else {
        this->denom = denominator;
    }

    this->gcdND = calculateGcd(abs(numer), abs(denom));
    //'gcdND' could be deleted as normalization is carried out by static function, where Rational is an attribute.
}

std::ostream& operator<<(std::ostream &os, const Rational& r) {
    Rational zeroR(0);

    if (r < zeroR) {
        os << "(-" << abs(r.numer) << "/" << abs(r.denom) << ")";
    } else {
        os << abs(r.numer) << "/" << abs(r.denom);
    }
    return os;
}

std::istream& operator>>(std::istream &is, Rational& r) {
    using std::cout;

    cout << "numerator = ";
    is >> r.numer;
    cout << "denominator = ";
    is >> r.denom;
    return is;
}

Rational operator+(const Rational& r, int i) {
    Rational r2(i);
    return r + r2;
}

Rational operator+(int i, const Rational& r) {
    Rational r2(i);
    return r2 + r;
}

Rational operator-(const Rational& r, int i) {
    Rational r2(i);
    return r - r2;
}

Rational operator-(int i, const Rational& r) {
    Rational r2(i);
    return r2 - r;
}

Rational operator*(const Rational& r, int i) {
    Rational r2(i);
    return r * r2;
}

Rational operator*(int i, const Rational& r) {
    Rational r2(i);
    return r2 * r;
}

Rational operator/(const Rational& r, int i) {
    Rational r2(i);
    return r / r2;
}

Rational operator/(int i, const Rational& r) {
    Rational r2(i);
    return r2 / r;
}
