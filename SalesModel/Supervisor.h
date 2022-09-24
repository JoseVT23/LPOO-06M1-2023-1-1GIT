/*
	La clase Supervisor modela a un vendedor supervisor.
	Supervisor hereda de Seller, eso significa que un supervisor es un tipo de seller del sistema.
*/
#pragma once
#include "Employee.h"

using  namespace System;

namespace SalesModel {
    public ref class Supervisor : public Employee {
	public:
		property String^ Area;
    };
}