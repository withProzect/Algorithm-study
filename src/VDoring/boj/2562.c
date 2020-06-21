#include <stdio.h>
int main() {
	int max = 0, cnt;
	int in;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &in);
		if (max < in) {
			max = in;
			cnt = i;
		}
	}
	printf("%d\n%d", max, cnt+1);

	return 0;
}