#include "Matrix.h"

int main()
{
	Matrix matrix1, matrix2, result;
	bool running = true;
	char menu_number = 0;

	while (running)
	{
		cout << "��������� ����� � ��������� ��������� � ����� � ����������." << endl
			 << "� ������ ������� ������� ����� ������ ������ ��� ����� �����." << endl
			 << "������ �� ����� ���������� ���������� ����� � �������, ������ - ���������� ��������." << endl
			 << "�����, � ���� ������ ���� �������� �������� ��������� ������� � ������ ����������." << endl << endl
			 << "������� ����� ����:" << endl
			 << "1. �������� ������ �������" << endl
			 << "2. �������� ������ �������" << endl
			 << "3. �������� ������" << endl
			 << "4. ��������� ������" << endl
			 << "5. ��������� ������" << endl
			 << "6. ����� ���������� � ����" << endl
			 << "7. ����� �� ���������" << endl
			 << "�� �����: ";
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
			cout << "���������� ������." << endl;
			running = false;
		}
		else
		{
			cout << "������� ������������ �����." << endl;
		}
		system("pause");
		
	}



	system("pause");
	return 0;
}