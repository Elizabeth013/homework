#include <iostream>
using namespace std;

int task(int V1, int V2, int k) {
	if ( V1>V2) k=V1-V2;
	else k=V2-V1;
	return k;
}
int task2(int V1,int V2,int V3) {
	int x, y;
	x=V1;
	y=V2;
	while (V1<V3) {
		V1=V1+x;
	}
	while (V2<V3) {
		V2=V2+y;
	}
	if (V1== V3 || V2==V3) return V3; 
	else return 0;
}
int main() {
	setlocale (LC_ALL,"Russian");
	int N;
	cout<<"Введите количество тестирований ";
	cin>>N;
	for (int i=0;i<N;i++) {
		int V1, V2, V3, k;
		cout<<"Введите объем первого ведра ";
		cin>>V1;
		cout<<"Введите объем второго ведра ";
		cin>>V2;
		cout<<"Введите объем, который нужно отмерить ";
		cin>>V3;
		if ( task(V1,V2,k)== V3 || V1+V2==V3 || task2(V1,V2,V3)==V3) cout<<"ДА!"<<endl;
		else cout<<"Нет!"<<endl;		
	}
	return 1;
}
