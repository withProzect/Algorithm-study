#include <stdio.h>

int main() {
	int n[3 + 1], mul, copymul, cnt = 0; //입력, 곱한 값, 곱한 값 복사본, mul 자릿수카운트
	int num[10 + 1] = { 0, }; //각각의 자릿수 카운트 저장

	for (int i = 0; i < 3; i++) { //입력
		scanf("%d", &n[i]);
	}

	mul = n[0] * n[1] * n[2]; //입력받은 값 모두 곱하기
	copymul = mul;

	while (copymul > 0) { //곱한 값의 자릿수 구하기
		copymul /= 10;
		cnt++;
	}

	for (int j = 0; j < cnt; j++) { //배열에 자릿수대로 카운트
		num[mul % 10] += 1;
		mul /= 10;
	}

	for (int k = 0; k < 10; k++) { //출력
		printf("%d\n", num[k]);
	}

	return 0;
}