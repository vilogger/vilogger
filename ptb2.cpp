#include <iostream>
#include <math.h>

using namespace std;
main(){
	float a, b, c, delta, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo nghiem" << endl;
            } else {
               cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;;
        }
    }
    return 0;
}
