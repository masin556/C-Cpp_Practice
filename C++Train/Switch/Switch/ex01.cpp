// switch��� if ������ ��ü���� if���� ������ ���� 
#include <stdio.h>

int main() {
	int choice;

	printf("�� ���� : 1\n");
	printf("�ҷ�����  : 2\n");
	printf("���� : 3\n");
	printf("ũ���� : 4\n");

	scanf("%d", &choice);

	switch (choice) { //choice ���� ���� 
	case 1: 
		printf("�� ����\n");
		break;

	case 2:
		printf("�ҷ�����\n");
		break;
		
	case 3:
		printf("����\n");
		break;

	case 4:
		printf("ũ����\n");
		break;

	default:
		printf("�߸� �Է��Ͽ����ϴ�.\n");
		break;
	}

	//C��� ������ switch������ �� Ư���ϴ� 
	/*switch�� �߰�ȣ �ۿ� ���� ������ �ؿ� printf(���)�Ұ� �ִٸ� �ȿ� break�� ������ �߰�ȣ ������ ������ ����� �ϰԵǰ����� 
	���ο� case��  break�� ������ 1���� �������� ����ϰ� �״��� case2�� �Ѿ�Եȴ�. 2�� �ƴѵ� 2�� ��ɾ ����Ǵ� �� break�� �� �ɾ�����Ѵ�. 
	switch������ else�� default�� ó���Ѵ�. */

	/*goto��� ���� �ִµ� ��� ���ϴ� ���� ����.
	���� makeChoice: �̷��������� ����� �Ʒ��� goto makeChoice; �ϰԵǸ� �ٽ� makechoice�� �ִ� ������ ����
	ó������ �ٽ� ����ϰ� �ȴ�. ���������� �Է��ϸ� break�κп��� �ɸ�
	�̰� ���ο� ���Ӱ� ��� �ϰԵ� ���� �߰� �Ǹ� �ڵ尡 �������� �Ǿ �ȵȴ�.
	�׷��� ���İ�Ƽ �ȴٰ� �ؼ� ����� ���Ѵ�. 
	*/
}