#include "stdafx.h"
#include "Matrix_class.h"





Matrix_class::Matrix_class()
{
	this->coulmns = 10;
	this->rows = 10;
}

Matrix_class::~Matrix_class()
{
}

int Matrix_class::menu()
{
	int selection;

	std::cout << "1. Enter matricies 1 and 2\n";
	std::cout << "2. Display Matricies 1, 2, and 3\n";
	std::cout << "3. m3 = m1 + m2\n";
	std::cout << "4. m3 = m1 - m2\n";
	std::cout << "5. Exit\n";

	std::cout << "Selection : ";
	std::cin >> selection;

	return selection;
}

void Matrix_class::set_row(int)
{
}

void Matrix_class::set_col(int)
{
}

int Matrix_class::get_row()
{
	return 0;
}

Matrix_class & Matrix_class::operator=(const Matrix_class & m2)
{
	// TODO: insert return statement here
}

Matrix_class & Matrix_class::operator+(const Matrix_class & m2)
{
	// TODO: insert return statement here
}

Matrix_class & Matrix_class::operator-(const Matrix_class & m2)
{
	// TODO: insert return statement here
}

std::ostream & operator<<(std::ostream &, const Matrix_class & obj)
{
	// TODO: insert return statement here
}

std::istream & operator>>(std::istream &, const Matrix_class & obj)
{
	// TODO: insert return statement here
}
