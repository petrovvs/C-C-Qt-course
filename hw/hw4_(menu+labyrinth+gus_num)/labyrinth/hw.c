// 2) сделать на основе предыдущей домашки тексовую игру "лабиринт": т.е. типичное меню
// 1. повернуть направо
// 2. повернуть налево
// 3 вернуться в предыдущую комнату
// достаточно сделать минимум 2 правильных перехода между комнатами и пользователь выигрывает игру. важно:
// * пользователь должен знать в какой из комнат он сейчас находится(пример, начальная, зеленая, со статуей и т.д.)
// * если переход между комнатами нетривиален (например, можно пройти в одну сторону, обратно нельзя), пользователю нужно об этом обязательно сообщить
// * разрешается разнообразить ловушками, НПС и т.д. для прохождения или дополнительно
	
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //sleep

void left(){
	system("clear");
	printf("====================================\n");
	printf("Вы попали в пустое помещение без окон и дверей!\n");
	printf("====================================\n");
	printf("1 - назад\n");
	printf("====================================\n");

	int u = 0;
	scanf("%d", &u);

	switch(u) {
		case 1:
			system("clear");
			system("./output");	
		  break;
		default:
			system("clear");
			printf("====================================\n");
			printf("Сюда не пройти!\n");
			printf("====================================\n");
			getchar();
			left();		
		  break;
	}
}


void two_door(){
	system("clear");
	printf("====================================\n");
	printf("Вы вошли во вторую дверь!\n");
	printf("Она захлопнулась за Вами.\n");
	printf("Стены начали сдвигаться.\n");
	printf("Срочно введите пароль на обратной стороне двери.\n");
	printf("====================================\n");
	printf("53362 - вариант пароля\n");
	printf("34351 - вариант пароля\n");
	printf("82627 - вариант пароля\n");
	printf("====================================\n");

	int g = 0;
	scanf("%d", &g);
	switch(g) {
		case 53362:
			system("clear");
			printf("====================================\n");
			printf("Пароль не верный! Вас раздавило...\n");
			printf("====================================\n");
			printf("            GAME OVER\n");
			printf("====================================\n");
			sleep(2);
		  break;
		case 34351:
			system("clear");
			printf("====================================\n");
			printf("Пароль не верный! Вас раздавило...\n");
			printf("====================================\n");
			printf("            GAME OVER\n");
			printf("====================================\n");
			sleep(2);
		  break;
		case 82627:
			system("clear");
			printf("====================================\n");
			printf("Пароль верный!\n");
			printf("Стены остановились, открылся тайный ход.\n");
			printf("====================================\n");
			printf("            YOU WIN!!!\n");
			printf("====================================\n");
			sleep(2);
		  break;
		default:
			system("clear");
			printf("====================================\n");
			printf("Пароль не верный! Вас раздавило...\n");
			printf("====================================\n");
			printf("            GAME OVER\n");
			printf("====================================\n");
			getchar();
		  break;
	}

}


void hall(){
	system("clear");
	printf("====================================\n");
	printf("Вы в холле!\n");
	printf("====================================\n");
	printf("Перед Вами 3 двери, смерть ждёт Вас за двумя из них:\n");
	printf("====================================\n");
	printf("1 - зайти в первую дверь.\n");
	printf("2 - зайти во вторую дверь.\n");
	printf("3 - зайти в третью дверь.\n");
	printf("====================================\n");
	int w = 0;
	scanf("%d", &w);

	switch(w) {
		case 1:
			system("clear");
			printf("====================================\n");
			printf("Первая дверь закрыта.\n");
			printf("====================================\n");
			sleep(2);
			hall();
		  break;
		case 2:
			two_door();
		  break;
		case 3:
			system("clear");
			printf("====================================\n");
			printf("Вы открыли третью дверь и взорвалиcь.\n");
			printf("Она была заминирована.\n");
			printf("====================================\n");
			printf("            GAME OVER\n");
			printf("====================================\n");
			sleep(2);
		  break;
		default:
			system("clear");
			printf("====================================\n");
			printf("Мимо, это стена!\n");
			printf("====================================\n");
			getchar();
			hall();	
		  break;
	}
}


int main(){
	system("clear");
	int n = 0;
	printf("====================================\n");
	printf("Игра: 'Подземелье и драконы. v1.0'\n");
	printf("====================================\n");
	printf("Вам нужно пройти лабиринт.\n");
	printf("====================================\n");
	printf("1 - направо\n");
	printf("2 - налево\n");
	printf("====================================\n");
    scanf("%d", &n);
	switch(n) {
		case 1:			
			hall();
		  break;
		case 2:
			left();
		  break;
		default:
			system("clear");
			printf("====================================\n");
			printf("Сюда не пройти!\n");
			printf("====================================\n");
			getchar();
			main();			
		  break;
	}
}
