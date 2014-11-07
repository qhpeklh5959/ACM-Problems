#include <cstdio>
#include <ctime>
#include <climits>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        int a = rand() % 10000 + 1;
        int b = rand() % 10000 + 1;
        cout << a << " " << b << endl;
    }
    return 0;
}
