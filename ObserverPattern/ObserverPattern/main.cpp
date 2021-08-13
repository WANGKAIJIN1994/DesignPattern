#include "StoreSubject.h"
#include "Customer.h"

using namespace ObserverPattern;

int main()
{
    Customer c1("wkq");
    Customer c2("wk3");

    StoreSubject ss;

    ss.attach(c1);
    ss.attach(c2);
}
