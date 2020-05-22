#include "StoreSubject.h"

namespace ObserverPattern
{
void StoreSubject::attach(IStoreObserver& observer)
{
    observers_.push_front(&observer);
}

void StoreSubject::increaseGoods(const std::string& name)
{

}

void StoreSubject::notifyCustomer(const std::string& name)
{

}
}
