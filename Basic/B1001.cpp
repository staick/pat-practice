#include <iostream>
using namespace std;

int main() {
    int ni;
    cin >> ni;
    int count = 0;
    while (ni != 1) {
        if (ni % 2) {
            ni = (ni * 3 + 1) / 2;
            count++;
        } else {
            ni /= 2;
            count++;
        }
    }
    cout << count;
}