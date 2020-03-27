#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_STORESUBJECT_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_STORESUBJECT_H

#include "DataType.h"
#include "ICustomerObserver.h"
#include <unorderd_map>
#include <shared_ptr>

namespace ObserverPattern
{
using goodsMap = std::unorderd_map<goods, std::shared_ptr<ICustomerObserver>>; // goods -> customer>

class StoreSubject
{
public:
	explicit StoreSubject();
	~StoreSubject();

	void increaseGoods(goods goodsName, numbers increaseNumber);
	void addCustomer(std::shared_ptr<ICustomerObserver> customerName, goods goodsName);

private:
	void notifyCustomer(goods goodsName);

	goodsMap goodsMap_;
}

}// end namespace

#endif DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_STORESUBJECT_H
