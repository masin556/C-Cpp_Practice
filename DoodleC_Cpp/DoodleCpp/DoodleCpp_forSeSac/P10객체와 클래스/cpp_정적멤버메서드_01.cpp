#include <iostream>

using namespace std;

class Color
{
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {}

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

private:
	float r;
	float g;
	float b;
};

Color MixColors(Color a, Color b)
{
	Color result((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	return result;
	//한번에 적을 수도 있다. 
	//return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
}

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color purple = MixColors(red, blue);

	cout << "Mixed Color (Purple): R = " << purple.GetR() << ", G = " << purple.GetG() << ", B = " << purple.GetB() << endl;

}