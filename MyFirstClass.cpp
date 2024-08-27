#include "MyFirstClass.h"

#include <cstdint>
#include <phpcpp.h>

Php::Value MyFirstClass::setValue(Php::Parameters &params)
{
    _a_attribute = (int64_t) params[0].numericValue();
    return true;
}

Php::Value MyFirstClass::power()
{
    _a_attribute = _a_attribute ^ 2;
    return Php::Value(true); 
}

