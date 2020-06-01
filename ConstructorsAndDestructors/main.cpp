#include <iostream>
#include <cmath>
#include <memory>

using std::cout;
using std::endl;

class Vector2D
{
public:
    Vector2D(double x = 0, double y = 0) : x_{x}, y_{y} {
        cout << "...constructor working...";
    }

    Vector2D(const Vector2D &other) {
        cout << "...copy constructor working...";
        this->x_ = other.x_;
        this->y_ = other.y_;
    }

    Vector2D& operator(const Vector2D &other) {
        cout << "...copy operator= working...";
        if (&other != this) {
            this->x_ = other.x_;
            this->y_ = other.y_;
        }

        return *this;
    }

    ~Vector2D() { cout << "...destructor working..." << endl; }

    double length() const { return sqrt(x_ * x_ + y_ * y_); }

private:
    double x_;
    double y_;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
