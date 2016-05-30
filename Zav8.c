#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int x;
	double mas[100];
	double n, a;
	
	printf("\nVvedite n = ");
	scanf("%lf", &n);
	
        for(a = 1; a < n; x++) {
		a = a + 0.1;
		mas[x] = a;
		printf("%.1lf\n", a);
	}	
	system("pause");
	return 0;
}
 
