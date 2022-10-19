#include<stdio.h>
#include<cs50.h>
intmain(void)
{
	//Pega o valor de n com o usuário
	int n;
	do
	{
		n = get_int("Largura: ");
	}
	while(n<1);
	
	//Imprima pontos de interrogação
	for(int i=0; i<3; i++)
	{
		printf("?");
	}
	printf("\n");
}
