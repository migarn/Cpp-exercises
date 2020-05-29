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

int sumArr(int (*p)[5])
{
   int sum = 0;
   for (int i = 0; i < 5; i++) {
      sum += (*p)[i]; // or sum += *((*p) + i);
   }
   return sum;
}

void pointersDemo2()
{
   int a[] = {1, 2, 3, 4, 5};
   //int b[] = {1, 2, 3, 4, 5, 6};
   int *p1 = a;

   printf("&a = %p, a = %p, &a[0] = %p\n",&a, a, &a[0]);
   printf("a[0] = %d, *p1 = %d\n", a[0], *p1);

   //int (*p2)[] = &a; // !!!
   //int (*p2)[5] = &b; // !!!
   int (*p2)[5] = &a;
   printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d, (*p2)[2] = %d\n",
           &p2, p2, *p2, **p2, (*p2)[2]);

   printf("sumArr(a) = %d\n", sumArr(&a));
   //printf("sumArr(a) = %d\n", sumArr(&b)); // !!!

   constexpr int asize = sizeof (a) / sizeof (int);
   // Print all elements of "a"
   for (int i = 0; i < asize; ++i) {
      printf("a[%d] = %d\n", i, a[i]);
   }

   // The same but with the use of different notation
   for (int i = 0; i < asize; ++i) {
      printf("*(a + %d) = %d\n", i, *(a + i)); // a[i] = *(a + i)
   }

   // The same but this time with the use of a pointer
   int *p3 = a;
   for (int i = 0; i < asize; ++i) {//or for (int i = 0; i < asize; ++i, p3++)
      printf("*p3 = %d\n", *p3);
      p3++;
   }
}

int main()
{
    pointersDemo1();
    referencesDemo();
    pointersDemo2();
    return 0;
}
