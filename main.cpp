#include "Matrix.h"

int main()
{
	Matrix matrix1, matrix2, result;
	bool running = true;
	char menu_number = 0;

	while (running)
	{
		cout << "Поместите файлы с исходными матрицами в папку с программой." << endl
			 << "В первой строчке каждого файла должны стоять два целых числа." << endl
			 << "Первое из чисел показывает количество строк в матрице, второе - количество столбцов." << endl
			 << "Далее, в файл должны быть записаны значения элементов матрицы в нужном количестве." << endl << endl
			 << "Введите пункт меню:" << endl
			 << "1. Загрузка первой матрицы" << endl
			 << "2. Загрузка второй матрицы" << endl
			 << "3. Сложение матриц" << endl
			 << "4. Вычитание матриц" << endl
			 << "5. Умножение матриц" << endl
			 << "6. Вывод результата в файл" << endl
			 << "7. Выход из программы" << endl
			 << "Вы ввели: ";
		cin >> menu_number;

		if (menu_number == '1')
		{

		}
		else if (menu_number == '2')
		{

		}
		else if (menu_number == '3')
		{

		}
		else if (menu_number == '4')
		{

		}
		else if (menu_number == '5')
		{

		}
		else if (menu_number == '6')
		{

		}
		else if (menu_number == '7')
		{
			cout << "Завершение работы." << endl;
			running = false;
		}
		else
		{
			cout << "Введено неправильное число." << endl;
		}
		system("pause");
		
	}



	system("pause");
	return 0;
}