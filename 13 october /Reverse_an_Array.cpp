#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) swap(arr[l++], arr[r--]);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    reverseArray(arr);
    for(int x: arr) cout << x << " ";
}
