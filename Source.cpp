#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a = 10;
	int b = 2;
	
	int tongab= tong(a,b);
	
	cout<<"tong a + b = "<<tong;
	system("pause");
	return 0;
}

int tong(int a, int b)
{
	int tong=0;
	tong=a+b;
	return tong;
}