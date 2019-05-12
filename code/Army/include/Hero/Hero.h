#ifndef TP_HERO_H
#define TP_HERO_H

#include "Unit/BaseUnit.h"
#include "Point.h"
#include <memory>

class Hero : public BaseUnit {
public:
    Hero();

    Hero(const Hero &) = default;

    explicit Hero(const Point &);

    enum EAbilityType {
        fireball, lightning,
        heal, ability_none
    };

    enum EWeaponType {
        sword, stick,
        drums, mythical_thing,
        weapon_none
    };

    void SetMana(unsigned int mana);

    unsigned int GetMana() const;

    void SetAbility(EAbilityType ability);

    EAbilityType GetAbility() const;

    void SetHorse(bool horse);

    bool GetHorse() const;

    void SetShield(bool shield);

    bool GetShield() const;

    void SetWeapon(EWeaponType weapon);

    EWeaponType GetWeapon() const;

    void SetArmor(unsigned int armor);

    unsigned int GetArmor() const;

    virtual void Cast(std::shared_ptr<Unit>);

    void Accept(const Visitor&) const;


private:
    EAbilityType ability_;
    EWeaponType weapon_;
    bool horse_;
    bool shield_;
    unsigned int mana_;
    unsigned int armor_;
};


#endif //TP_HERO_H
