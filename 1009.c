#include <stdio.h>
int main()
{
    char name[20];
    float s;
    double se, total;

    scanf("%c");
    scanf("%f %lf", &s, &se);
    total = s + (se*15)/100;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
