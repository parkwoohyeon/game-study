#include <iostream>
#include <string>

void Attack(int damage) {
	std::cout << "기본 공력 : " << damage;
}

void Attack(int damage, int crit) {
	std::cout << "크리티컬 공격 : " << damage << "(크리티컬 :" << crit << ")";
}

void Attack(std::string skillName, int mana = 10) {
	std::cout << "스킬 공격 : " << skillName << "/" << "마나 : " << mana;
}

int main() {
	Attack(10);
	Attack(10, 20);
	Attack("FireBall");
	Attack("IceStorm", 30); // 디폴트 함수 활용
}