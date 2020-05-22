#ifndef DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ISTORESUBJECT_H
#define DESIGNPATTERN_OBSERVERPATTERN_OBSERVERPATTERN_ISTORESUBJECT_H

namespace ObserverPattern
{
class IStoreObserver;

class IStoreSubject
{
public:
    IStoreSubject() = default;
    virtual ~IStoreSubject() = default;

    virtual void attach(IStoreObserver& observer) = 0;
};
}// end namespace

#endif
