#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ICUSTOMEROBSERVER_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ICUSTOMEROBSERVER_H

#include "DataType.h"
#include <unorderd_map>

namespace ObserverPattern
{

class ICustomerObserver
{
public:
	explicit ICustomerObserver() = default;
	virtual ~ICustomerObserver() = default;

	virtual void GoodsUpdate(goods goodsName) = 0;
}

}// end namespace

#endif DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ICUSTOMEROBSERVER_H
