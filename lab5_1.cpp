#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int i = 0 ;
	while(i<N){
		cout << "Name of student = ";
		cin >> name[i] ;
		cout << "Age of student = ";
		cin >> age[i] ;
		i++;
	}
	
	
	int y;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> y;
	cout << "--------------------------------------\n";
	
	int j = 0 ;
	while(j<N){
		if(age[j]==y){
			cout << name[j] << "\n";
		}
		j++;
	}

	
	cout << "--------------------------------------\n";
	
	return 0;
}
