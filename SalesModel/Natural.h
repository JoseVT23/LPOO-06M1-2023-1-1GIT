/*
	La clase Natural modela a un cliente del tipo persona natural.
	Natural hereda de Customer, eso significa que un cliente persona natural es un tipo de cliente del sistema.
*/
#pragma once

#include "Customer.h"

using  namespace System;

namespace SalesModel {
    public ref class Natural : public Customer {
	public:
		String^ Gender;
    };
}