#include <stdio.h>

int main() {
	int n[3 + 1], mul, copymul, cnt = 0; //�Է�, ���� ��, ���� �� ���纻, mul �ڸ���ī��Ʈ
	int num[10 + 1] = { 0, }; //������ �ڸ��� ī��Ʈ ����

	for (int i = 0; i < 3; i++) { //�Է�
		scanf("%d", &n[i]);
	}

	mul = n[0] * n[1] * n[2]; //�Է¹��� �� ��� ���ϱ�
	copymul = mul;

	while (copymul > 0) { //���� ���� �ڸ��� ���ϱ�
		copymul /= 10;
		cnt++;
	}

	for (int j = 0; j < cnt; j++) { //�迭�� �ڸ������ ī��Ʈ
		num[mul % 10] += 1;
		mul /= 10;
	}

	for (int k = 0; k < 10; k++) { //���
		printf("%d\n", num[k]);
	}

	return 0;
}