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

void Matrix::readMatrix(const string file_name)
{
	if (matrix != nullptr)
	{
		for (int i = 0; i < height; i++)
			delete[] matrix[i];
		delete[] matrix;
		matrix = nullptr;
		width = 0;
		height = 0;
	}

	ifstream file(file_name, ios::in);
	if (!file.is_open())
		throw "Wrong file name.";
	
	file >> height >> width;
	if (height <= 0 || width <= 0)
		throw "Wrong matrix size.";

	matrix = new double*[height];
	for (int i = 0; i < height; i++)
		matrix[i] = new double[width];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			file >> matrix[i][j];

	file.close();
}

void Matrix::writeMatrix(const string file_name)
{
	ofstream file(file_name, ios::out);

	file << height << " " << width;
	for (int i = 0; i < height; i++)
	{
		file << endl;
		for (int j = 0; j < width; j++)
			file << matrix[i][j] << " ";
	}

	file.close();
}

Matrix& Matrix::operator= (const Matrix& right)
{
	if (matrix != nullptr)
	{
		for (int i = 0; i < height; i++)
			delete[] matrix[i];
		delete[] matrix;
	}

	matrix = nullptr;
	height = right.height;
	width = right.width;

	if (right.matrix != nullptr)
		matrix = new double*[height];

	for (int i = 0; i < height; i++)
	{
		matrix[i] = new double[width];
		for (int j = 0; j < width; j++)
			matrix[i][j] = right.matrix[i][j];
	}

	return *this;
}

Matrix Matrix::operator+ (const Matrix& right)
{
	if (height == 0 || width == 0 || height != right.height || width != right.width)
		throw "Wrong matrix size.";

	Matrix ret(*this);

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			ret.matrix[i][j] += right.matrix[i][j];

	return ret;
}

Matrix Matrix::operator- (const Matrix& right)
{
	if (height == 0 || width == 0 || height != right.height || width != right.width)
		throw "Wrong matrix size.";

	Matrix ret(*this);

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			ret.matrix[i][j] -= right.matrix[i][j];

	return ret;
}

Matrix Matrix::operator* (const Matrix& right)
{
	if (height == 0 || width == 0 || height != right.height || width != right.width)
		throw "Wrong matrix size.";

	Matrix ret(height, right.width);

	for (int i = 0; i < height; i++)
		for (int j = 0; j < right.width; j++)
			for (int r = 0; r < width; r++)
				ret.matrix[i][j] += matrix[i][r] * right.matrix[r][j];

	return ret;
}

double& Matrix::operator() (const int h, const int w)
{
	return matrix[h][w];
}