#include<iostream>
#include<string>
using namespace std;

string mixText(string x,string y){
	
	
	int L1 = x.size();
	int L2 = y.size();
	
	if(L1!=L2){
		return "E";
	}
	
	int i=0;
	string k= "";
	while(i<L1){
		k=k+x[i]+y[i];
		i++;
	}
	return k;
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
