/*
    La clase Product modela un producto que se gestiona en el sistema de ventas.
*/
#pragma once

using  namespace System;

namespace SalesModel {
    public ref class Product {
    public:
        int Id;
        String^ Name;
        String^ Description;
        double Price;
        int Stock;
        char Status;
        array <Byte>^ Photo;
    };
}
