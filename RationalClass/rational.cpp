#include <iostream> // sprawdzic, czy trzeba powyższe

Rational::Rational(int numerator, int denominator = 1) : numer{numerator}, denom{denominator} {};
Rational::Rational(const Rational& copy) : numer{copy.numer}, denom{copy.denom} {};

Rational& Rational::operator=(const Rational& other) {
    if (&other != this) {
        this->numer = other.numer;
        this->denom = other.denom;
        this->gcdND = other.gcdND; // to do weryfikacji
    }
    return this;
}

Rational& Rational::operator=(int i) {
        this->numer = i;
        this->denom = 1;
        this->gcdND = 1; // to do weryfikacji
    }
    return this;
}

static Rational Rational::normalize(const Rational& other) {
    //TODO
}

static Rational Rational::normalized(int numerator, int denominator) {
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
