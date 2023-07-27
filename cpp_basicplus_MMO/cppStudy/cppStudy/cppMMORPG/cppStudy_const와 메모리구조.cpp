#include <iostream>
using namespace std;


unsigned char flag; //��ȣ�� ���־� >>�� �ϴ��� ��ȣ ��Ʈ�� �������� �ʴ´�.

//�ѹ� �������� �ٲ��� ���� ����
// constant�� ���� const�� ���δ�. (������ ���ȭ �Ѵ���)
// const�� �ٿ����� �ʱⰪ�� �ݵ�� �����ؾ��Ѵ�.


// C++ ǥ�ؿ��� const�� �ٲ��� �����ϱ�. �б������̶� ����������
// �׳� �����Ϸ� (VS) ������� (���� ������ �޸𸮿� �Ҵ��� �ȵǾ��ִ�?)

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
//const int FEAR = 3; // �ϳ��� �߰� �Ǹ� �ڵ带 ��ġ�� �ʾƵ� ���� ����
const int INVINCIBLE = 3;

//��������
// [������ ����]
// .data (�ʱⰪ�� �ִ� ���)
int a = 2;

// .bss (�ʱⰪ�� ���� ���)
int b;

// .rodata (�б����� ������)
const char* msg = "Hello World!";

int main()
{
	// [���ÿ���]
	int c = 3;


#pragma region ��Ʈ ����
	//�ǽ�
	//0b0000 [����][����][����][���ߺξ�]
	//�������·� �����.
	flag = (1 << INVINCIBLE);

	//���� ���¸� �߰��Ѵ� (���� + ����)
	flag |= (1 << POLYMORPH);

	//�������� Ȯ���ϰ� �ʹ�? (�ٸ� ���´�
	//bitmask
	bool invincible = ((flag & (1 << INVINCIBLE)) != 0); //�ʿ��� ���� ����� �������� ������.
	//������ ��� �ʿ��� ���� �����ߴ�.

	// �����̰ų� ���� �������� Ȯ���ϰ� �ʹٸ�?
	//bool mask = (1  << 3) | (1 << 1); �̿� ���� �� ǥ�� ����
	bool stunOrInvincible = ((flag & 0b1010) != 0); //2���� �ϳ���� 0�� �ƴѰ����� //�� mask�� ���� �� ���� �ִ�.
#pragma endregion
}