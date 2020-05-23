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

int main()
{
    using std::cout;
    using std::endl;
    using namespace std::chrono;

    int a1[] = {0,1,2,3,4};
    constexpr size_t a1Size = sizeof(a1) / sizeof(a1[0]);

    cout << "factR(20) = " << factR(20) << endl;
    cout << "sum5(10) = " << sum5(a1, a1Size) << endl;

    high_resolution_clock::time_point start, end;

    int n4Fib = 45;
    start = high_resolution_clock::now();
    fibR(n4Fib);
    end = high_resolution_clock::now();

    cout << "fibR(" << n4Fib << ") took "
        << duration_cast<duration<double>>(end - start).count()
        << " seconds.\n" << endl;

    return 0;
}
