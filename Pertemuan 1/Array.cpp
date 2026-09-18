#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;

    int* arr = new int[n];

    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    
    cout << "imputasi data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Output data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Output Data ke-" << i + 1 << ": " << arr[i] << endl;
    }
    delete[] arr;
}