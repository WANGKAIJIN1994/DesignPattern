#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_TEACHER_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_TEACHER_H

#include <iostream>
#include "People.h"

using namespace std;

class Teacher : public People
{
private:
    string name_;

public:
    Teacher() {}
    Teacher(string name) : name_(name)
    {
    }

    ~Teacher() override = default;

    string show() override
    {
        return "Teacher:" + name_ + ";";
    }
};

#endif
