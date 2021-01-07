#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Matrix
{
private:
	double** matrix;
	int width;
	int height;
public:
	Matrix();
	Matrix(const int h, const int w);
	Matrix(const Matrix& obj);
	~Matrix();

	bool readMatrix(const char* file_name);

	Matrix& operator= (const Matrix& right);
	Matrix operator+ (const Matrix& right);
	Matrix operator- (const Matrix& right);
	Matrix operator* (const Matrix& right);
	double& operator() (const int h, const int w);
};