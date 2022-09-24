/**
 * Project Untitled
 */
#pragma once

#include "Employee.h"


using  namespace System;

namespace SalesModel {
    public ref class StoreManager : public Employee {
    public:
        property String^ Store;
    };
}
