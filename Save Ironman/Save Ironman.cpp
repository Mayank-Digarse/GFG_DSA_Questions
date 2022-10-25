bool saveIronman(string ch)
{
    // Complete the function
    int i = 0;
    int j = ch.size()-1;
    while(i<j){
        while(!isalnum(ch[i])) i++;
        while(!isalnum(ch[j])) j--;
        
        transform(ch.begin() , ch.end() , ch.begin() , :: tolower);
        
        if(ch[i++] != ch[j--]) return false;
    }
    return true;
}
