#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int tab[10], tabn[10], i , liczba, h,x,z;
    for(i =0; i < 10; i++)
        {
            printf("podaj %d liczbe: ", i+1);
            scanf("%d",&liczba);
			tab[i] = liczba;
        }

    for(h =0; h < 8; h++)
        {
          tabn[h]=tab[h+2];
          printf("tab[%d] w nowej tabeli rowny jest %d \n",h ,tabn[h]);
        }
        tabn[9]=tab[1];
        tabn[8]=tab[0];
        printf("tab[8] w nowej tabeli rowny jest %d\n",tabn[8]);
        printf("tab[9] w nowej tabeli rowny jest %d\n",tabn[9]);
    return 0;
}

