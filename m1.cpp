#include <iostream>
using namespace std;


int main() {
	setlocale (LC_ALL,"Russian");
	int N;
	cout<<"������� ���������� ������������ ";
	cin>>N;
	for (int i=0;i<N;i++) {
		int F;
		cout<<"������� ����� ����� F= ";
		cin>>F;
		int x1=0, x2=1, x3=0;
		while (x3 < F) {
			x3 = x1 + x2;
			x2 = x1;
			x1 = x3;
		}
		if ( F == x3 ) cout<<"���������"<<endl;
		else cout<<"���"<<endl;
	}
	return 1;
}
