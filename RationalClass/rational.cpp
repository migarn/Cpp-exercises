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
