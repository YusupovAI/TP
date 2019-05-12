#ifndef TP_VISITOR_H
#define TP_VISITOR_H
#include <memory>

class Unit;

class Visitor {
public:
    Visitor() = default;
    virtual void VisitInfantry(const Unit&) const = 0;
    virtual void VisitHorseman(const Unit&) const = 0;
    virtual void VisitMage(const Unit&) const = 0;
    virtual void Visit(const std::shared_ptr<Unit>&) const = 0;
    virtual void VisitHero(const Unit&) const = 0;
    virtual ~Visitor() = default;
};

#endif
