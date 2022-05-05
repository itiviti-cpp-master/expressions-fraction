#pragma once

#include "fraction.h"

#include <map>
#include <ostream>
#include <string>

struct Expression
{
    virtual Fraction eval(std::map<std::string, Fraction> const & values = {}) const = 0;

    virtual Expression * clone() const = 0;

    friend std::ostream & operator<<(std::ostream & out, const Expression & expression);
};
