// money.c
#include <stdio.h>

int main() {
	int won;
	won = 10000000;
	printf("�� ���࿡�� %d\\ �ֽ��ϴ�.\n", won);

	char* easy_won = "10,000,000";
	printf("�� ���࿡�� %s\\ �ֽ��ϴ�.\n", easy_won);

	printf("+500,000\\ ����~\n");
	easy_won = "10,500,000";
	printf("�����ؼ� ���� %s\\ �ֽ��ϴ�.\n", easy_won);

	// Bitcoin
	float bc = 10.123456789;
	printf("Bitcoin ����: %.5fBC\n", bc);

	bc = bc + 0.34567;
	printf("���� Bitcoin ����: %.5fBC\n", bc);

	return 0;
}