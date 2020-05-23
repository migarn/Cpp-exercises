#include <iostream>
#include <vector>
#include <chrono>

int sum5(int elems[], size_t size)
{
    if (size == 0) { return 0; }
    else { return sum5(elems, size - 1) + elems[size - 1]; }
}

long factR(int n)
{
    if (n <= 1) { return 1; }
    else { return n * factR(n - 1); }
}

int fibR(int n)
{
    if (n <= 0) { return 0; }
    else if (n == 1) { return 1; }
    else { return fibR(n - 2) + fibR(n - 1); }
}

long factI(int n)
{
    if (n <= 1) { return 1; }
    else {
        long product = 1;
        int i = n;

        while (i > 1) {
            product *= i;
            i--;
        }
        return product;
    }
}

int fibI(int n)
{
    if (n <= 0) { return 0; }
    else {
        int fibSequence[n + 1];
        fibSequence[0] = 0;
        fibSequence[1] = 1;

        for (int i = 2; i < n + 1; i++) {
            fibSequence[i] = fibSequence[i - 1] + fibSequence[i - 2];
        }

        return fibSequence[n];
    }
}

int main()
{
    using std::cout;
    using std::endl;
    using namespace std::chrono;

    int a1[] = {0,1,2,3,4};
    constexpr size_t a1Size = sizeof(a1) / sizeof(a1[0]);

    cout << "factR(20) = " << factR(20) << endl;
    cout << "factI(20) = " << factI(20) << endl;
    cout << "sum5(10) = " << sum5(a1, a1Size) << endl;

    high_resolution_clock::time_point start, end;

    int n4Fib = 45;
    start = high_resolution_clock::now();
    int fibRResult = fibR(n4Fib);
    end = high_resolution_clock::now();
    int rDuration = duration_cast<duration<double>>(end - start).count();

    start = high_resolution_clock::now();
    int fibIResult = fibI(n4Fib);
    end = high_resolution_clock::now();
    int iDuration = duration_cast<duration<double>>(end - start).count();

    cout << "fibR(" << n4Fib << ") = " << fibRResult << endl;
    cout << "fibI(" << n4Fib << ") = " << fibIResult << endl;

    cout << "fibR(" << n4Fib << ") took "
        << rDuration << " seconds." << endl;
    cout << "fibI(" << n4Fib << ") took "
        << iDuration << " seconds." << endl;

    return 0;
}
