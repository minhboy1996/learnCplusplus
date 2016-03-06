#include <iostream>
#include <iomanip>
using namespace std;
void TimK (int n)
{
	int i = 0;
	int S = 0;
	while ( S + i < n)
	{
		i++;
		S = S + i;
	}
	cout << "Gia tri lon nhat la k = " << " " << i;

}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao gia tri n : ";
		cin >> n;
	}
	while ( n < 0 && cout << "Gia tri nhap vao khong phu hop. Vui long nhap lai!" << endl);
	TimK(n);
	return 0;

}
