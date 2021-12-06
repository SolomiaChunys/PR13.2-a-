#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <conio.h>

#define Z 10

#define SQR(x) (x * x * x)
#define ABS(x) ((x) < 0) ? ((x) * (-1)) : (x)

#define MAX(y, z) ((y) > (z)) ? (y) : (z)
#define MIN(y, z) ((y) < (z)) ? (y) : (z)

#define PRINTI(x) puts("control output"); \
   printf(#x"=%d\n", x)
#define SUM (x, y) (x + y) * (x + y)
int main()
{
    int x, y, w,
        x_sqr,
        module1, module2;

    char ch;

    do
    {
#if ( Z>10)
        puts("calculate w: ");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        x_sqr = SQR(x);
        PRINTI(x_sqr);
        sum2 = SUM(x, y);
        PRINTI(sum2);
        max = MAX(x_sqr, sum2);
        PRINTI(max);
        w = SQR(max);
        PRINTI(w);
#else
        {
            puts("calculate w: ");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
            module1 = ABS((x - Z));
            PRINTI(module1);
            module2 = ABS((x + Z));
            PRINTI(module2);
            w = MIN(module1, module2);
            PRINTI(w);
        }
#endif
        puts("Repeat?  y /n ");
        std::cin >> ch;
    } while (ch == 'y');
}
