#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int x;
	int y = 1;
	int div = 0;
	setlocale(LC_ALL,"");
	
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	
	while(y <= x)
	{
		if(x % y == 0){
			div++;
		}
		y++;
	}
	
	printf("\n\n %d Divisoes", div);
	
	if(div == 2){
		printf("\n\n [%d] � primo!", x);
	}
	else{
		printf("\n\n [%d] N�o � primo!", x);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
