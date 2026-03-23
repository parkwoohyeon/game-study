// coutcin.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int age;
    
    std::cout << "나이를 입력하세요 : ";  //출력
    std::cin >> age; //입력
    std::cout << "당신의 나이는 " << age << "입니다"; //출력
}

//순서대로 코드 진행
//처음에 "나이를 입력하세요 :" 라는 문구를 만들고 입력 넣고 몇 살인지 보여주는 식