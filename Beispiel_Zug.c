

//    Zug A fährt Zug B entgegen.
//    Zug B fährt doppelt so schnell wie Zug A
//    Beide fahren am selben Gleis
//    Das Gleis ist 50km lang
//    Wo treffen sie sich?



#include "stdio.h"

void main() {

	
		int x = 0;
		int y = 0;
		

		while(x+y < 50) {
			x = x + 1;
			y = y + 2;
			
	}
	
printf("Bei km: %d von Zug B aus\n" , y);
printf("Bei km: %d von Zug A aus\n", x);


	system("pause");
}