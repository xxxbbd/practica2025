// xxx1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {

	//long long x = 123456789101112345;
	//std::cout << "initial x: " << x << '\n';
	//double y = x;
	//x = y;
	//std::cout << "cast x: " << x << '\n';
	
	//double x1 = 0.0;
	//double x2 = 1.0;
	//double dx = 0.1;
	//while (x1 <= x2) {
	//	std::cout << x1 << '\n';
	//	x1 += dx;
	//	if (x1 == 0.2) {
	//		std::cout << "warning: critical!" << '\n';
	//	}
	//	if (x1 == 0.3) {
	//		std::cout << "warning: critical!" << '\n';
	//	}
	//}


	return 0;


}
/*
! доп код: 
пример для -39:
0 0 1 0 0 1 1 1 - прямой код (39)
1 1 0 1 1 0 0 0 - обратный код
добавляем к обратному коду 1
1 1 0 1 1 0 0 1 - дополнительный код (получаем -39)

тип double:
первый бит - под знак 
то, что находится перед точкой - мантиса maintise
после точки - n нулей
устройство double: 
знак * maintise * 2^n
*/