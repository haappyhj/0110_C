//�����Ҵ�:���̳����ϰ� �迭

#include<stdio.h>
#include<stdlib.h>

int main() {

	
	int size;
	printf("������ ���� ������?:");
	scanf_s("%d", &size);

	//int a[10];//�������ڸ��� 10�� �迭 ����(0���� 9����)


	int* arr;
	arr = (int*)malloc(sizeof(int) * size); //size:���� :arr�� �ּ� �������ֱ�

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}



	return 0;
}