#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::ostream;
using std::istream;

class Vector2D
{
public:
    Vector2D(double x = 0, double y = 0) : x_{x}, y_{y} {}
    Vector2D(const Vector2D &other) : x_{other.x_}, y_{other.y_} {}
    ~Vector2D() { cout << "destructor of " << *this << endl; }

    Vector2D& operator=(const Vector2D &other) {
        if (&other != this) {
            this->x_ = other.x_;
            this->y_ = other.y_;
        }
        return *this;
    }

    double length() const { return sqrt(x_ * x_ + y_ * y_); }

private:
    double x_;
    double y_;

    friend Vector2D operator+(const Vector2D&, const Vector2D&);
    friend Vector2D operator-(const Vector2D&, const Vector2D&);
    friend double operator*(const Vector2D&, const Vector2D&);
    friend Vector2D operator*(const Vector2D&, double);
    friend Vector2D operator*(double, const Vector2D&);
    friend ostream& operator<<(ostream&, const Vector2D&);
    friend istream& operator>>(istream&,Vector2D&);
};

ostream &operator<<(ostream &os, const Vector2D &v)
{
    os << "[" << v.x_ << ", " << v.y_ << "]";
    return os;
}

istream& operator>>(istream& is, Vector2D& v)
{
    cout << "x = ";
    is >> v.x_;

    cout << "y = ";
    is >> v.y_;

    return is;
}

Vector2D operator+(const Vector2D &v1, const Vector2D &v2) {
    return Vector2D {v1.x_ +  v2.x_, v1.y_ + v2.y_};
}

Vector2D operator-(const Vector2D &v1, const Vector2D &v2) {
    return Vector2D {v1.x_ -  v2.x_, v1.y_ - v2.y_};
}

double operator*(const Vector2D &v1, const Vector2D &v2) {
    return v1.x_ * v2.x_ + v1.y_ * v2.y_;
}

Vector2D operator*(const Vector2D &v1, double d) {
    return Vector2D {v1.x_ * d, v1.y_ * d};
}

Vector2D operator*(double d, const Vector2D &v1) {
    return Vector2D {v1.x_ * d, v1.y_ * d};
}

int main()
{
    Vector2D v1{1,2};
    Vector2D *pV = new Vector2D (3,4);
    cout << "v1 = " << v1 << ", *pV = " << (*pV) << endl;
    cout << "|*pV| = " << pV->length() << endl;

    cout << "About to execute Vector2D v3{v1 + *pV}..." << endl;
    Vector2D v3{v1 + *pV};
    cout << "v3 = " << v3 << ", |v3| = " << v3.length() << endl;

    cout << "About to execute Vector2D v4 = v1 + *pV + v3;..." << endl;
    Vector2D v4 = v1 + v3 + *pV;
    cout << "v4 = " << v4 << endl;

    Vector2D v5;
    cout << "Specify v5 components:" << endl;
    cin >> v5;
    cout << "v5 = " << v5 << endl;

    cout << "About to execute Vector2D v6{v1 - v5}..." << endl;
    Vector2D v6{v1 - v5};
    cout << "v6 = " << v6 << ", |v6| = " << v6.length() << endl;

    cout << "About to execute double d = v5 * v6;..." << endl;
    double d = v5 * v6;
    cout << "d = " << d << endl;

    cout << "About to execute Vector2D v7{v6 * d}..." << endl;
    Vector2D v7{v6 * d};
    cout << "v7 = " << v7 << ", |v7| = " << v7.length() << endl;

    cout << "About to execute Vector2D v8{d * v6}..." << endl;
    Vector2D v8{d * v6};
    cout << "v8 = " << v8 << ", |v8| = " << v8.length() << endl;

    delete pV;
    return 0;
}
