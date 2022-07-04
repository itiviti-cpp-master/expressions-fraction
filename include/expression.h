#pragma once

#include "fraction.h"

#include <map>
#include <memory>
#include <ostream>
#include <string>

struct Expression
{
    virtual Fraction eval(const std::map<std::string, Fraction> & values = {}) const = 0;

    virtual std::unique_ptr<Expression> clone() const = 0;

    friend std::ostream & operator<<(std::ostream & out, const Expression & expression);
};
