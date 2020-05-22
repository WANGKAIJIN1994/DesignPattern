#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ISTOREOBSERVER_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ISTOREOBSERVER_H

#include <string>

namespace ObserverPattern
{
class IStoreObserver
{
public:
	IStoreObserver() = default;
	virtual ~IStoreObserver() = default;

	virtual void update(const std::string& name) = 0;
};
}// end namespace

#endif
