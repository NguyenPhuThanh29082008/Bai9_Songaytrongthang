// Bai9_Songaytrongthang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int so;
    int nam;

    cout << "Nhap thang de ban biet so ngay trong thang: "; cin >> so;
    cout << "Nhap nam ban muon biet ngay thang cua nam do : "; cin >> nam;

    switch (so) {
    case 1:
        cout << "Thang 1 co 31 ngay\n";
        break;
    case 2:
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) 
        {
            cout << "Nam nay la nam nhuan co 29 ngay theo lich duong\n";
        }
        else 
        {
            cout << "Nam nay khong nhuan co 28 ngay theo lich duong\n";
        }
        break;
    case 3:
        cout << "Thang 3 co 31 ngay\n";
        break;
    case 4:
        cout << "Thang 4 co 30 ngay\n";
        break;
    case 5:
        cout << "Thang 5 co 31 ngay\n";
        break;
    case 6:
        cout << "Thang 6 co 30 ngay\n";
        break;
    case 7:
        cout << "Thang 7 co 31 ngay\n";
        break;
    case 8:
        cout << "Thang 8 co 31 ngay\n";
        break;
    case 9:
        cout << "Thang 9 co 30 ngay\n";
        break;
    case 10:
        cout << "Thang 10 co 31 ngay\n";
        break;
    case 11:
        cout << "Thang 11 co 30 ngay\n";
        break;
    case 12:
        cout << "Thang 12 co 31 ngay\n";
        break;

    default:
        cout << "Thang nay khong ton tai\n";
        break;
    }
        system("pause");
        return 0;
    }
