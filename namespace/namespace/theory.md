## namespace

# std::cout을 왜 이렇게 쓰는지?
- cout이라는 이름이 다른 곳에서도 사용될 수 있다
- std라는 공간으로 구분해서 충돌 방지

**같은 이름이 여러 개 있을 수 있기 때문에 namespace로 구분해서 사용한다**
즉 std::cout = std 라는 namespce 안에 있는 cout을 사용해서 이름 충돌을 방지한다

## namespace를 왜 쓰냐?
- 구분할려고
- namespace = 건물 만들기
- std::cout = 이미 있는 건물 안에 들어가기
- 들어간다 = ::
