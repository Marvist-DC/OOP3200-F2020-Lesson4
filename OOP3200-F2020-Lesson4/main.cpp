/*
    Author: Domenic Catalano
    Date: September 30, 2020
    Program Name: OOP3200-F2020-Lesson4
*/

#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
	Person person = Person("Billy", "Bob", 35.6f);
	person.SaysHello();

	std::cout << person.ToString() << std::endl;

	Student student = Student("Jim", "Jackson", 22.0f, "MJ123456789");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;

	Professor professor = Professor("Andrew", "Hamilton", 38.0f, "AH123456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;

}
