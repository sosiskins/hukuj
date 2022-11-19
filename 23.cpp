#include <iostream>

using namespace std;
double qe(double r);
double RingS(double r1, double r2) {
	double s = Circles(r1) - Circles(r2);
	return s;
}
int qq(double a, double b, double c ) {
double d = b * b - 4 * a * c;
if (d > 0) return 2;
if (d == 0) return 1;
if (d < 0) return 0;  
}
int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int main() {
	//Proc16.Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
//	−1, если X < 0; 0, если X = 0; 1, если X > 0.
	//	С помощью этой функции найти значение выражения Sign(A) + Sign(B)
	//	для данных вещественных чисел A и B.
	/*-1 if X < 0;
	0, if X = 0;
	1, if X > 0.*/
	double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
	//18
/*	int s, r;
cin >> r;
	for (int i = 1; i <= 3; i++) {
		double s = qe(r);
		cout << qe(s) << endl;

	return 0;*/
	//19
/*	double n, i, g, e, r, s;
	cout >> n >> i >> g >> e >> r >> s;
	cout Rings(n , i) << endl << Rings(g , e) << endl << Rings( r , s) << endl */
}