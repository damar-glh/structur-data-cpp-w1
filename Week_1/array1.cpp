#include <iostream>
using namespace std;

int main(){
	int nilaiArray[] = {21, 25, 75, 80};
	int i=0;
	
	for (int i = 0; i < 4; i ++){
		cout << " Array ke #" << (i+1) 
		<< " = " << nilaiArray[i] << endl;
	}
	
	cout << endl;
	system ("pause");
	return 0;
}
