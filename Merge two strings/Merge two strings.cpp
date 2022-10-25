string merge (string S1, string S2)
{
    // your code here
    string s ="";
    int i = 0 , j = 0;
    while(i<S1.size() && j < S2.size()){
        s+=S1[i++];
        s+=S2[j++];
    }
    while(i<S1.size()){
        s+=S1[i];
        i++;
    }
    while(j<S2.size()){
        s+=S2[j];
        j++;
    }
    return s;
}
