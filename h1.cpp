#include<iostream>
using namespace std;

int Colect(unsigned long long A, int p) {					
    int st=1, ch=0;

    for(int i=0;i<A;i++) {				//p-������� ���������  
        ch+=st;							// ���� p=2, �� ����� One ����������� � 10 �� � /D
        st*=p;							// ���� p=10, �� ����� One � 10 �� ����� /D
    }								

    return ch;
}

void task(unsigned long long A, int D,int p) {
    unsigned long long One = Colect(A,p);
    cout<<One % D<<endl;
}


int main() {
	setlocale (LC_ALL,"RUS");
    int N, D;
	unsigned long long  A;
    cout<<"������� ���������� ������������ ";
    cin>>N;
    int p;
	cout<<"������� ������� ��������� "; 
	cin>>p;

    for(int i=0;i<N;i++) {
    	cout<<"������� ���������� ������ ";
        cin>>A;
        cout<<"������� �������� D= ";
        cin>>D;
        task(A, D, p);
    }
    return 1;
}
