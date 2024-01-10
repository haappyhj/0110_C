#include<stdio.h>

	//구조체: 나만의 타입 만들기

void addMenu(struct Coffee *menu) {
	strcpy_s(menu[5].name, sizeof(menu[5].name), "아이스커피");
	menu[5].price = 2400;

}
struct Coffee {
	char name[20];
	int price;
};


		int main() {
			int a = 1;
			//struct Coffee americano = { "americano",2500 }; 
			////struct Coffee가 하나의 타입이다
			//struct Coffee haxelnut = { "haxelnut",3000 };

			//printf("%s %d", americano.name, americano.price);

			struct Coffee menu[5] = {
				{"아메리카노",1500},
				{"라떼",2500},
				{"헤이즐넛",3500},
				{"바닐라라떼",3000},
				{"연유라떼",3500},
			};
		
			int size = sizeof(menu) / sizeof(struct Coffee); // (20+4)*5 나누기 (20+4)

			for (int i = 0; i < size; i++) {
				printf("%d.%s %d\n", i + 1, menu[i].name, menu[i].price);
			}

			addMenu(menu);
			
			


	



	return 0;
}