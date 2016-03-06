#include <iostream>
#include <iomanip>
using namespace std;
void Nhan(int n)
{
	long S = 0;
	int i = 1;
	long P = 1;
	while (i <= n)
	{
		P = P*i;
		S = S + P;
		i++;
	}
	cout << "Tong la :"<< " " << S;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao gia tri n : ";
		cin >> n;
	}
	while (n < 0 && cout << "Gia tri nhap vao khong hop le! Vui long nhap lai... " << endl);
	Nhan(n);
	return 0;
}
