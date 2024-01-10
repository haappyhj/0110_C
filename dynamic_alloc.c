//동적할당:다이나믹하게 배열

#include<stdio.h>
#include<stdlib.h>

int main() {

	
	int size;
	printf("을리고 싶은 개수는?:");
	scanf_s("%d", &size);

	//int a[10];//시작하자마자 10개 배열 가짐(0부터 9까지)


	int* arr;
	arr = (int*)malloc(sizeof(int) * size); //size:개수 :arr에 주소 연결해주기

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}



	return 0;
}