#include <iostream>
#include "Hash.h"

using namespace std;

int main()
{
	HashTable hash;

	hash.set(1, "이운재");
	hash.set(4, "최진철");
	hash.set(20, "홍명보");
	hash.set(6, "유상철");
	hash.set(22, "송종국");
	hash.set(21, "박지성");
	hash.set(5, "김남일");
	hash.set(10, "이영표");
	hash.set(8, "최태욱");
	hash.set(9, "설기현");
	hash.set(14, "이천수");


	cout << "1번 선수: " << hash.get(1) << endl;
	hash.remove(1);
	cout << "1번 선수: " << hash.get(1) << endl;
	cout << "21번 선수: " << hash.get(21) << endl;

	return 0;
}