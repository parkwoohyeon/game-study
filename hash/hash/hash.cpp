#include <iostream>
#include <vector>
#include <list>
using namespace std;



template <typename V>
class HashTable
{
	vector<list<pair<string, V>>> table;
	int Size = 0;

	size_t hashFunction(const string& Key)
	{
		size_t hash = 0;
		for (int i = 0; i < Key.length(); ++i)
		{
			hash += Key[i];
		}
		return hash % Size; //나머지 연산하면 벡터 사이즈 안넘음.
	}
public:
	HashTable(size_t size = 64)
		:table(size)//벡터 생성자 64
	{
		Size = size;
	}

	void insert(const string& key, const V& value)
	{
		size_t index = hashFunction(key);

		//이거 넣으면 안겹치는 방식 set
		//for (auto& v : table[index])
		//{
		//	if(v.first == key)
		//		v.second = value; //이미 있으면 값만 업데이트
		//	return;
		//}

		table[index].push_back({ key, value });
	}
	bool find(const string& key, V& value)
	{
		size_t index = hashFunction(key);
		for (auto& v : table[index])
		{
			if (v.first == key)
			{
				value = v.second;
				return true;
			}
		}
		return false;
	}
	void erase(const string& key, const V& value)
	{
		size_t index = hashFunction(key);
		table[index].remove(pair{ key,value });
	}

	void erase(const string& key)
	{
		size_t index = hashFunction(key);
		auto& bucket = table[index];
		for (auto it = bucket.begin(); it != bucket.end(); ++it)
		{
			if (it->first == key)
			{
				bucket.erase(it);
				return;
			}
		}
	}
};
int main()
{
	double asd;
	///auto qweawe = &asd;

	HashTable<int> ht(64);
	auto qweawe123 = ht;
	ht.insert("안녕", 1);
	ht.insert("사과", 3);
	ht.insert("바나나", 5);
	ht.insert("이히히히", 3);
	ht.erase("안녕");
	int data = 0;
	if (ht.find("이히히히", data))
	{
		cout << data << endl;
	}
}
