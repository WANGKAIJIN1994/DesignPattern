//https://design-patterns.readthedocs.io/zh_CN/latest/structural_patterns/decorator.html#
//https://www.runoob.com/design-pattern/decorator-pattern.html
//https://www.liaoxuefeng.com/wiki/1252599548343744/1281319302594594
//https://blog.csdn.net/sinat_21107433/article/details/102733023

#include "DecoratorPattern/DecoratorWear.h"
#include "DecoratorPattern/DecoratorHobby.h"
#include "DecoratorPattern/Student.h"
#include "DecoratorPattern/Teacher.h"

#include <memory>

//using namespace std;

int main()
{
    std::unique_ptr<People> p1 = std::make_unique<Student>("P1");
//    unique_ptr<People> p2 = make_unique<DecoratorHobby>(make_unique<Student>("P2"));
//    unique_ptr<People> p3 = make_unique<DecoratorWear>(make_unique<Student>("P3"));
//    unique_ptr<People> p4 = make_unique<DecoratorHobby>(make_unique<DecoratorWear>(make_unique<Student>("P4")));
//
//    unique_ptr<People> p5 = make_unique<Teacher>("P5");
//    unique_ptr<People> p6 = make_unique<DecoratorHobby>(make_unique<Teacher>("P6"));
//    unique_ptr<People> p7 = make_unique<DecoratorWear>(make_unique<Teacher>("P7"));
//    unique_ptr<People> p8 = make_unique<DecoratorHobby>(make_unique<DecoratorWear>(make_unique<Teacher>("P8")));

//    p2->show();
//    p3->show();
//    p4->show();
//    p5->show();
//    p6->show();
//    p7->show();
//    p8->show();
}
