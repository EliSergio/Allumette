#include <stdio.h>
#include <stdlib.h>
#include "cailloux.h"

int main(int argc , char **argv){

	int nombre_allumette = 16;
	int joueur = 0 , machine = 0;
	char rep;

	again:

	if(nombre_allumette == 0){
		nombre_allumette = 16;
		system("cls");
	}

		affichage(nombre_allumette);
		
	do{
		joueur = humain();
		nombre_allumette = nombre_allumette - joueur;

		affichage(nombre_allumette);

		if(nombre_allumette == 0){
			printf("vous avez perdu\n");
			rep = continuer();

			if(rep == 'o' || rep == 'O'){
				goto again;
			}
		}
		else{
			printf("l'ordi reflechit!!!\n");
			sleep(1);
			
			machine = ordi(nombre_allumette , joueur);
			nombre_allumette = nombre_allumette - machine;

			affichage(nombre_allumette);

			if(machine == 1){
				printf("l'ordi a pris %d allumette\n" , machine);
			}
			else if(machine == 2 || machine == 3){
				printf("l'ordi a pris %d allumettes\n" , machine);
			}
		}

		if(nombre_allumette != 0){
			if(nombre_allumette == 1){
				printf("il reste %d allumette\n", nombre_allumette);	
			}
			else if(nombre_allumette > 1){
				printf("il reste %d allumettes\n", nombre_allumette);
			}
		}

	}while(nombre_allumette != 0);

	return 0;
}