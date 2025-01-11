#include <iostream>
 using namespace std;
 int main(){
 	string str;
 	cout<< "Escriba un texto: \n";
 	getline(cin>>ws,str);// utilizamos ws para descartar cualquier espacio en blanco al principio
 	for(int i=0;i<=str.size(); i++){
 		cout<<str[i]<<endl;
	 }
 	
 	return 0;
 }