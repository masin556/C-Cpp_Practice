#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N; // ����� ���� �Է�

	stack<int> s; // ������ ������ ���� ����

	for(int i = 0; i < N; ++i)
	{
		string command;
		cin >> command; // ��ɾ� �Է�

		if(command == "push")
		{
			int X;
			cin >> X; // push ��ɾ��� ��� ���� X�� �Է¹ް� ���ÿ� push
			s.push(X);
		}
		else if(command == "pop")
		{
			if(s.empty())
			{
				cout << -1 << endl; // ������ ��������� -1 ���
			}
			else
			{
				cout << s.top() << endl; // ������ �� ���� ������ ����ϰ� ����
				s.pop();
			}
		}
		else if(command == "size")
		{
			cout << s.size() << endl; // ������ ũ�� ���
		}
		else if(command == "empty")
		{
			cout << s.empty() << endl; // ������ ����ִ��� ���θ� ��� (��������� 1, �ƴϸ� 0)
		}
		else if(command == "top")
		{
			if(s.empty())
			{
				cout << -1 << endl; // ������ ��������� -1 ���
			}
			else
			{
				cout << s.top() << endl; // ������ �� ���� ������ ���
			}
		}
	}

	return 0;
}