#include <stdio.h>
int main()
{
    int p1, u1, p2, u2;
    float pp1, pp2, A;

    scanf("%d %d %.2f", &p1, &u1, &pp1);
    scanf("%d %d %.2f", &p1, &u2, &pp2);

    A = (u1*pp1)+(u2*pp2);

    printf("VALOR A PAGAR: R$ %.2f\n", A);

    return 0;
}
