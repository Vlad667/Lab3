#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int x;
	double mas[100];
	double max, a, min;
	
	printf("\nVvedite Min = ");
	scanf("%lf", &min);
	
	printf("\nVvedite Max = ");
	scanf("%lf", &max);
	
	for(x = 0, a = min; a < max; x++) {
		a = a + 0.1;
		mas[x] = a;
		printf("%.1lf\n", a);
	}	
	system("pause");
	return 0;
}
 
