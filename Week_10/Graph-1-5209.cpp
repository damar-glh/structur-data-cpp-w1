#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int temp_vertex, temp_edge, source, objective;
    bool nolsemua;
    int matrix[MAX_SIZE][MAX_SIZE]; // Menambahkan deklarasi matriks
    
    cout << " Jumlah vertex: ";
    cin >> temp_vertex;
    for (int i = 1; i <= temp_vertex; i++) {
        for (int j = 1; j <= temp_vertex; j++) {
            matrix[i][j] = 0;
        }
    }
    
    cout << " Jumlah tepi: ";
    cin >> temp_edge;
    for (int i = 1; i <= temp_edge; i++) {
        cout << " Vertex sumber " << i << ": ";
        cin >> source;
        cout << " Vertex tujuan " << i << ": ";
        cin >> objective;
        matrix[source][objective] = 1;
        matrix[objective][source] = 1;
    }
    
    int i = 1;
    bool ketemu;
    nolsemua = false;
    while (i <= temp_vertex && !nolsemua) {
        int j = 1;
        ketemu = false;
        while (j <= temp_vertex && !ketemu) {
            if (matrix[i][j] == 1) {
                ketemu = true;
            } else {
                j++;
            }
        }
        if (!ketemu) {
            nolsemua = true;
        } else {
            i++;
        }
    }
    
    if (nolsemua) {
        cout << " Graph tidak terhubung." << endl;
    } else {
        cout << " Graph terhubung." << endl;
    }
    return 0;
}

