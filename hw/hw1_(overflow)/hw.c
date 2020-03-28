#include <stdio.h>

// Переполнение  CHAR
int main (){

	char a = 126;

	printf ("\n\nПереполнение  CHAR:\n");
	printf ("================\n");
	printf ("'A' before : %d\n", a);
	printf ("smb: %c\n", a);

	a+=2;

	printf ("================\n");
	printf ("'A' after: %d\n", a);
   	printf ("smb: %c\n", a);
   	printf ("================\n\n");

// Переполнение  DOUBLE  (чётападазрительна, не переполняется)


   	double b = 1E+37; 

	printf ("Переполнение  DOUBLE:\n");
	printf ("================\n");
	printf("before: %.0lf\n", b); 

	b*=2;

	printf ("\n================\n");
	printf("after_: %.0lf\n", b);
	printf ("================\n");
}