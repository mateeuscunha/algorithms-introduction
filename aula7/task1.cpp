#include <iostream>
using namespace std;

int main() {
	float nitro, hidro, amonia, limitante;

	cin >> nitro >> hidro;
	
	if (nitro/28 > hidro/6) {
		cout << "Hidrogênio";
		limitante = hidro/6;
	} else {
		cout << "Nitrogênio";
		limitante = nitro/28;
	}
	
	
	amonia = (limitante*34);
	
	cout << endl << amonia;
	
	

	return 0;
}
 
