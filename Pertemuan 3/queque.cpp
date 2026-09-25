#include <iostream>
#include <queue>
using namespace std;

int main() {
     system("cls"); // Windows only - remove or replace with system("clear") on Linux/Mac

    queue<int> antrean;
    float input;

    while (cin >> input) {
        antrean.push(input);
    }

    do {
        cout << antrean.front() << ".";
        antrean.pop();
    } while (antrean.size() != 0);

    cout << endl;
     system("pause"); // Windows only

    return 0;
}