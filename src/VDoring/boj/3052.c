#include <stdio.h>
int main() {
	int in[10+1]; //���� 10�� �Է� ����
	int remainder_list[42 + 1] = { 0, }; //������ �� ī��Ʈ
	int temp_remainder; //������ �� �ӽ�����
	int cnt = 0; //���� �ٸ� �� ī��Ʈ

	for (int i = 0; i < 10; i++) {
		scanf("%d", &in[i]);
		temp_remainder = in[i] % 42;
		remainder_list[temp_remainder]++; //������ ����ŭ�� �迭ĭ�� +1
	}

	for (int i = 0; i < 42; i++) {
		if (remainder_list[i]) //���� 1 �̻��ϰ��
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}