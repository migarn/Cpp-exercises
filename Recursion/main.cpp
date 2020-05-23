#include <iostream>
#include <vector>
#include <chrono>

int sum5(int elems[], size_t size)
{
    if (size == 0) { return 0; }
    else { return sum5(elems, size - 1) + elems[size - 1]; }
}

int main()
{
    using std::cout;
    using std::endl;
    using namespace std::chrono;

    int a1[] = {0,1,2,3,4};
    constexpr size_t a1Size = sizeof(a1) / sizeof(a1[0]);

    cout << "sum5(10) = " << sum5(a1, a1Size) << endl;
    return 0;
}
