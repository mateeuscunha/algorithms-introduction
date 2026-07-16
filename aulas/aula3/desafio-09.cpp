#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float largura, altura, area, litros;
	
	cin >> largura >> altura;
	
	area=(largura*altura)*3;
	
	litros = area/2;
	
	cout << fixed << setprecision(2) << litros << " Litros";
	
    return 0;
}