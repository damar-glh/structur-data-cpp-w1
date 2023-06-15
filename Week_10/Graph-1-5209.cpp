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
    cout << " Jumlah tepi: "; cin >> temp_edge;
    for (int i = 1; i <= temp_edge; i++) {
        cout << " Vertex sumber " << i << ": "; cin >> source;
        cout << " Vertex tujuan " << i << ": "; cin >> objective;
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
        cout << " Graph tidak terhubung." << endl;
    } else {
        cout << " Graph terhubung." << endl;
    }
}
int main() {
    cout << " Jumlah vertex : "; cin >> temp_vertex;
    buildMatrix();
    insertMatrix();	
    traversingGraph();
    print();
    return 0;
}

