/*************************************************************************
	> File Name: data.cc
	> Author: 
	> Mail: 
	> Created Time: 2014年11月19日 星期三 11时32分03秒
 ************************************************************************/

#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        int n = rand() % 100 + 1;
        cout << n << endl;
        for (int j = 0; j < n; j++) {
            int x = rand() % 20 + 1;
            cout << x <<  " ";
        }
        cout << endl;
    }
}