#include <stdio.h>
int main() {
	int in[10+1]; //유저 10개 입력 저장
	int remainder_list[42 + 1] = { 0, }; //나머지 수 카운트
	int temp_remainder; //나머지 수 임시저장
	int cnt = 0; //서로 다른 값 카운트

	for (int i = 0; i < 10; i++) {
		scanf("%d", &in[i]);
		temp_remainder = in[i] % 42;
		remainder_list[temp_remainder]++; //나머지 수만큼의 배열칸에 +1
	}

	for (int i = 0; i < 42; i++) {
		if (remainder_list[i]) //값이 1 이상일경우
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}