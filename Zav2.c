#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	double mas[300], n;
	int i, size;
	
	    printf("Vvedite razmer massiva: ");
	    scanf("%d", &size);
	
	printf("\nVvedite n = ");
	scanf("%lf", &n);
	
	srand(time(0));
	
 for(i = 0; i < size; i++) {
		mas[i] = ((float)rand() / RAND_MAX) * n;
		printf("\n\tmas[%d] = %lf", i, mas[i]);

	}
	
	system("pause");
	return 0;
}

