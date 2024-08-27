#include <phpcpp.h>

#include <cstdint>

class MyFirstClass : public Php::Base
{
private:
    int64_t _a_attribute = 0;

public:
    MyFirstClass() = default;
    virtual ~MyFirstClass() = default;

    Php::Value value() const { return _a_attribute; };

    Php::Value setValue(Php::Parameters &params);
    Php::Value power();
};

