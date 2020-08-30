#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, i, j, x1, k, m;
	scanf("%d", &x);
	x1 = (x * 2) - 1;
	for (i = 0; i < x1; i++) {
		if (i < x - 1) {
			for (j = 0; j < x1; j++) {
				if (j > i && j < x1 - 1 - i) {
					printf("   ");
				}
				else printf("*  ");
			}
		}
		else if (i == x - 1) {
			for (j = 0; j <= x1 - 1; j++) {
				printf("*  ");
			}
		}
		else {
			m = i;
			for (j = 0; j < x1; j++) {
				if (m < x1 || i <= j) {
					m++;
					printf("*  ");
				}
				else printf("   ");
			}
		}
		printf("\n");
	}
}