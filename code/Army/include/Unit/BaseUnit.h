#ifndef TP_BASEUNIT_H
#define TP_BASEUNIT_H
#include "Unit.h"

class BaseUnit : public Unit {
public:
    explicit BaseUnit(const Point &);

    BaseUnit() = default;

    BaseUnit(const BaseUnit &) = default;

    virtual void Offense(const std::shared_ptr<Unit> &) override;

    virtual void Move(const Point &) override;

    virtual unsigned int GetHP() const override;

    virtual void SetHP(int hp) override;

    virtual unsigned int GetCurTurnPoints() const override;

    virtual unsigned int GetTurnPoints() const override;

    virtual void SetTurnPoints(unsigned int turn_points) override;

    virtual void SetCurTurnPoints(unsigned int cur_turn_points) override;

    virtual Attack GetAttack() const override;

    virtual void SetAttack(Attack attack) override;

    virtual unsigned int GetAttackRange() const override;

    virtual void SetAttackRange(unsigned int attack_range) override;

    virtual Point GetPosition() const override;

    virtual void SetPosition(const Point &position) override;

    virtual void Attacked(const Attack& attack) override;

    virtual const std::shared_ptr<sf::CircleShape>& GetShape() const override;

    virtual void SetShape(const sf::CircleShape&) override;

    virtual void Update() override;

    virtual ~BaseUnit() = default;
protected:
    int hp_;
    unsigned int turn_points_;
    unsigned int cur_turn_points_;
    unsigned int damage_;
    unsigned int attack_range_;
    Point position_;
    Attack attack_;
    std::shared_ptr<sf::CircleShape> shape_;

};

#endif
