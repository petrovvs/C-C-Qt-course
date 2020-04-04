#include <stdio.h>
#include <stdlib.h>
#define PREF "file"
#define SUFF ".txt"

// Реализовать функцию, создающую 10 текстовых файлов и заполняющую каждый из них по 1000 случайных цифр

void file_gen(){
  	char buf[BUFSIZ];
 	FILE *fp;

	for (int i = 1; i <= 10; i++){	
		sprintf(buf, "%s%d%s", PREF, i, SUFF);

		if((fp = fopen(buf, "w")) == NULL){
		    printf("Не удалось открыть файл");
		}

		for (int i = 0; i < 1000; i++){
		  	fprintf(fp, "%d\n", rand());
		}
		fclose(fp);
	}
}

int main (){
	file_gen();
}