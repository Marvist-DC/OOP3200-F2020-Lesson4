/**
 * Project OOP3200-F2020-Lesson4
 * @author Domenic Catalano
 * @version 1
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param fire_name
 * @param last_name
 * @param age
 * @param employee_id
 */
void Professor(string fire_name, string last_name, float age, string employee_id);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teaches();
    
void Teaches();
    
string ToString();
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H