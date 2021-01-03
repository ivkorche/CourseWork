#pragma once

#include <iostream>
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

	Matrix& operator= (const Matrix& right);
	Matrix operator+ (const Matrix& right);
	Matrix operator- (const Matrix& right);
	Matrix operator* (const Matrix& right);
	double& operator() (const int h, const int w);
};