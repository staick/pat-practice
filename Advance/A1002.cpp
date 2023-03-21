#include <cstdio>

int main() {
    int count;
    scanf("%d", &count);
    int e;
    double c;
    double p[1001]={0};
    while (count--) {
        scanf("%d", &e);
        scanf("%lf", &c);
        p[e] += c;
    }
    scanf("%d", &count);
    while (count--) {
        scanf("%d", &e);
        scanf("%lf", &c);
        p[e] += c;
    }
    count = 0;
    for (int i = sizeof(p) / sizeof(p[0]) - 1; i >= 0 ; i--) {
        if (p[i]) {
            count++;
        }
    }
    printf("%d", count);

    for (int i = sizeof(p) / sizeof(p[0]) - 1; i >= 0 ; i--) {
        if (p[i]) {
            printf(" %d %.1f", i, p[i]);
        }
    }

    return 0;
}

