#include <cstdio>
#include <cmath>
#include <stack>
using namespace std;

int main() {
    long a, b;
    if (scanf("%ld%ld", &a, &b) != 2) {
        return -1;
    }
    long sum = a + b;

    short result;
    stack<int> s;

    if (!sum) {
        s.push(sum);
    } else {
        while (sum) {
            result = sum % 1000;
            s.push(result);
            sum /= 1000;
        }
    }

    int x;
    int i = 0;
    while (!s.empty()) {
        x = s.top();
        s.pop();
        i++;
        if (1 == i) {
            printf("%d", x);
        } else {
            printf(",%03d", abs(x));
        }
    }
    return 0;
}