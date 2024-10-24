#include <iostream>
#include <ctime>
using namespace std;

struct TM {
	int tm_year;	
};


int main()
{
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	
	int yeardb, year = t->tm_year + 1900, age;
	char Id[20];
	cin >> Id; // 주민번호 입력 
	
	//  성별 계산 
	if (Id[7] == '1' || Id[7] == '2') 
	{
		yeardb = 1900 + ((Id[0]-48) * 10 + (Id[1]-48)); // 특정 문자열의 문자숫자를 숫자로 변환하기 위해서는 '0' 문자0의 아스키 십진수인 48을 뺀다.  	
	}	
	else
	{
		yeardb = 2000 + ((Id[0]-48) * 10 + (Id[1]-48));
	}
	
	age = year - yeardb + 1;
	
	printf("%d ", age);
	if (Id[7] == '1' || Id[7] == '3') 
		printf("M\n");
	else 
		printf("W\n");
	 
	return 0; 
}
