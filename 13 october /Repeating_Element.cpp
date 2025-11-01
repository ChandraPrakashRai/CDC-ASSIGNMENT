int findRepeating(vector<int>& arr) {
    unordered_set<int> s;
    for(int x : arr) {
        if(s.count(x)) return x;
        s.insert(x);
    }
    return -1;
}
