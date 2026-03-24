#include <iostream>

int Damage(int& hp) {
	hp -= 30;
	return hp;
}

int main() {
	int playerhp = 100;
	Damage(playerhp);
	std::cout << playerhp;
}

//#include <iostream>
//
//int Damage(int* hp) {
//
//	*hp -= 30;
//	return *hp;
//}
//
//int main() {
//	int playerhp = 100;
//	Damage(&playerhp);
//	std::cout << playerhp;
//}

//포인터를 활용해서 50으로 바꿔라
//int main() {
//	int a = 10; 
//	int* p = &a;
//	a = 50;
//
//	std::cout << a;
//
//}

//포인터를 사용해서 체력을 감소시키는 함수 만들기

//void Damage(int* hp) {
//	*hp -= 30;
//}
//
//int main() {
//	int palyerhp = 100;
//	Damage(&palyerhp);
//	std::cout << palyerhp;
//}

// 포인터를 활용 해서 a, b값 바꾸는 함수
//void Swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	Swap(&a, &b);
//	std::cout << a << b;
//
//}


// 포인터가 주소를 지워도(nullptr)해도 되는지
//#include <iostream>
//void Test(int* p) {
//	p = nullptr;
//				
//
//}
//
//int main() {
//	int a = 10;
//	int* p = &a;
//
//	Test(p);
//	std::cout << *p;
//
//}