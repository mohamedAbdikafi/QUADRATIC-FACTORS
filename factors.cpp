#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int factors() {
	//declaring relevant variables;
	double sum, product, a,b,c;
	double x1, x2,f1,f2;
	//prompting the user;
	cout << "what is the sum?" << endl;
	cin >> sum;
	b = sum;//initializing the b;
	cout << "what is the product?" << endl;
	cin >> product;
	cout << "what is the a?" << endl;
	cin >> a;
	c = product / a;//initializing the c;
	//creating the algorithm;
	x1 =(- b + sqrt((b * b) - ( 4 * a * c))) / (2 * a);
	x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
	//reversing the values of the equation;
	f1 = -(a * x1);
	f2 = -(a * x2);
	//displaying the factors;
	cout <<"factor 1 : "<< f1 << endl;
	cout <<"factor 2 : "<< f2 << endl;
	//displaying values of equations;
	cout << " x 1 : " << x1 << endl;
	cout << " x 2 : " << x2 << endl;

	system("pause");

	return 0;

}




int main() {
	cout << factors()<< endl;
	return 0;
}