// namespace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

namespace A {
    void Attack() {
        std::cout << "A공격";
    }
}

namespace B {
    void Attack() {
        std::cout << "B공격";
    }
}



int main()
{
    A::Attack();
    B::Attack();
}

