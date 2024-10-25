#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include "../quicksort.h"

using namespace std;

/*map�� �⺻������ Ű�� �������� ���������Ѵ�. */
struct Student
{
	char name[20];
	int count;
	map<string, int> m = { {"ȫ�浿", 5}, {"�Ӳ���", 4}, {"�̼���", 3}, {"��", 1}, {"¯��", 5}};
	map<string, int>::iterator miter;
};

// �������� ������ ����
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

	// ����ü �ȿ� �ִ� map���� ȣ��
	for (s.miter = s.m.begin(); s.miter != s.m.end(); ++s.miter)
	{
		cout << s.miter->first << ' ' << s.miter->second << endl;
	}
	cout << endl;

	// sort(v.begin(), v.end(), cmp);
	s.m["��"] = 5;

	// vector ����� map ������ �����´�. 
	for (s.miter = s.m.begin(); s.miter != s.m.end(); ++s.miter)
	{
		cout << s.miter->first << ' ' << s.miter->second << endl;
	}


	return 0;
}