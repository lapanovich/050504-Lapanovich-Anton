#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {

	setlocale(LC_ALL, "Russian") ;
	unsigned int n, i, j, *arr ;
	
	do {
		printf_s("  Введите количество чисел: ") ;
		scanf_s("%d", &n) ;
	} 
	while (n < 2) ;    // проверка допустимого значения числа
	arr = (int*)calloc(n, sizeof(int));

	for (i = 0; i < n; i++) {
		arr[i] = arr[i] + i ;    // заполнение массивов

		if (i % 10 == 0) printf_s("\n") ;    // каждый 10-ый эл. массива переход на новую строку
		printf_s("%4d", arr[i]) ;    // вывод значения эл. массива
	} 
	arr[1] = 0 ;    // замена 1 на 0, т.к не является простым числом
	printf_s("\n\n  Меньшие n-простые числа:\n") ;

	for (i = 0; i < n; i++) {

		if (arr[i] == 0) continue ;

		for (j = 0; j < n; j++) {

			if (arr[j] == 0) continue ;

			else if (j <= i) continue ;

			else if (arr[j] % arr[i] == 0) arr[j] = 0 ;    // отбор чисел согласно Решето Эратосфена, заполнение нулями
		}
	}
	
	for (i = 0; i < n; i++) {

		if (i % 10 == 0) printf_s("\n") ;    // каждый 10-ый эл. массива переход на новую строку
		printf_s("%4d", arr[i]) ;    // вывод значения эл. массива
	}

	return 0 ;
}
