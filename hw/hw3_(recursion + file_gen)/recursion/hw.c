#include <stdio.h>

//Разработать программу, использующую рекурсивную функцию.
//Программа должна суммировать числа даты Вашего дня рождения.

int sumDrDigits(int num){
	if(num>1)
		num = num%10+sumDrDigits(num/10);
		return num;
}

int main (){
	int dr = 16021988;
	printf("%d\n", sumDrDigits(dr));
}