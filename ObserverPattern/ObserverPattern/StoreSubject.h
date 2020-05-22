#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_STORESUBJECT_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_STORESUBJECT_H

#include <forward_list>
#include "IStoreSubject.h"
#include "IStoreObserver.h"

namespace ObserverPattern
{
class StoreSubject : public IStoreSubject
{
public:
	StoreSubject() = default;
	~StoreSubject() override = default;

	void attach(IStoreObserver& observer) override;

	void increaseGoods(const std::string& name);

private:
	void notifyCustomer(const std::string& name);

private:
	std::forward_list<IStoreObserver*> observers_;
};
}// end namespace

#endif
