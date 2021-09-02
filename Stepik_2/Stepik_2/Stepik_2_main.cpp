#include <iostream>
#include <cmath>
/*
using namespace std;

int main() {
	/*cout << "Hello world???\n";
	printf("Hello!");

	setlocale(LC_ALL, "Russian");
	int N, K;
	
	/*cout << "Введите количество белок и орешек\n";
	cin >> N >> K;
	cout << "Количество орешек для каждой белочки = " << K % N;

	cin >> N;
	cout << N % (N / 10 * 10);

	
	cout << "\n\n\n\n\n";
	return 0;
}
*/
using namespace std;
int main() {
	/*int N;
	cin >> N;
	cout << N / 1000 + 1<< "\n";
	cout << N / 100 % 10 + 1<< "\n";
	cout << N / 10 % 10 + 1<< "\n";
	cout << N % 10 + 1<< "\n";
	//cout << (N / 1000 - N % 10) + (N / 100 % 10 - N / 10 % 10) + 1 << "\n\n\n\n";
	cout << ((N / 1000 - N % 10) * (N / 1000 - N % 10)) + 
		((N / 100 % 10 - N / 10 % 10) * (N / 100 % 10 - N / 10 % 10)) + 1 << "\n\n\n\n";*/

	int H, A, B;
	cin >> H >> A >> B;
	//cout << (H - A) / (A - B) + 1<< "\n\n\n\n";
	int count = 0;
	while (1) {
		H = H - A;
		count++;
		if (H <= 0) { 
			cout << count; 
			break;
		}
		H = H + B;
	}
	return 0;

}
