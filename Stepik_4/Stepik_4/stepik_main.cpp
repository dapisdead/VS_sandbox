#include <iostream>

using namespace std;

void more(int x, int y) { // stepik 4_1
	if (x > y) cout << x << "\n\n\n\n";
	else cout << y << "\n\n\n\n";
}

void moreBool(int x, int y) { // stepik 4_2
	if (x > y) cout << 1 << "\n\n\n\n";
	else if (x < y) cout << 2 << "\n\n\n\n";
	else if (x == y) cout << 0 << "\n\n\n\n";
}

void more3(int x, int y, int z) { // stepik 4_3
	if (x >= y && x >= z) cout << x << "\n\n\n\n";
	else if (y >= x && y >= z) cout << y << "\n\n\n\n";
	else if (z >= x && z >= y) cout << z << "\n\n\n\n";
}

void trigon(int a, int b, int c) { // 4 проверка длин сторон на соответствие треугольнику
	bool trueA = a < b + c, 
		trueB = b < a + c, 
		trueC = c < a + b;
	if (a > 0 && b > 0 && c > 0) 
		if (trueA && trueB && trueC) cout << "YES\n\n\n\n";
		else cout << "NO\n\n\n\n";
	else cout << "NO\n" << "ќдна из сторон меньше нул€\n\n\n\n";
}

void equal3(int a, int b, int c) { // 5 проверка на равенство 2ух или 3ех чисел
	bool equal3 = a == b && b == c && a == c,
		equalAB = a == b,
		equalAC = a == c,
		equalCB = c == b;
	if (equal3) cout << 3;
	else if (equalAB || equalAC || equalCB) cout << 2;
	else cout << 0;
}

void queen(int a1, int a2, int b1, int b2) { // 9 куда может пойти ферзь
	bool difference0 = a1 - b1 == 0 || a2 - b2 == 0,
		equalPlus = a1 - b1 == a2 - b2,
		equalMinus = a1 - b1 == -1 * (a2 - b2);
	if (difference0) cout << "YES\n\n\n\n";
	else if (equalPlus || equalMinus) cout << "YES\n\n\n\n";
	else cout << "NO\n\n\n\n";
}

void rook(int a1, int a2, int b1, int b2) { // 6 куда может пойти ладь€
	if (a1 == b1 || a2 == b2) cout << "YES\n\n\n\n";
	else cout << "NO\n\n\n\n";
}

void king(int a1, int a2, int b1, int b2) { // 7 куда может пойти король
	bool a1b1 = a1 - b1 <= 1,
		b1a1 = b1 - a1 <= 1,
		a2b2 = a2 - b2 <= 1,
		b2a2 = b2 - a2 <= 1;
	if (a1b1 && b1a1 && a2b2 && b2a2) cout << "YES\n\n\n\n";
	else cout << "NO\n\n\n\n";
}

void elefant(int a1, int a2, int b1, int b2) { // 8 куда может пойти слон
	bool equalPlus = a1 - b1 == a2 - b2,
		equalMinus = a1 - b1 == -1 * (a2 - b2);
	if (equalPlus || equalMinus) cout << "YES\n\n\n\n";
	else cout << "NO\n\n\n\n";
}

void horse(int a1, int a2, int b1, int b2) { // 10 куда может пойти конь
	if ((a1 - b1 == 2 || a1 - b1 == -2) && (a2 - b2 == 1 || a2 - b2 == -1))
		cout << "YES\n\n\n\n"; 
	else if ((a1 - b1 == 1 || a1 - b1 == -1) && (a2 - b2 == 2 || a2 - b2 == -2)) 
		cout << "YES\n\n\n\n";
	else cout << "NO\n\n\n\n";
}

void chocolate(int n, int m, int k) { // 11 можно ли получить количество необходимых долек
	bool excelent = false;
	for (int i = n; i > 0; i--) {
		if (k == (n - i) * m) {
			cout << "YES\n\n\n\n";
			excelent = true;
		}
	}
	if (excelent == false) {
		for (int i = m; i > 0; i--) {
			if (k == (m - i) * n) {
				cout << "YES\n\n\n\n";
				excelent = true;
				break;
			}
		}
	}
	if (excelent == false) cout << "NO\n\n\n\n";
}

void pool(int N, int M, int X, int Y) { // 12 бассейн 
	int x1, y1;
	if (N > M) {
		if (X > M - X) x1 = M - X;
		else x1 = X;
		if (Y > N - Y) y1 = N - Y;
		else y1 = Y;
		if (x1 > y1) cout << y1;
		else cout << x1;
	}
	else {
		if (X > N - X) x1 = N - X;
		else x1 = X;
		if (Y > M - Y) y1 = M - Y;
		else y1 = Y;
		if (x1 > y1) cout << y1;
		else cout << x1;
	}
}

void sort3(int a, int b, int c) { // 13 сортировка трех чисел в пор€дке возрастани€
	if (a <= b && a <= c) {
		if (b <= c) cout << a << " " << b << " " << c;
		else cout << a << " " << c << " " << b;
	}
	else if (b <= a && b <= c) {
		if (a <= c) cout << b << " " << a << " " << c;
		else cout << b << " " << c << " " << a;
	}
	else {
		if (a <= b) cout << c << " " << a << " " << b;
		else cout << c << " " << b << " " << a;
	}
}

void box(int a1, int b1, int c1, int a2, int b2, int c2) {
	if (a1 >= a2 || a1 >= b2 || a1 >= c2) {}
}

void puzir(int a, int b, int c, int d) {
	int mass[] = { a, b, c, d };
	int x;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mass[j] > mass[j + 1]) {
				x = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < 4; i++) cout << mass[i] << " ";
}

void biMax(int a, int b, int c) { // наибольше четное число из трех
	int j = 0, x;
	int mass[3], mass1[3] = { a, b, c };
	for (int i = 0; i < 3; i++) 
		if (mass1[i] % 2 == 0) {
			mass[j] = mass1[i];
			j++;
		}
	if (j > 1) {
		for (int r = 0; r < j - 1; r++)
			for (int y = 0; y < j - 1; y++) {
				x = mass[y];
				mass[y] = mass[y + 1];
				mass[y + 1] = x;
			}
		cout << mass[0];
	}
	else if (j == 1) cout << mass[0];
	else cout << "„Єтных чисел нет";
}

int main() {
		int a, b, c;
		cin >> a >> b >> c;
		sort3(a,b,c);
		
		//“≈ст гита
		//biMax(a,b,c);

		return 0;
}




