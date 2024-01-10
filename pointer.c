#include<stdio.h>


int main() {
	int a,b,c;
	int* pa = &a;
	int* data[] = { &a,&b,&c };
	int data[] = { 1,2,3 };
	char* data[] = { "ice","cake","b" };
	char data[] = "mega";
	//배열은 그 자체가 주소값

	char data = 'a';
	char data[] = "mega";
	char* data = "mega";
	char* data[] = { "ice","cake" };
	char* pa = a;




	return 0;
}