#include <iostream>

using namespace std;

int main()
{
    int x; //4
    cout << " Masukkan Bilangan Pertama : ";
    cin >> x;

    int y; //5
    cout << " Masukkan Bilangan Kedua : ";
    cin >> y;

    // Menukar Bilangan
    int temp = x;
    x = y;
    y = temp;

    cout << "setelah ditukar : " << endl;

    cout << "Bilangan Pertama : " << x << endl;

    cout << "Bilangan Kedua : " << y << endl;
    return 0;
}
