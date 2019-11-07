#include "Unit/UnitDecorator.h"
#include "SFML/Graphics.hpp"


UnitDecorator::UnitDecorator(const std::shared_ptr<Unit>& unit) : unit_(unit) {}; 

void UnitDecorator::Offense(const std::shared_ptr<Unit> &enemy) {
    unit_->Offense(enemy);
}

void UnitDecorator::Move(const Point &p) {
    unit_->Move(p);
}

unsigned int UnitDecorator::GetHP() const {
    return unit_->GetHP();
}

void UnitDecorator::SetHP(int hp) {
    unit_->SetHP(hp);
}

unsigned int UnitDecorator::GetCurTurnPoints() const {
    return unit_->GetCurTurnPoints();
}

unsigned int UnitDecorator::GetTurnPoints() const {
    return unit_->GetCurTurnPoints();
}

void UnitDecorator::SetTurnPoints(unsigned int turn_points) {
    unit_->SetTurnPoints(turn_points);
}

void UnitDecorator::SetCurTurnPoints(unsigned int cur_turn_points) {
    unit_->SetCurTurnPoints(cur_turn_points);
}

const std::shared_ptr<Attack>& UnitDecorator::GetAttack() const {
    return unit_->GetAttack();
}

void UnitDecorator::SetAttack(const std::shared_ptr<Attack>& attack) {
    unit_->SetAttack(attack);
}

unsigned int UnitDecorator::GetAttackRange() const {
    return unit_->GetAttackRange();
}

void UnitDecorator::SetAttackRange(unsigned int attack_range) {
    unit_->SetAttackRange(attack_range);
}

Point UnitDecorator::GetPosition() const {
    return unit_->GetPosition();
}

void UnitDecorator::SetPosition(const Point &position) {
    unit_->SetPosition(position);
}

void UnitDecorator::Attacked(const std::shared_ptr<Attack>& attack) {
    unit_->Attacked(attack);
}

const std::shared_ptr<sf::CircleShape>& UnitDecorator::GetShape() const {
    return unit_->GetShape();
}

void UnitDecorator::SetShape(const sf::CircleShape& shape) {
    unit_->SetShape(shape);
}

void UnitDecorator::Update() {
    unit_->Update();
}

void UnitDecorator::Accept(const Visitor& visit) const {
    unit_->Accept(visit);
}
