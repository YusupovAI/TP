#include "Attack/Attack.h"
#include "Unit/Unit.h"

Attack::Attack(const unsigned int damage) : damage_(damage) {};

unsigned int Attack::GetDamage() {
    return damage_;
}
