#include <iostream>
using namespace std;
int main(){
	string lectura1, lectura2;
	cout << "Ingrese la palabra:";
	cin >> lectura1;
	cin.ignore(256,'\n');
	cout << "Ingrese nuevamente la palabra: ";
	getline(cin>>ws,lectura2);
	cout<< "Capturando con cin>> lectura1 se obtuvo: "<< lectura1<< endl;
	cout <<"Capturando con geltine se obtuvo : "<< lectura2<<endl;
	return 0;
}