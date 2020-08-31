#include <stdio.h>
int main() {
	int a, b,c;
	scanf_s("%d %d", &a, &b);
	c = a + b;
	if (c > 0) {
		if (c % 2 == 0) {
			printf("Positive Even");
		}
		else if (c % 2 != 0) {
			printf("Positive Odd");
		}
	}
	else if (c < 0) {
		if (c % 2 == 0) {
			printf("Negative Even");
		}
		else if (c % 2 != 0) {
			printf("Negative Odd");
		}
	}
	else if (c == 0) {
		printf("zero");
	}
}