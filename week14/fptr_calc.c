#include <stdio.h>
#include "My_math.h"
void Myabs(int* p) {
	if (*p < 0) *p = (*p) * (-1);
}
int main() {
	int x = -3, y = -2;
	int sum = Sum(x,y,Myabs,NULL);
	int sub = Sub(x, y, Myabs, Myabs);
	int mul = Mul(x, y, NULL, NULL);
	int div = Div(x, y, NULL, Myabs);
	int rem = Rem(x, y, Myabs, NULL);

	printf("|%d| + %d = %d\n", x, y, sum);
	printf("|%d| - |%d| = %d\n", x, y, sub);
	printf("%d * %d = %d\n", x, y, mul);
	printf("%d / |%d| = %d\n", x, y, div);
	printf("|%d| %% %d = %d\n", x, y, rem);
	return 0;
}