#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_CUSTOMER_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_CUSTOMER_H

#include "IStoreObserver.h"

namespace ObserverPattern
{
class Customer : public IStoreObserver
{
public:
    explicit Customer(const std::string& name);
    ~Customer() override = default;

    void update(const std::string& name) override;

private:
    const std::string name_;
};
}// end namespace

#endif
