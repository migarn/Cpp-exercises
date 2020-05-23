#include <iostream>
#include <vector>

using std::vector;

int sum1(int elems[], size_t size)
{
    int sum = 0;
    size_t i = 0;

    while (i < size) {
        sum += elems[i];
        ++i;
    }

    return sum;
}

int sum2(int elems[], size_t size)
{
    int sum = 0;

    if (size > 0) {
        size_t i = 0;
        do {
            sum += elems[i];
            ++i;
        } while (i < size);
    }

    return sum;
}

int sum3(int elems[], size_t size)
{
    int sum = 0;

    for (size_t i = 0; i < size; ++i) {
        sum += elems[i];
    }

    return sum;
}

int sum4(const vector<int> &elems)
{
    int sum = 0;

    for (auto e : elems) {
        sum += e;
    }

    return sum;
}

int sumEven(int elems[], size_t size)
{
    int sum = 0;

    for (size_t i = 0; i < size; ++i) {
        if (elems[i] % 2 == 1) {
            continue;
        }
        sum += elems[i];
    }

    return sum;
}

int indexOfM(int m, int elems[], size_t size)
{
    int idxOfM = -1;

    for (size_t i = 0; i < size; i++) {
        if (elems[i] == m) {
            idxOfM = static_cast<int>(i);
            break;
        }
    }

    return idxOfM;
}

int main()
{
    using namespace std;

    int a1[] = {0,1,2,3,4};
    vector<int> v1{0,1,2,3,4};
    constexpr size_t a1Size = sizeof(a1) / sizeof(a1[0]);

    vector<int> sums = {
        sum1(a1, a1Size),
        sum2(a1, a1Size),
        sum3(a1, a1Size),
        sum4(v1)
    };

    cout << "sums for a1/v1 = [0,1,2,3,4]: " << endl;
    for (size_t i = 0; i < sums.size(); ++i) {
        cout << "sum" << i + 1 << " = " << sums[i] << endl;
    }

    cout << "sumEven of a1 = [0,1,2,3,4] = " << sumEven(a1, a1Size) << endl;

    for (int i = 0; i < 6; ++i) {
        cout << "indexOfM(" << i << ", [0,1,2,3,4], 5) = "
        << indexOfM(i, a1, a1Size) << endl;
    }

    return 0;
}
