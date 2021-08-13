#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATORWEAR_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATORWEAR_H

#include <iostream>

#include "Decorator.h"

using namespace std;

class DecoratorWear : public Decorator
{
public:
    DecoratorWear() {}
    DecoratorWear(unique_ptr<People>& people) : Decorator(people)
    {
    }

    ~DecoratorWear() override = default;

    string addBehavior()
    {
        return "DecoratorWear:A";
    }

    string show() override
    {
        return Decorator::show() + addBehavior();
    };
};

#endif
