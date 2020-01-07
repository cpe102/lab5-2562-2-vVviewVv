#include<iostream>
using namespace std;

string mixText(string a,string b){
	string y;
	if(a.size() == b.size()){
	int i = 0;
	while(i < a.size()){
		y = y+a[i]+b[i];
		i++;
		}
	return y;
	}else{
	return "E";
	}
}
	
int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";


	
	return 0;	
}
