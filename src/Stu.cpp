#include "Stu.h"
#include <iostream>

void Stu::print()
{
	std::cout << "stu.print()" << std::endl;
}

Stu::Stu(int id) : m_id(id) {}