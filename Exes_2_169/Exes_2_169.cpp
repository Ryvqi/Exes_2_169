#include <iostream>
using namespace std;

int rifqi[38];    //Array dengan jumlah elemen yang didapatkan dari 15+3+20-4*5+10+5+2+3 = 38
int n;            
int i;
int lowerbond = 0;
int upperbond = n - 1;
int mid = (lowerbond + upperbond) / 2;

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 38))
		break;
		else
			cout << "\\nArray should have minimum 1 and maximum 38 elements.\n\n";
	}
}

void BinarySearch()
{
	while (rifqi[mid] = n)
	{
		cout << "Found" << endl;
		break;
	}
	if (rifqi[mid] < n)
	{
		upperbond = mid - 1;
	}
	if (rifqi[mid] > n)
	{
		lowerbond = mid + 1;
	}
	if (lowerbond <= upperbond)
	{
		mid = (lowerbond = upperbond) / 2;
	}
	else
		cout << "Not Found" << endl;
}

int main()
{
	input();
	BinarySearch();
	return 0;
}