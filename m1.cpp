#include <iostream>
using namespace std;


int main() {
	setlocale (LC_ALL,"Russian");
	int N;
	cout<<"Введите количество тестирований ";
	cin>>N;
	for (int i=0;i<N;i++) {
		int F;
		cout<<"Введите целое число F= ";
		cin>>F;
		int x1=0, x2=1, x3=0;
		while (x3 < F) {
			x3 = x1 + x2;
			x2 = x1;
			x1 = x3;
		}
		if ( F == x3 ) cout<<"Фибоначчи"<<endl;
		else cout<<"Увы!"<<endl;
	}
	return 1;
}
