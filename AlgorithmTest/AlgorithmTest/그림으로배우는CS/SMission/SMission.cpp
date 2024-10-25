#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include "../quicksort.h"

using namespace std;

/*map은 기본적으로 키를 기준으로 오름차순한다. */
struct Student
{
	char name[20];
	int count;
	map<string, int> m = { {"홍길동", 5}, {"임꺽정", 4}, {"이순신", 3}, {"나", 1}, {"짱구", 5}};
	map<string, int>::iterator miter;
};

// 오름차순 정렬을 위한
static bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second == b.second)
		return a.first > b.first;
	return a.second < b.second;
}

int main()
{
	struct Student s;
	// vector<pair<string,int>> v(s.m.begin(), s.m.end());

	// 구조체 안에 있는 map으로 호출
	for (s.miter = s.m.begin(); s.miter != s.m.end(); ++s.miter)
	{
		cout << s.miter->first << ' ' << s.miter->second << endl;
	}
	cout << endl;

	// sort(v.begin(), v.end(), cmp);
	s.m["나"] = 5;

	// vector 선언된 map 형식을 가져온다. 
	for (s.miter = s.m.begin(); s.miter != s.m.end(); ++s.miter)
	{
		cout << s.miter->first << ' ' << s.miter->second << endl;
	}


	return 0;
}