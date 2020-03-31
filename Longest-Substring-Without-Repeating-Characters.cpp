// contains only the solution function and some important test cases

#define max(a,b) a>b?a:b

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> m;
    int ans=0;
    for(int i=0,j=0; i<s.size(); ++i){
        if(m.find(s[i])!=m.end()){
            j=max(m[s[i]],j);
        }
        ans=max(ans, i-j+1);
        m[s[i]]=i+1;
    }
    return ans;
}
/*
"abcabcbb"
"bbbbb"
" "
""
"dvdf"
"vdvdf"
"pwwkew"
"abba"
*/
