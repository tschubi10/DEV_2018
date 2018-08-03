#include "stdio.h"

int multiplikation(int);   //Funktion angeben
void division(int);

void main() {

	int wert;

	printf("Bitte geben Sie einen Wert ein:");
	scanf_s("%d", &wert);    //Eingabe von Werten von User  %d für zahl %c für zeichen

	wert = multiplikation(wert);
	division(wert);
	
	system("pause");
}
int multiplikation(int wert) {       //Funktion erstellen

	int count = 2;
	printf("%10d * %d\n", wert, count);


	while (count <= 9) {
		wert = wert * count;
		count++;

		if (count == 10) {
			printf("%10d : 2\n", wert);
		}
		else {
			printf("%10d * %d\n", wert, count);
		}
	}

	return wert;

}

void division(int wert) {


	for (int count = 2; count <= 9; count++) {
		wert = wert / count;


		if (count == 9) {
			printf("%10d\n", wert);
		}
		else {
			printf("%10d : %d\n", wert, count + 1);
		}

	}



}




