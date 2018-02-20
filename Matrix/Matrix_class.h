#pragma once

#include <vector>
#include <iostream>
#include <map>

class Matrix_class
{
private:
	int rows, coulmns;

	std::map<int, std::map<int, int>> mat_map;
	

public:

	Matrix_class();
	~Matrix_class();

	int menu();
	void set_row(int);
	void set_col(int);
	int get_row();
	int get_col();

	friend std::ostream &operator<<(std::ostream &, const Matrix_class &obj);
	friend std::istream &operator>>(std::istream &, const Matrix_class &obj);

	//overloaded operators
	Matrix_class &operator =(const Matrix_class &m2);
	Matrix_class &operator +(const Matrix_class &m2);
	Matrix_class &operator -(const Matrix_class &m2);
	

};

