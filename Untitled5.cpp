#include <stdio.h>

double paliwo (double cena, double odleglosc, double spalanie)
    {
        double lacznie;
        lacznie = odleglosc * (cena * spalanie)/100;
        return lacznie;
    }
int main()
{
   
    double a,b,c, w;
    printf("podaj przejechany dystans: ");
    scanf("%lf",&a);
    printf("podaj cene paliwa za litr: ");
    scanf("%lf",&b);
    printf("podaj spalanie (1l/100km): ");
    scanf("%lf",&c);
    w = paliwo(a, b, c);
    printf("%lf zl",w);
    return 0;
}
