/*무인 자판기 프로그램을 다차원 배열을 이용해 만들어 보세요*/

#include <stdio.h>

char* arr_vendingNames[3][4] = {
    {"1.우유", "2.커피", "3.주스", "4.탄산음료"},
    {"5.칸칩", "6.거북칩", "7.감자칩", "8.고구마칩"},
    {"9.안타볼", "10.초코버섯", "11.가재깡", "12.씨리얼"}
};

void PrintVendingMenu() {
    printf("\n====== 자판기 메뉴 ======\n");
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
    printf("메뉴 번호를 선택하세요 (1-12): ");
    scanf_s("%d", &menuNum);

    int row = (menuNum - 1) / 4;
    int col = (menuNum - 1) % 4;

    if (menuNum < 1 || menuNum > 12) {
        printf("잘못된 입력입니다.\n");
    }
    else {
        printf("선택한 상품: %s\n", arr_vendingNames[row][col]);
    }

    return 0;
}