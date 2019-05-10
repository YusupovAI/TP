#ifndef TP_ATTACK_H
#define TP_ATTACK_H

class Attack {
    public:
	enum AttackType {
	    Light, Fire,
	    Ice, Physical
	};
	explicit Attack(AttackType attack_type, unsigned int damage);
	Attack() = default;
	unsigned int GetDamage() const;
	void SetType(AttackType);
	void SetDamage(unsigned int damage);
	AttackType GetType() const;
	bool operator==(const Attack&) const;
    protected:
	unsigned int damage_;
	AttackType attack_type_;
};
#endif
