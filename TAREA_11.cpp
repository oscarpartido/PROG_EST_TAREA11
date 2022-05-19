/* autor:Oscar Vivaldi Partido Ramirez  realizado: 21/02/2022
programa que calcula la suma de los primeros 50 numeros enteros 
*/
#include <stdio.h>

int main(){
	int i=1;
	float numero, suma;
	while (i<=50){
		printf("introduce el numero %d: ", i);
		scanf("%f",&numero);
		suma=suma+numero;
		i++;
	}
	printf("La suma es %.2f",suma);
	return 0;
}

