/**
 * Project Untitled
 */
#pragma once

using  namespace System;
namespace SalesModel {
    [Serializable]
    public ref class Person {
    public:
        property int Id; 
        property String^ DocNumber;
        property String^ Name;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property char Status;
    };
}
