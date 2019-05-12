#ifndef TP_UNITDECORATOR_H
#define TP_UNITDECORATOR_H
#include "Unit/Unit.h"
#include <memory>
#include "SFML/Graphics.hpp"

class UnitDecorator : public Unit {
public:
    UnitDecorator(const std::shared_ptr<Unit>&);

    virtual void Offense(const std::shared_ptr<Unit> &) override;

    virtual void Move(const Point &) override;

    virtual unsigned int GetHP() const override;
    virtual void SetHP(int hp) override;

    virtual unsigned int GetCurTurnPoints() const override;
    virtual unsigned int GetTurnPoints() const override;

    virtual void SetTurnPoints(unsigned int turn_points) override;
    virtual void SetCurTurnPoints(unsigned int cur_turn_points) override;

    virtual const std::shared_ptr<Attack>& GetAttack() const override;
    virtual void SetAttack(const std::shared_ptr<Attack>& attack) override;

    virtual unsigned int GetAttackRange() const override;
    virtual void SetAttackRange(unsigned int attack_range) override;

    virtual Point GetPosition() const override;
    virtual void SetPosition(const Point &position) override;

    virtual void Attacked(const std::shared_ptr<Attack>& attack) override;

    virtual const std::shared_ptr<sf::CircleShape>& GetShape() const override; 
    virtual void SetShape(const sf::CircleShape&) override;

    virtual void Update() override;

    virtual ~UnitDecorator() = default;

    virtual void Accept(const Visitor&) const override;

private:
    std::shared_ptr<Unit> unit_;
};

#endif
