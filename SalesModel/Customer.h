/**
 * La clase Customer modela a un cliente a quien se realiza la venta.
 * Customer hereda de Person, eso significa que todo cliente es un tipo de persona (natural o jurídica).
 */
#include "Person.h"

#pragma once

using  namespace System;
namespace SalesModel {
    [Serializable]
    public ref class Customer : public Person {
    public:
        int CustomerPoints;
        Customer();
        Customer(int id, String^ name, String^ docNumber, String^address, String^ phoneNumber, String^email,  int customerPoints);
    };
}