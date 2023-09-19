/*���� ���Ǳ� ���α׷��� ������ �迭�� �̿��� ����� ������*/

#include <stdio.h>

char* arr_vendingNames[3][4] = {
    {"1.����", "2.Ŀ��", "3.�ֽ�", "4.ź������"},
    {"5.ĭĨ", "6.�ź�Ĩ", "7.����Ĩ", "8.����Ĩ"},
    {"9.��Ÿ��", "10.���ڹ���", "11.�����", "12.������"}
};

void PrintVendingMenu() {
    printf("\n====== ���Ǳ� �޴� ======\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%-15s", arr_vendingNames[i][j]);
        }
        printf("\n");
    }
    printf("\n==========================\n");
}

int main() {
    PrintVendingMenu();

    int menuNum;
    printf("�޴� ��ȣ�� �����ϼ��� (1-12): ");
    scanf_s("%d", &menuNum);

    int row = (menuNum - 1) / 4;
    int col = (menuNum - 1) % 4;

    if (menuNum < 1 || menuNum > 12) {
        printf("�߸��� �Է��Դϴ�.\n");
    }
    else {
        printf("������ ��ǰ: %s\n", arr_vendingNames[row][col]);
    }

    return 0;
}