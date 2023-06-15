
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int matrix[MAX_SIZE][MAX_SIZE];
int temp_vertex;
bool nolsemua;

void buildMatrix() {
    for (int i = 1; i <= temp_vertex; i++) {
        for (int j = 1; j <= temp_vertex; j++) {
            matrix[i][j] = 0;
        }
    }
}

void insertMatrix() {
    int temp_edge, source, objective;
    cout << " temp of edges: ";
    cin >> temp_edge;
    for (int i = 1; i <= temp_edge; i++) {
        cout << " source vertex " << i << ": ";
        cin >> source;
        cout << " objective vertex " << i << ": ";
        cin >> objective;
        matrix[source][objective] = 1;
        matrix[objective][source] = 1;
    }
}

void traversingGraph() {
    int i = 1;
    bool ketemu;
    nolsemua = false;
    while (i <= temp_vertex && nolsemua == false) {
        int j = 1;
        ketemu = false;
        while (j <= temp_vertex && ketemu == false) {
            if (matrix[i][j] == 1) {
                ketemu = true;
            } else {
                j++;
            }
        }
        if (ketemu == false) {
            nolsemua = true;
        } else {
            i++;
        }
    }
}

void print() {
    if (nolsemua == true) {
        cout << " Graph not connected." << endl;
    } else {
        cout << " Graph connected." << endl;
    }
}

int main() {
	int choice;
	menu :
	cout << "============ Graph ============== \n\n";
	cout << " Menu Graph : \n";
	cout << " 1. Undirected Graph \n";
	cout << " 2. Directed Graph \n";
	cout << " 3. Weigted Graph \n";
	cout << " 4. Selesai \n";
	cout << "--------------------------------- \n";
	cout << " Masukan pilihan anda : "; cin >> choice;
	switch(choice){
		case 1 :
			system("cls");
			cout << "======= Undirected Graph ========= \n";
			break;
		case 2 :
			system("cls");
			cout << "======== Directed Graph ========= \n";
			break;
		case 3 :
			system("cls");
			cout << "======== Weigted Graph ========== \n";
			break;
		case 4 :
			return 0;
        default:
            cout << "Pilihan tidak tersedia!\n";
            goto menu;
	}
}
