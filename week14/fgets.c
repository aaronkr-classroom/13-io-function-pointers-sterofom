#include <stdio.h>

int main(){
	char tmp[500];
	FILE* p_file = fopen("long.txt","rt");
	if (NULL != p_file) {
		while (NULL != fgets(tmp, sizeof(tmp), p_file)) {
			printf("%s", tmp);

		}
		fclose(p_file);
	}
	return 0;
}