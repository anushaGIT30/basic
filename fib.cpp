#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int t1 = 0, t2 = 1, t3;

    // Print the first term
    cout << t1;

    // Print the remaining terms if n > 1
    if (n > 1) {
        cout << " " << t2;
    }

    for (int i = 2; i < n; ++i) {
        t3 = t1 + t2;
        cout << " " << t3;
        t1 = t2;
        t2 = t3;
    }

    cout << endl;
    return 0;
}
