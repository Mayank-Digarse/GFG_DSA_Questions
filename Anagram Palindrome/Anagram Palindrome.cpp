int isPossible (string S)
{
    unordered_map<char, int> hmap;
    for(int i = 0;i<S.size(); i++){
        hmap[S[i]]++;
    }
    int oddcnt = 0;
    for(auto i : hmap){
        if(i.second%2 == 0)
        continue;
        else
        oddcnt++;
    }
    if(S.size()%2 == 0 && oddcnt == 0){
        return 1;
    }
    else if(S.size()%2 != 0 && oddcnt == 1){
        return 1;
    }
    else{
        return 0;
    }
    
}
