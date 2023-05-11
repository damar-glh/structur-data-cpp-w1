#include <iostream>
using namespace std;

struct program{
	char name[50];
};

int main(){
	int nameStructur;
	cout << " Dasar structur itu ada : ";
	cin >> nameStructur;
	cout << endl;
	program program[nameStructur];
	for(int i=0; i < nameStructur; i++){
		cout << " Structur Data " <<(i+1)<<" = ";
		cin >> program[i].name;
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	return 0;
}
