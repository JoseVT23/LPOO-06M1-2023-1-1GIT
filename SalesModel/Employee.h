/*
	La clase Employee modela a empleado.
	Employee hereda de Person, eso significa que un vendedor en general es un tipo de persona del sistema.
*/

#include "Person.h"


#pragma once

using  namespace System;
namespace SalesModel {
    public ref class Employee : public Person {
	public:
		property String^ LastName;
		property String^ Username;
		property String^ Password;
		property double Salary;
		property String^ Store;
		property char Gender;
		property String^ Birthday;
    };
}