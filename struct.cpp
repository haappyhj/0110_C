#include<stdio.h>

	//����ü: ������ Ÿ�� �����

void addMenu(struct Coffee *menu) {
	strcpy_s(menu[5].name, sizeof(menu[5].name), "���̽�Ŀ��");
	menu[5].price = 2400;

}
struct Coffee {
	char name[20];
	int price;
};


		int main() {
			int a = 1;
			//struct Coffee americano = { "americano",2500 }; 
			////struct Coffee�� �ϳ��� Ÿ���̴�
			//struct Coffee haxelnut = { "haxelnut",3000 };

			//printf("%s %d", americano.name, americano.price);

			struct Coffee menu[5] = {
				{"�Ƹ޸�ī��",1500},
				{"��",2500},
				{"�������",3500},
				{"�ٴҶ��",3000},
				{"������",3500},
			};
		
			int size = sizeof(menu) / sizeof(struct Coffee); // (20+4)*5 ������ (20+4)

			for (int i = 0; i < size; i++) {
				printf("%d.%s %d\n", i + 1, menu[i].name, menu[i].price);
			}

			addMenu(menu);
			
			


	



	return 0;
}