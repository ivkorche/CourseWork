#include "Matrix.h"

int main()
{
	Matrix matrix1, matrix2, result;
	string name;
	bool running = true;
	int menu_number = 0;

	while (running)
	{
		system("cls");
		cout << "Place the files with the original matrices in the program folder." << endl
			 << "The first line of each file must contain two integers." << endl
			 << "The first number shows the number of rows in the matrix, the second shows the number of columns." << endl
			 << "From the next line in the file, the values of the matrix elements are written." << endl << endl
			 << "Select menu item:" << endl
			 << "1. Loading the first matrix" << endl
			 << "2. Loading the second matrix" << endl
			 << "3. Matrix addition" << endl
			 << "4. Subtracting matrices" << endl
			 << "5. Matrix multiplication" << endl
			 << "6. Exit the program" << endl
			 << "You entered: ";
		cin >> menu_number;
		cin.get();
		cout << endl;

		if (menu_number == 1)
		{
			cout << "Enter the name of the file that stores the first matrix." << endl
				 << "You entered: ";
			getline(cin, name);

			try
			{
				matrix1.readMatrix(name);
			}
			catch (const char* error)
			{
				cerr << error << endl;
			}
		}
		else if (menu_number == 2)
		{
			cout << "Enter the name of the file that stores the second matrix." << endl
				<< "You entered: ";
			getline(cin, name);

			try
			{
				matrix2.readMatrix(name);
			}
			catch (const char* error)
			{
				cerr << error << endl;
			}
		}
		else if (menu_number == 3)
		{
			cout << "Enter the name of the file to which the addition result will be written." << endl
				<< "You entered: ";
			getline(cin, name);

			try
			{
				result = matrix1 + matrix2;
				result.writeMatrix(name);
			}
			catch (const char* error)
			{
				cerr << error << endl;
			}
		}
		else if (menu_number == 4)
		{
			cout << "Enter the name of the file to which the subtraction result will be written." << endl
				<< "You entered: ";
			getline(cin, name);

			try
			{
				result = matrix1 - matrix2;
				result.writeMatrix(name);
			}
			catch (const char* error)
			{
				cerr << error << endl;
			}
		}
		else if (menu_number == 5)
		{
			cout << "Enter the name of the file to which the multiplication result will be written." << endl
				<< "You entered: ";
			getline(cin, name);

			try
			{
				result = matrix1 * matrix2;
				result.writeMatrix(name);
			}
			catch (const char* error)
			{
				cerr << error << endl;
			}
		}
		else if (menu_number == 6)
		{
			cout << "Completion of work." << endl;
			running = false;
		}
		else
		{
			cout << "Invalid number entered." << endl;
		}
		cout << "Press any button to continue." << endl;
		cin.get();
	}

	return 0;
}