#include<stdio.h>
#include<stdlib.h>

	int main ()
	{
	float a,b,c;
	printf("podaj bok a: ");
	scanf("%f",&a);
	printf("podaj bok b: ");
	scanf("%f",&b);
	printf("podaj bok c: ");
	scanf("%f",&c);
	if (a+b >c && a+c >b && c+b >a)
	{
		printf("1");
	}
	else 
		printf("0");
	
	}
