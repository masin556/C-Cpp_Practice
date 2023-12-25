/*정적 변수*/
#include "../help.h"

class Color
{
public:
	Color() : r(0), g(0), b(0), id(idCounter++) {}
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}


	int GetId() { return id; }
	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }


	static Color MixColors(Color a, Color b)
	{
		Color result((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
		return result;
	}
private:
	static int idCounter;

	int id;
	float r, g, b;
};


//정적 변수 초기화
int Color::idCounter = 1;

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color purple = Color::MixColors(red, blue);


	//번호 출력됨 
	cout << red.GetId() << endl;
	cout << blue.GetId() << endl;
	cout << purple.GetId() << endl;

	return 0;
}