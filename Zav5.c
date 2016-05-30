#include <stdlib.h>
#include <stdio.h>

int main ()
{
	     int mas[300], x, y;
	
    	printf("Vvedite y = ");
	   scanf("%d", &y);
	
	for(x = 1; x <= y; x++) {
		mas[x] = x;
		printf("\nmas[%d] = %d", x, mas[x]);
	}	
	system("pause");
	return 0;
}

