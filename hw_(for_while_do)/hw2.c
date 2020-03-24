#include<stdio.h>

void main(){

printf("===============================================\n");
// Сделать цикл в цикле в цикле. For в while в do-while.

	for (int i = 1; i <=2; i++){
		printf("for iter %d\n", i);
		int w=1;
		while(w<=2){
			printf("	while iter %d\n", w);
			w++;
			int wd=1;
			do {
  				printf("		do-while iter %d\n", wd);
  				wd++;
			} while (wd<=2);
		}
	}
printf("===============================================\n");
// Использовать ветвление switch-case. В switch передавать цифру, на выходе получить первую букву цифры.

switch (2) {
	case 1:
		printf("O\n");
	  break;
	case 2:
		printf("T\n");
	  break;
	case 3:
		printf("T\n");
	  break;
	case 4:
		printf("F\n");
	  break;
	case 5:
		printf("F\n");
	  break;
	default:
	 	printf("Ololo\n");
	  break;
	}
printf("===============================================\n");
}