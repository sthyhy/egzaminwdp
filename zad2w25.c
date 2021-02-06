#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int tablica[10],i , liczba, h, x=0;
    for(i =0; i < 10; i++)
        {
            printf("podaj %d liczbe: ", i+1);
            scanf("%d",&liczba);
			tablica[i] = liczba;
        }
    
	for(h =0; h < 10; h++)
        {
           if(tablica[h] % 2 == 0)
		    {
			printf("liczba pod indeksem %d jest podzielna przez 2 i ma wartosc: %d \n", h, tablica[h]);
			x=1;
			}
        }

    if(x==0)
    {
	printf("nie ma liczb podzielnych przez 0\n");    
	}


	return 0;
}

