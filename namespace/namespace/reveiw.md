## 공부한 내용
- namespace는 같은 이름이 여러개 있을 수 있으므로 그걸 구분하기 위해 만들어 주는 거다

## 햇깔린 내용

코드를 작성 했을 때 나는 코드를 이렇게 작성 했다

```cpp
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
   std::cout << A::Attack(); //이 부분
   std::cout << B::Attack();
}
```

내가 생각한건 함수를 출력 해야 하니깐 cout을 써서 출력 코드를 써줘야 한다
하지만 내가 놓친 부분이 함수 안에서 이미 cout으로 출력하고 있기 때문에 함수를 호출하면 그 출력이 실행된다
그리고 또한 저렇게 쓸려면 함수에 return값이 있어야 함 즉 반환 하는 값이 있어야 한다.

## 다음 공부할 내용
- 오버로딩이란