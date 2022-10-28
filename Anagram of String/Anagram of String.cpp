int remAnagram(string str1, string str2)
{  
    int cnt1[26] = {0};
    int cnt2[26] = {0};
    
    for(int i = 0; i<str1.length(); i++){
        cnt1[str1[i]-'a']++;
    }
    for(int i = 0; i<str2.length(); i++){
        cnt2[str2[i]-'a']++;
    }
    int res =0;
    for(int i = 0;i<26;i++){
        res += abs(cnt1[i] - cnt2[i]);
    }
    return res;
}
