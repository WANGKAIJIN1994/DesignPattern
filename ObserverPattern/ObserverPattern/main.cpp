#include "StoreSubject.h"
#include "Customer.h"

using namespace ObserverPattern;

int main()
{
    Customer c1("wkq");
    StoreSubject ss;

    ss.attach(c1);
}
