#include "stdio.h"

void main() {

	int wert = 8;

	
	printf("%10d * 2\n", wert);
	wert = wert * 2;
	printf("%10d * 3\n", wert);
	wert = wert * 3;
	printf("%10d * 4\n", wert);
	wert = wert * 4;
	printf("%10d * 5\n", wert);
	wert = wert * 5;
	printf("%10d * 6\n", wert);
	wert = wert * 6;
	printf("%10d * 7\n", wert);
	wert = wert * 7;
	printf("%10d * 8\n", wert);
	wert = wert * 8;
	printf("%10d * 9\n", wert);
	wert = wert * 9;

	printf("-----------------\n");

	printf("%10d : 2\n", wert);
	wert = wert /2;
	printf("%10d : 3\n", wert);
	wert = wert / 3;
	printf("%10d : 4\n", wert);
	wert = wert / 4;
	printf("%10d : 5\n", wert);
	wert = wert / 5;
	printf("%10d : 6\n", wert);
	wert = wert / 6;
	printf("%10d : 7\n", wert);
	wert = wert / 7;
	printf("%10d : 8\n", wert);
	wert = wert / 8;
	printf("%10d : 9\n", wert);
	wert = wert / 9;
	printf("%10d\n", wert);

	system("pause");
}