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
    //todo
}

Rational Rational::normalized(int numerator, int denominator) {
    //if (numerator >)
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

    int absNum = abs(numer);
    int absDen = abs(denom);
    int res;

    while (absDen != 0) {
        res = absNum % absDen;
        absNum = absDen;
        absDen = res;
    }

    this->gcdND = absNum;
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
