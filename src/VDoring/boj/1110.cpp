#include <iostream>
using namespace std;
int main() {
	int num, backup_num; //유저 숫자 저장, 유저 숫자 백업본
	char ar[100]; //숫자 저장하는 배열

	cin >> num;

	backup_num = num;
	ar[1] = backup_num % 10; //ar[1]에 유저의 1의 자리 숫자를 저장
	backup_num /= 10; //한자리 수 줄임
	ar[0] = backup_num % 10; //ar[0]에 유저의 10의 자리 숫자를 저장

	for (int i = 0; ; i++) {
		ar[i + 2] = ar[i + 1] + ar[i]; //1의자리수 + 10의자리 끼리 더한 값을 1의자리수 다음 배열칸에 저장한다.
		if (ar[i + 2] > 9) { //다음 배열칸에 저장한 값이 10이상이면
			ar[i + 2] = ar[i + 2] % 10; //한자리수를 줄이고 저장한다.
		}
		if (ar[0] == ar[i + 1] && ar[1] == ar[i + 2]) { //만약 유저가 입력한 값과 같을경우
			cout << i + 1; //계산휫수 출력
			return 0;
		}
	}
}