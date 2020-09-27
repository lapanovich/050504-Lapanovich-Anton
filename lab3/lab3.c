#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, i, sum1, sum2, k, k1, k2, mass[100];
	sum1 = sum2 = k = k1 = k2 = 0;
	do {
		printf_s("Введите количество натуральных чисел: ");
		scanf_s("%d", &n);
		system("cls");
	}
	while (n > 100); // против беск. цикла
	printf_s("Ваши числа:\n");
	for (i = 0; i < n; i++) {
		mass[i] = rand() % 21 - 10; // автозаполнение зн. эл. массива
		printf_s("%d ", mass[i]);
	}
	for(i = 0; i < n; i++) {
		if (mass[i] > 0) {
			k++;
			sum1 += mass[i]; // проверка положительных чисел, подсчёт суммы и количества
		}
		else if (mass[i] < 0) {
			sum2 += mass[i];
			k1++; // проверка отрицательных чисел, подсчёт суммы и количества
		}
		else k2++; // подсчёт нулей
	}
	printf_s("\n");
	printf_s("Сумма положительных чисел: %d\nСумма отрицательных чисел: %d\n", sum1, sum2);
	printf_s("Количество положительных чисел: %d\n Количество отрицательных чисел: %d\n Количество нулей: %d", k, k1, k2); 
	
	return 0;
}
