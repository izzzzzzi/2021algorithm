#include <iostream>

using namespace std;

int main() {
    int n, k, arr[10], count = 0;
    
    cin >> n >> k;
    
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; k > 0;) {
        if (arr[i] > k) {
            i--;
        }
        if (arr[i] <= k) {
            k -= arr[i];
            count++;
        }
    }
    cout << count;
}