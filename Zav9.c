#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int x;
	int mas[100];
	int n, a;
	
	printf("\nVvedite n = ");
	scanf("%d", &n);
	
	for(x = 0, a = 1; a < n; x++) {
		a = a + 2;
		mas[x] = a;
		printf("%.1ld\n", a);
	
    }	
	
    system("pause");
	return 0;
} 
 
