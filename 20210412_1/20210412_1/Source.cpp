/*
1. 50보다 작은 5의 배수를 출력하세요

#include<stdio.h>
void main() {
	for (int _inumber0 = 5; _inumber0 <= 50; _inumber0+=5) {
		printf("%d \n", _inumber0);
	}
	fgetc(stdin);
}
*/

/*
2. 1단 ~ 9단 까지 구구단을 출력하세요

#include<stdio.h>
void main() {
	for (int _inumber0 = 1; _inumber0 <= 9; _inumber0++) {
		printf ("=== %d 단 ==== \n", _inumber0);
		for (int _inumber1 = 1; _inumber1 <= 9; _inumber1++) {
			printf("%d * %d = %d \n", _inumber0, _inumber1, _inumber0 * _inumber1);
		}
		printf("\n");
	}
	fgetc(stdin);
}
*/

/*
for loop를 이용하여 아래 와같이 별을 출력하세요.
3-1

#include<stdio.h>
void main() {
	for (int _inumber0 = 0; _inumber0 < 5; _inumber0++) {
		for (int _inumber1 = 0; _inumber1 <= _inumber0; _inumber1++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}
*/

/*
3-2

#include<stdio.h>
void main() {
	for (int _inumber0 = 5; _inumber0 >= 0; _inumber0--) {
		for (int _inumber1 = _inumber0; _inumber1 >= 1; _inumber1--) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}
*/

/*
3-3

#include<stdio.h>
void main() {
	for (int _inumber0 = 5; _inumber0 >= 2; _inumber0--) {
		for (int _inumber1 = _inumber0; _inumber1 >= 1; _inumber1--) {
			printf("*");
		}
		printf("\n");
	}
	for (int _inumber2 = 0; _inumber2 < 5; _inumber2++) {
		for (int _inumber3 = 0; _inumber3 <= _inumber2; _inumber3++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}
*/