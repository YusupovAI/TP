#include "Visitor/file_writing_visitor.h"
#include <fstream>
#include "Unit/Unit.h"

FileWritingVisitor::FileWritingVisitor(const std::string& filename) : out_(filename) {}


void FileWritingVisitor::Visit(const std::shared_ptr<Unit>& unit) const {
    unit->Accept(*this);
}

void FileWritingVisitor::VisitInfantry(const Unit& unit) const {
    out_ << "Infantry on: " << unit.GetPosition().X() << ", " << unit.GetPosition().Y() << '\n';
    out_ << '\t' << "HP: " << unit.GetHP() << '\n';
    out_ << '\t' << "Damage: " << unit.GetAttack()->GetDamage() << '\n';
    out_ << '\n';
}


void FileWritingVisitor::VisitMage(const Unit& unit) const {
    out_ << "Mage on: " << unit.GetPosition().X() << ", " << unit.GetPosition().Y() << '\n';
    out_ << '\t' << "HP: " << unit.GetHP() << '\n';
    out_ << '\t' << "Damage: " << unit.GetAttack()->GetDamage() << '\n';
    out_ << '\n';
}


void FileWritingVisitor::VisitHorseman(const Unit& unit) const {
    out_ << "Horseman on: " << unit.GetPosition().X() << ", " << unit.GetPosition().Y() << '\n';
    out_ << '\t' << "HP: " << unit.GetHP() << '\n';
    out_ << '\t' << "Damage: " << unit.GetAttack()->GetDamage() << '\n';
    out_ << '\n';
}

void FileWritingVisitor::VisitHero(const Unit& unit) const {
    out_ << "Hero on: " << unit.GetPosition().X() << ", " << unit.GetPosition().Y() << '\n';
    out_ << '\t' << "HP: " << unit.GetHP() << '\n';
    out_ << '\t' << "Damage: " <<  unit.GetAttack()->GetDamage() << '\n';
    out_ << '\n';
}

FileWritingVisitor::~FileWritingVisitor() {
    out_.close();
}
