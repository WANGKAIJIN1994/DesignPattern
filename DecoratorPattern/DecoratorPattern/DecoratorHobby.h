#ifndef DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATORHOBBY_H
#define DESIGNPATTERN_DECORATORPATTERN_DECORATORPATTERN_DECORATORHOBBY_H

#include <iostream>

#include "Decorator.h"

using namespace std;

class DecoratorHobby : public Decorator
{
public:
    DecoratorHobby() {}
    DecoratorHobby(unique_ptr<People>& people) : Decorator(people)
    {
    }

    ~DecoratorHobby() override = default;

    string addBehavior()
    {
        return "DecoratorHobby:A";
    }

    string show() override
    {
        return Decorator::show() + addBehavior();
    };
};

#endif
