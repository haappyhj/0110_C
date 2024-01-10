#include<stdio.h>




void wordChange(char data[][10]) {
		int num;
		printf("바꾸고 싶은 단어(0~3):");
		scanf_s("%d", &num);
		data[0][0] = 'z';
		getchar();
		printf("%s\n", data[num]);
		printf("바꾸고 싶은 번째");
		scanf_s("%d", &num1);
		getchar();
		printf("바꾸고 싳은 스펠링");
		scanf_s("%c", &alpha);
		data[num][num1] = alpha;

	}

int main() {
	char coffee[4][10] = {
		"americano",
		"latte",
		"valina",
		"hazelnuts",
	};

	printf("");
	return 0;
}

