#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATOR_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATOR_H

#include <iostream>
#include <memory>

#include "People.h"

using namespace std;

class Decorator : public People
{
private:
    unique_ptr<People> people_;

public:
    Decorator() {}
    Decorator(unique_ptr<People>& people)
    {
        people_ = move(people);
    }

    ~Decorator() override = default;

    string show() override
    {
        return people_->show();
    };
};

#endif
