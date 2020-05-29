#include <iostream>

void castDemo1()
{
    int x = 1;
    int *p1 = &x;

    printf("&x = %p, x = %d\n", &x, x);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);

    printf("&x = %p, x = %d\n", (void*) &x, x);
    printf("&p1 = %p, p1 = %p\n", (void*) &p1, (void*) p1);

    printf("&x = %p, x = %d\n", static_cast<void*>(&x), x);
    printf("&p1 = %p, p1 = %p\n", static_cast<void*>(&p1), static_cast<void*>(p1));

    printf("&x = %p, x = %d\n", reinterpret_cast<void*>(&x), x);
    printf("&p1 = %p, p1 = %p\n", reinterpret_cast<void*>(&p1), reinterpret_cast<void*>(p1));

    const int y = 2;
    int *p2 = const_cast<int *>(&y);
    printf("y = %d, *p2 = %d\n", y, *p2);
}

int main()
{
    castDemo1();
    return 0;
}
