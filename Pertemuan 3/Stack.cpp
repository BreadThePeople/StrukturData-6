#include <iostream>
#include <stack>
using namespace std;

int main() {
    system ("cls");
    queue<int> antrean;
    float input;

    while(cin >> input) (
        antrean.push (input);

    )

    do(
        cout << antrean.front() << ".";
        antrean.pop();
    )
        while (antrean.size() != 0);
        cout <<endl;
        system("pause");

    return 0;
}