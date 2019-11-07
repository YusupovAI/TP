#ifndef TP_ATTACK_H
#define TP_ATTACK_H

class Unit;

class Attack {
    public:
	Attack(const unsigned int damage);
	virtual ~Attack() = default;
	virtual void Apply(Unit&) const = 0;
	virtual unsigned int GetDamage();
    protected:
	unsigned int damage_;
};
#endif
