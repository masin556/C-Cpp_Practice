//break �ݺ��� break
//continue
// ��ø for �� (�߿�) 

// break : �ݺ��� �Ѱ��� ��������
//�����Է�  -> ���� ���
// 1��° : 7
// 2��° : 5
//..

#include <stdio.h>

int main() {
	for (int i = 1; ; i++) { //for�� ������ ���ͼ� k�� �Է� �޴´� 
		int k; 
		scanf("%d", &k);

		if (k == 0) { //k�� 0���� Ȯ�� 
			break; //0�̶�� �߰�ȣ ������ �ƿ� ����������.
		}// �ƴ϶�� break�ȵǰ� �Ѿ��. 

		printf("%d��°  : %d\n", i, k);
	}
}