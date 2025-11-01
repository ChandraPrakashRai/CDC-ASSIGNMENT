int maxFreqCount(vector<int>& nums) {
    unordered_map<int,int> mp;
    int maxFreq = 0;
    for(int x : nums) maxFreq = max(maxFreq, ++mp[x]);
    int count = 0;
    for(auto &p : mp) if(p.second == maxFreq) count++;
    return count;
}
