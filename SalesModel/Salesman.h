/*
	La clase Salesman modela a un vendedor.
	Salesman hereda de Employee, eso significa que un salesman es un tipo de employee del sistema.
*/
#pragma once
#include "Employee.h"

using  namespace System;

namespace SalesModel {
	[Serializable]
    public ref class Salesman : public Employee {
	public:
		property double Quota;
    };
}
