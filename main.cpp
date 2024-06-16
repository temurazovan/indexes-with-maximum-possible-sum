#include <iostream>

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(a) / sizeof(a[0]);
    int iMax = 0, jMax = 0, sum = 0, minusPos = -1, bestSum = a[0];

    for (int i = 0; i < size; i++) {
        sum += a[i];

        if (sum > bestSum) {
            bestSum = sum;
            iMax = minusPos + 1;
            jMax = i;
        }
        if (sum < 0) {
            sum = 0;
            minusPos = i;
        }
    }
    std::cout << "Indexes: " << iMax << " " << jMax;

    return 0;
}

