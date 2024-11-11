// bai7_thutrongtuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main() {
	int so;
	cout << "nhap so:";
	cin >> so;
	switch (so) {
	case 2:cout << "thuhai\n"; break;
	case 3:cout << "thuba\n"; break;
	case 4:cout << "thubon\n"; break;
	case 5:cout << "thunam\n"; break;
	case 6:cout << "thusau\n"; break;
	case 7:cout << "thubay\n"; break;
	case 8:cout << "chunhat\n"; break;
	default:cout << "khong thuoc cac ngay trong tuan\n";
	}
		return 0;
	}

	


