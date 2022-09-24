/*
	La clase SellerCompany modela a un tipo de persona.
	SellerCompany hereda de Person, eso significa que una compañía vendedora es un tipo de persona del sistema.
*/
#pragma once
#include "Person.h"

using  namespace System;
namespace SalesModel {
    public ref class SellerCompany : public Person {
	public:
		String^ President;
    };
}