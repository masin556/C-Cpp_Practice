#include "../help.h"

class Time
{
public:
	Time() : h(0), m(0), s(0) { cout << "������" << endl; }
	Time(int s_) : Time()
	{
		this->s = s_;
		cout << "1��° Time" << endl;
	}

	Time(int m_, int s__) : Time(s__)
	{
		this->m = m_;
		cout << "2��° Time" << endl;
	}
	Time(int h_, int m__, int s___) : Time(m__, s___)
	{
		this->h = h_;
		cout << "3��° Time" << endl;
	}

	int GetTime()
	{
		cout << "GetTime" << endl;
		return s;
	}

	void SetTestTime(int a_)
	{
		cout << "SetTestTime" << endl;

	}

private:
	int h;
	int m;
	int s;
};

int main()
{
	Time c1(2);
	Time Set(50);

	cout << Set.GetTime() << endl;
}