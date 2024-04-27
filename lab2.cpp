#include <iostream>

using namespace std;

int main () {
    int rows;
    int columns;

     do {
        cout << "Enter the number of rows (not exceeding 3): ";
        cin >> rows;
    } while (rows <= 0 || rows > 3);

    do {
        cout << "Enter the number of columns (not exceeding 3): ";
        cin >> columns;
    } while (columns <= 0 || columns > 3);

    
    double** dynamicArrayAllocate = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArrayAllocate[i] = new double[columns];
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArrayAllocate[i][j];
        }
    }

    
    cout << "Values of the 2D array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << dynamicArrayAllocate[i][j] << " ";
        }
        cout <<endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArrayAllocate[i];
    }
    delete[] dynamicArrayAllocate;

    return 0;
}
