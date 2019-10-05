#include <stdio.h>
#include <stdlib.h>

int fatorial(int number);

int main(){

	int number = 0;

	printf("Digite um número: ");
	scanf("%d", &number);
	printf("Fatorial de :%d",fatorial(number));
	
	printf("\n\n");
	return 0;
}

int fatorial(int number) {
	
	if(number == 0 || number == 1) 
	{	
		return 1;
	}else {
		return number * fatorial(number - 1);
	}
}
   

