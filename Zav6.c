#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int mas[100];
	int x, a, b, y;
	
	    printf("Vvedite a: ");
	    scanf("%d", &a);
	    printf("Vvedite b: ");
	    scanf("%d", &b);
	
	    for(x = 0, y = a; y <= b; x++, y++) {
	    mas[x] = y;
	    printf("\nmas[%d] = %d", x, mas[x]);
	
    }	
	
    system("pause");
	
    return 0;
}
 
