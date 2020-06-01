#include <iostream> // na końcu sprawdzic, czy trzeba powyższe
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
    return other.normalized(other.numerator(), other.denominator());
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
    int gcd = calculateGcd(numerator, denominator);

    if ((numerator >= 0 && denominator > 0) || (numerator < 0 && denominator < 0)) {
        Rational r(numerator / gcd, numerator / gcd);
        return r;
    } else {
        Rational r(abs(numerator) * (-1) / gcd, abs(denominator) / gcd);
        return r;
    }
}

Rational Rational::operator+(const Rational& other) const {
    //TODO
}

Rational Rational::operator-(const Rational& other) const {
    //TODO
}

Rational Rational::operator*(const Rational& other) const {
    //TODO
}

Rational Rational::operator/(const Rational& other) const {
    //TODO
}

Rational Rational::operator+() const {
    //TODO
}

Rational Rational::operator-() const {
    //TODO
}

bool Rational::operator==(const Rational& other) const {
    //TODO
}

bool Rational::operator>=(const Rational& other) const {
    //TODO
}

bool Rational::operator<=(const Rational& other) const {
    //TODO
}

bool Rational::operator>(const Rational& other) const {
    //TODO
}

bool Rational::operator<(const Rational& other) const {
    //TODO
}

void Rational::initialize(int numerator, int denominator) {
    this->numer = numerator;
    if (denominator == 0) {
        this->denom = 1/0; //Forcing program to crash
    } else {
        this->denom = denominator;
    }

    this->gcdND = calculateGcd(abs(numer), abs(denom));
}

std::ostream& operator<<(std::ostream &, const Rational &) {
    //TODO
}

std::istream& operator>>(std::istream &, Rational &) {
    //TODO
}

Rational operator+(const Rational& r, int i) {
    //TODO
}

Rational operator+(int i, const Rational& r) {
    //TODO
}

Rational operator-(const Rational& r, int i) {
    //TODO
}

Rational operator-(int i, const Rational& r) {
    //TODO
}

Rational operator*(const Rational& r, int i) {
    //TODO
}

Rational operator*(int i, const Rational& r) {
    //TODO
}

Rational operator/(const Rational& r, int i) {
    //TODO
}

Rational operator/(int i, const Rational& r) {
    //TODO
}
