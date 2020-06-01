#include <iostream> // na końcu sprawdzic, czy trzeba powyższe
#include "rational.h"

//Nieużywane konstruktory. Do wyrzucenia.
//Rational::Rational(int numerator, int denominator) : numer{numerator}, denom{denominator} {};
//Rational::Rational(const Rational& copy) : numer{copy.numer}, denom{copy.denom} {};

Rational::Rational(int numerator, int denominator) {
    initialize(numerator, denominator);
}

Rational::Rational(const Rational& copy) {
    initialize(copy.numer, copy.denom);
}

Rational& Rational::operator=(const Rational& other) {
    if (&other != this) {
        //this->numer = other.numer;
        //this->denom = other.denom;
        //this->gcdND = other.gcdND; // to do weryfikacji
        initialize(other.numer, other.denom);
    }
    return *this;
}

Rational& Rational::operator=(int i) {
    //this->numer = i;
    //this->denom = 1;
    //this->gcdND = 1; // to do weryfikacji
    initialize(i, 1);
    return *this;
}

Rational Rational::normalize(const Rational& other) {
    //TODO
}

Rational Rational::normalized(int numerator, int denominator) {
    //TODO
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
    this->denom = denominator;

    int absNum = abs(numerator);
    int absDen = abs(denominator);
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
