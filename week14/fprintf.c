#include <stdio.h>

int main() {
	char* string = "Hello Hanbat!";
	short int data = 0xFFFFFFF0;

	FILE* p_file = fopen("nums.txt", "wt");
	if (NULL != p_file) {
		for (int i = 411; i < 432; i++) {
			if (i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, "%d ", i);
		}

		printf("파일 내용을 이렇게 썼어요");
		fclose(p_file);
	}
}