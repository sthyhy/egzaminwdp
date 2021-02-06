#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,delta;
printf("podaj wspolczynnik a: ");
scanf("%f",&a);
printf("podaj wspolczynnik b: ");
scanf("%f",&b);
c=4;
b=2*b;
delta =(b*b)-(4*a*c);
if
        (a==0)
        {
        printf("to nie rownanie kwadratowe");
        }
else
        {

        if
                (delta>0)
                {
                printf("pierwsze rozwiazanie, x1= %2f\n",(-b-sqrt(delta))/(2*a));
                printf("drugie rozwiazanie, x2: %2f\n",(-b+sqrt(delta))/(2*a));
                }
        else
        {

                if
                        (delta == 0)
                        {
                        printf("jedno rozwiaznie, x1= %2f\n",-b/(2*a));
                        }
                else
                        {
                        if
                        (delta < 0)
                        {
                        printf("brak rozwiazan");
                        }
                }
        }
}

return 0;
}
