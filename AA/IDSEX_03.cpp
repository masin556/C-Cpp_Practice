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
	cin >> Id; // �ֹι�ȣ �Է� 
	
	//  ���� ��� 
	if (Id[7] == '1' || Id[7] == '2') 
	{
		yeardb = 1900 + ((Id[0]-48) * 10 + (Id[1]-48)); // Ư�� ���ڿ��� ���ڼ��ڸ� ���ڷ� ��ȯ�ϱ� ���ؼ��� '0' ����0�� �ƽ�Ű �������� 48�� ����.  	
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
