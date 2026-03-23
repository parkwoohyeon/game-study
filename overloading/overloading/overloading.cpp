// overloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <string>

void Attack(int damage) {
	std::cout << "기본 공격 : " << damage;
}

void Attack(int damage, int crit) {
	std::cout << "크리티컬 공격 : " << damage << "(크리티컬 :" << crit << ")";


}

void Attack(std::string skillName) {
	std::cout << "스킬 공격 : " << skillName;

}

int main() {
	Attack(10);
	Attack(10, 20);
	Attack("FireBall");


}