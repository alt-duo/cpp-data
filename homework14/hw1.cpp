#include <iostream>
using namespace std;


int count(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return (count(n - 1) + count(n - 2)) * (n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}