#include <iostream>
#include "add.h"
using namespace std;

int main()
{
    extern int g_int;
    std::cout << "g_int = " << g_int << std::endl;
    return 0;
}
