/**
 * Project Untitled
 */
#include "pch.h"

#include "Customer.h"

/**
 * Customer implementation
 */

SalesModel::Customer::Customer()
{
    
}

SalesModel::Customer::Customer(int id, String^ name, String^ docNumber, String^ address, String^ phoneNumber, String^ email, int customerPoints)
{
    Id = id;
    this->Name = name;
    this->DocNumber = docNumber;
    this->Address = address;
    this->PhoneNumber = phoneNumber;
    this->Email = email;
    this->CustomerPoints = customerPoints;
}
