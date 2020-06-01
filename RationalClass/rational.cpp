#include <iostream>
// sprawdzic, czy trzeba powyższe

Rational::Rational(int numerator, int denominator = 1) : numer_{numerator}, denom_{denominator} {};
Rational::Rational(const Rational& copy) : numer_{copy.numer_}, denom_{copy.denom_} {};

