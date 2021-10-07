#include<iostream>
using namespace std;

int Colect(unsigned long long A, int p) {					
    int st=1, ch=0;

    for(int i=0;i<A;i++) {				//p-система счисления  
        ch+=st;							// Если p=2, то число One переводится в 10 СС и /D
        st*=p;							// Если p=10, то число One в 10 СС сразу /D
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
    cout<<"Введите количество тестирований ";
    cin>>N;
    int p;
	cout<<"Введите систему счисления "; 
	cin>>p;

    for(int i=0;i<N;i++) {
    	cout<<"Введите количество единиц ";
        cin>>A;
        cout<<"Введите делитель D= ";
        cin>>D;
        task(A, D, p);
    }
    return 1;
}
