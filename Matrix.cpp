#include "Matrix.h"

Matrix::Matrix()
{
	matrix = nullptr;
	width = 0.0;
	height = 0.0;
}

Matrix::Matrix(const int h, const int w)
{
	matrix = nullptr;
	height = w;
	width = h;

	matrix = new double*[height];
	for (int i = 0; i < height; i++)
	{
		matrix[i] = new double[width];
		for (int j = 0; j < width; j++)
			matrix[i][j] = 0.0;
	}
}

Matrix::Matrix(const Matrix& obj)
{
	matrix = nullptr;
	height = obj.height;
	width = obj.width;

	if (obj.matrix != nullptr)
		matrix = new double*[height];

	for (int i = 0; i < height; i++)
	{
		matrix[i] = new double[width];
		for (int j = 0; j < width; j++)
			matrix[i][j] = obj.matrix[i][j];
	}
}

Matrix::~Matrix()
{
	if (matrix != nullptr)
	{
		for (int i = 0; i < height; i++)
			delete[] matrix[i];
		delete[] matrix;
	}
}