string transform(string s)
{
    
    s[0] = s[0]-32;
    for(int i = 1; i<s.size(); i++){
       
        if(s[i-1] == ' '){
            s[i] = s[i]-32;
        }
        
    }
    return s;
}
