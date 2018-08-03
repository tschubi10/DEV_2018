
#include "stdio.h"

void main() {
	
		// Eingabe von Zeichen
		char zeichen2 = 'a';
		char zeichen;

		while (1) {
			printf("\nBitte geben Sie ein Zeichen ein:");
			scanf_s("%c", &zeichen);
			printf("\n%c", zeichen);
			
			if (zeichen == zeichen2) {
				printf("\nZeichen %c und %c stimmen ueberein", zeichen, zeichen2);

			}
			else {
				printf("\nZeichen %c und  %c stimmen nicht ueberein", zeichen, zeichen2);
			}
	

		}
	
		
system("pause");

//	printf("Bitte geben Sie einen Wert ein:");
//	scanf_s("%d", &wert);    //Eingabe von Werten von User


}