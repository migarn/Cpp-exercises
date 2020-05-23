#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    char cStyleStr1[] = "Salut?";
    cout << "sizeof(cStyleStr1) = " << sizeof(cStyleStr1) << endl;

    for (int i = 0; i < sizeof(cStyleStr1); i++)
    {
        cout << "i = " << i << ", value = " << cStyleStr1[i] << endl;
    }

    cStyleStr1[5] = '!';
    cout << "cStyleStr1 = " << cStyleStr1 << endl;

    const char* cStyleStr2 = "Salut!";
    cout << "sizeof(cStyleStr2) = " << sizeof(cStyleStr2) << endl;
    cout << "cStyleStr2 = " << cStyleStr2 << endl;

    char cStyleStr3[7] = {'S', 'a', 'l', 'u', 't', '!', '\0'};
    char cStyleStr4[] = {'S', 'a', 'l', 'u', 't', '!'};
    cout << "cStyleStr3 = " << cStyleStr3
        << " and its size = " << sizeof(cStyleStr3) << endl;
    cout << "cStyleStr4 = " << cStyleStr4
        << " and its size = " << sizeof(cStyleStr4) << endl;

        for (int i = 0; i < sizeof(cStyleStr4); i++)
    {
        cout << "i = " << i << ", value = " << cStyleStr4[i] << endl;
    }

    string myName("Luka");
    string s1 = "bon";
    s1 += s1;
    cout << "s1 = " << s1 << " and its length = " << s1.length() << endl;

    int a1[3];
    a1[0] = 1;
    a1[1] = 2;
    a1[2] = 3;

    int a2[] = {1, 2, 3};

    vector<int> v1{1, 2, 3};
    v1.emplace_back(4);
    cout << "v1[3] = " << v1[3] << ", v1.length() = " << v1.size() << endl;
    v1.push_back(5);
    cout << "v1[4] = " << v1[4] << ", v1.length() = " << v1.size() << endl;
    v1.pop_back();
    cout << "v1[3] = " << v1[3] << ", v1.length() = " << v1.size() << endl;

    return 0;
}
