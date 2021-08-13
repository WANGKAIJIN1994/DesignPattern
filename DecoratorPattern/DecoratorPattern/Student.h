#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_STUDENT_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_STUDENT_H

#include <iostream>
#include "People.h"

using namespace std;

class Student : public People
{
private:
    string name_;

public:
    Student() {}
    Student(string name) : name_(name)
    {
    }

    ~Student() override = default;

    string show() override
    {
        return "Student:" + name_ + ";";
    }
};

#endif
