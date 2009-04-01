
#ifndef __MOCKCPP_CONSTRAINT_H
#define __MOCKCPP_CONSTRAINT_H

#include <mockcpp.h>
#include <string>

MOCKCPP_NS_START

class RefAny;

class Constraint
{
public:
    virtual ~Constraint() {}
    virtual bool eval(const RefAny& inv) const = 0;
    virtual std::string toString() const = 0;
};

MOCKCPP_NS_END

#endif

