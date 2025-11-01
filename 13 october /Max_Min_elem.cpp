int findMax(vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

int findMin(vector<int>& arr) {
    return *min_element(arr.begin(), arr.end());
}
