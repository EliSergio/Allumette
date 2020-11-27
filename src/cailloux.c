#include "cailloux.h"
#include <stdio.h>
#include <stdlib.h>


int humain(){
	int nb;
	
	printf("votre allumette : ");
	scanf("%d" , &nb);

	while(nb < 1 || nb > 3){
		printf("vous devez prendre 1 ou 2 ou 3 cailloux : ");
		scanf("%d" , &nb);
	}

	return nb;
}

/*-------------------------------------------------------------------------------------*/

int ordi(int nombre_allumette , int humain){
	int num = 0;

	if(humain == 1 || humain == 2){
		switch(nombre_allumette){
			case 1:
				num = 1;
				break;

			case 2:
				num = 1;
				break;

			case 3:
				num = 2;
				break;

			case 4:
				num = 3;
				break;

			case 5:
				num = 2;
				break;

			case 6:
				num = 1;
				break;

			case 7:
				num = 2;
				break;

			case 8:
				num = 3;
				break;

			case 9:
				num = 2;
				break;

			case 10:
				num = 1;
				break;

			case 11:
				num = 2;
				break;

			case 12:
				num = 3;
				break;

			case 13:
				num = 2;
				break;

			case 14:
				num = 1;
				break;

			case 15:
				num = 2;
				break;
		
		}
	}

	else if(humain == 3){
		switch(nombre_allumette){
		case 1:
			num = 1;
			break;

		case 2:
			num = 1;
			break;

		case 3:
			num = 2;
			break;

		case 4:
			num = 3;
			break;

		case 5:
			num = 2;
			break;

		case 6:
			num = 1;
			break;

		case 7:
			num = 2;
			break;

		case 8:
			num = 3;
			break;

		case 9:
			num = 2;
			break;

		case 10:
			num = 1;
			break;

		case 11:
			num = 1;
			break;

		case 12:
			num = 2;
			break;

		case 13:
			num = 3;
			break;
		
		}
	}

	return num;
}

/*-------------------------------------------------------------------------------------*/

void affichage(int nombre_allumette){
	unsigned int i , j;

	system("cls");
	printf("vous pouvez prendre 1 ou 2 ou 3 allumette(s)\n");

	for(i = 0 ; i <= 5 ; i++){
		for(j = 1 ; j <= nombre_allumette ; j++){
			printf("|    ");
		}
		printf("\n");
	}
}

/*-------------------------------------------------------------------------------------*/

char continuer(){
	char reponse;

	printf("voulez-vous rejouer? o/n\n");
	getchar();
	scanf("%c" , &reponse);

return reponse;
}