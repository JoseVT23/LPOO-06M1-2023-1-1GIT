/**
 * Project Untitled
 */
#pragma once
#include "Product.h"

using  namespace System;

namespace SalesModel {
    [Serializable]
    public ref class SaleDetail {
    public:
        property int Id;
        property int Quantity;
        property double SubTotal;
        property double UnitPrice;
        property Product^ Product;
    };
}