#include <iostream>

class DoubleLinkedList
{
private:
    struct Node
    {
        int data;      // 값 저장
        Node* prev;    // 이전 노드 주소
        Node* next;    // 다음 노드 주소
    };

    Node* head; // 첫 번째 노드
    Node* tail; // 마지막 노드

public:
    // 생성자
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // 소멸자
    ~DoubleLinkedList()
    {
        Clear();
    }

    // 맨 앞에 추가
    void PushFront(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;

        // 기존 head가 있으면 그 노드의 prev를 새 노드로 연결
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            // 비어 있었다면 tail도 새 노드를 가리켜야 함
            tail = newNode;
        }

        // head를 새 노드로 변경
        head = newNode;
    }

    // 맨 뒤에 추가
    void PushBack(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = tail;

        // 기존 tail이 있으면 그 노드의 next를 새 노드로 연결
        if (tail != nullptr)
        {
            tail->next = newNode;
        }
        else
        {
            // 비어 있었다면 head도 새 노드를 가리켜야 함
            head = newNode;
        }

        // tail을 새 노드로 변경
        tail = newNode;
    }

    // 맨 앞 삭제
    void PopFront()
    {
        if (head == nullptr)
        {
            std::cout << "리스트가 비어있습니다.\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            // 하나만 있던 노드를 삭제한 경우 tail도 nullptr
            tail = nullptr;
        }

        delete temp;
    }

    // 맨 뒤 삭제
    void PopBack()
    {
        if (tail == nullptr)
        {
            std::cout << "리스트가 비어있습니다.\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
        else
        {
            // 하나만 있던 노드를 삭제한 경우 head도 nullptr
            head = nullptr;
        }

        delete temp;
    }

    // 특정 값 삭제 (처음 찾은 값 하나만 삭제)
    void Delete(int value)
    {
        Node* current = head;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                // 현재 노드의 이전 노드가 있다면
                if (current->prev != nullptr)
                {
                    current->prev->next = current->next;
                }
                else
                {
                    // 현재 노드가 head인 경우
                    head = current->next;
                }

                // 현재 노드의 다음 노드가 있다면
                if (current->next != nullptr)
                {
                    current->next->prev = current->prev;
                }
                else
                {
                    // 현재 노드가 tail인 경우
                    tail = current->prev;
                }

                delete current;
                std::cout << value << " 삭제 완료\n";
                return;
            }

            current = current->next;
        }

        std::cout << value << " 값을 찾지 못했습니다.\n";
    }

    // 값 찾기
    bool Find(int value)
    {
        Node* current = head;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                return true;
            }

            current = current->next;
        }

        return false;
    }

    // 전체 출력 (앞에서 뒤로)
    void PrintForward()
    {
        Node* current = head;

        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << "\n";
    }

    // 전체 출력 (뒤에서 앞으로)
    void PrintBackward()
    {
        Node* current = tail;

        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->prev;
        }

        std::cout << "\n";
    }

    // 전체 삭제
    void Clear()
    {
        Node* current = head;

        while (current != nullptr)
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        head = nullptr;
        tail = nullptr;
    }

    // 비어있는지 확인
    bool IsEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    DoubleLinkedList list;

    list.PushBack(10);
    list.PushBack(20);
    list.PushBack(30);

    std::cout << "앞에서 뒤로 출력: ";
    list.PrintForward();

    std::cout << "뒤에서 앞으로 출력: ";
    list.PrintBackward();

    list.PushFront(5);
    std::cout << "PushFront(5) 후: ";
    list.PrintForward();

    list.PopFront();
    std::cout << "PopFront() 후: ";
    list.PrintForward();

    list.PopBack();
    std::cout << "PopBack() 후: ";
    list.PrintForward();

    list.Delete(20);
    std::cout << "Delete(20) 후: ";
    list.PrintForward();

    if (list.Find(10))
    {
        std::cout << "10을 찾았습니다.\n";
    }
    else
    {
        std::cout << "10이 없습니다.\n";
    }

    list.Clear();
    std::cout << "Clear() 후: ";
    list.PrintForward();

    return 0;
}