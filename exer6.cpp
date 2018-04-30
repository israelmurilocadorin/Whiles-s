#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float gramas = 0;
	int massaInicial = 0;
	int segundos = 0;
	int hrs;
	int min;
	int seg;
	
	
	printf("Digite uma massa em gramas: ");
	scanf("%f", &gramas);
	
	massaInicial = gramas;
	
	while(gramas > 1)
	{
		gramas = gramas/2;
		segundos = segundos + 50;
	}
 
	
	hrs = segundos / 3600;
	min = (segundos - (hrs * 3600)) / 60;
	seg = (segundos - (hrs * 3600) - (min * 60));
	
	printf("\n %dh : %dm : %ds \n\n", hrs, min, seg);
	printf("\n %d gramas (inicial)\n %2.2f gramas (final)", massaInicial, gramas);

	printf("\n\n");
	system("pause");
	return 0;
}
