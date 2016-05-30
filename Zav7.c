#include <stdlib.h>
#include <stdio.h>

  int main ()
{
	  int x;
	  double mas[300];
  	double a;

	  for(x = 0, a = -10; a < 10; x++) {
		a = a + 0.1;
		mas[x] = a;
		printf("%.1lf\n", a);

	}	
	system("pause");
	return 0;
} 

