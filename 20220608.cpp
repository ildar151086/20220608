/*
есть динамический массив, сами определяете чем он заполнен. 
Ваша задача при помощи умного указателя, просто напечатать все числа,
которые делятся и на 5 и на 3
*/

#include <iostream>
using namespace std;

void createArr(shared_ptr<int[]> &p, int size) {
	for (int i = 0; i < size; i++) {
		p[i] = rand() % 100 + 1;
	}
}

inline bool divValue(int div , int firstDive, int secondDiv) {
	if ((div % firstDive == 0) && (div % secondDiv == 0)) {
		return 1;
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int const SIZE = 1000;

	shared_ptr<int[]> ptr(new int[SIZE] {0});
	createArr( ptr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		if (divValue(ptr[i], 3, 5)) {
			cout << ptr[i] << endl;
		}
	}

	return 0;
}