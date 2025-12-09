#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a / b;
}
int rem(int a, int b) {
	return a % b;
}
int main() {
	int(*p[5])(int, int) = { &sum,&sub,&mul,&div,&rem}, i;
	int x = 9, y = 4;
	char op_table[5] = { '+', '-', '*', '/', '%'};
	for (i = 0; i < sizeof(op_table); i++)printf("%d %c %d = %d\n", x, op_table[i], y, (*p[i])(x, y));
}