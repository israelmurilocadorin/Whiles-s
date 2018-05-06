#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int x, y, k;
	int z = 1;
	int parar = 1;
	setlocale(LC_ALL,"");
	
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("\n");
	
	y = x - 1;
	z = x * y;
	y = y - 1;
	
	while(parar <= y){
		z = z * y;
		y--;
		printf("\n%d", z);
	}
	
	printf("\n\nValor fatorial: %d", z);
	
	printf("\n\n");
	system("pause");
	return 0;
}
