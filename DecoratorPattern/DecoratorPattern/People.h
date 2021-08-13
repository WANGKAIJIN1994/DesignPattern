#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_PEOPLE_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_PEOPLE_H

#include <string>

using namespace std;

class People
{
public:
    People() {}
    virtual ~People() = 0;

    virtual string show() = 0;
};

#endif
