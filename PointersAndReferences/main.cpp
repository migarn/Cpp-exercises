#include <iostream>

void pointersDemo1()
{
    int x = 1;
    int *p1 = &x;
    int **pp1 = &p1;

    printf("&x = %p, x = %d\n", &x, x);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&pp1 = %p, pp1 = %p\n", &pp1, pp1);

    printf("*p1 = %d\n", *p1);
    printf("**pp1 = %d\n", **pp1);

    printf("About to execute *p1 = 2...\n");
    *p1 = 2;
    printf("x = %d\n", x);

    printf("About to execute **pp1 = 3...\n");
    **pp1 = 3;
    printf("x = %d\n", x);

    const int y = 2;
    const int *p2 = &y;
    printf("*p2 = %d\n", *p2);

    const int * const p3 = &x;
    //int *p2 = &y;
    printf("*p3 = %d\n", *p3);
    //p3 = &y;

    //constexpr int cexpr = 3;
    //int *p4 = &cexpr;
}

void referencesDemo()
{
    double x = 2.71;
    double &rx = x;
    //double &ry;
    printf("x = %f\n", x);
    printf("rx = %f\n", rx);

    double *px = &x;
    double *& rpx = px;
    printf("&x = %p = %p\n", &x, px);
    printf("rpx = %p\n", rpx);

    //double &* prx = &rx;
}

int main()
{
    pointersDemo1();
    referencesDemo();
    return 0;
}
