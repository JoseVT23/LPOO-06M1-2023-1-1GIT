/*
	La clase Company modela a un cliente del tipo persona jurídica.
	Company hereda de Customer, eso significa que un cliente persona jurídica (empresa) es un tipo de cliente del sistema.
*/
#include "Customer.h"

#pragma once

using  namespace System;
namespace SalesModel {
    public ref class Company : public Customer {
	public:
		property String^ WebPage;
    };
}