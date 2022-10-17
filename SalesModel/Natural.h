/*
	La clase Natural modela a un cliente del tipo persona natural.
	Natural hereda de Customer, eso significa que un cliente persona natural es un tipo de cliente del sistema.
*/
#pragma once

#include "Customer.h"

using  namespace System;

namespace SalesModel {
	[Serializable]
    public ref class Natural : public Customer {
	public:
		property String^ LastName;
		property char Gender;
		property String^ Birthday;
		Natural() {};
		Natural(int id, String^ name, String^ lastName, String^ docNumber, String^ address, String^ phoneNumber, String^ email, int customerPoints, char gender, String^ birthday) :Customer(id, name, docNumber, address, phoneNumber, email, customerPoints) {
			LastName = lastName;
			Gender = gender;
			Birthday = birthday;
		}
    };
}