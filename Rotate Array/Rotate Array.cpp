#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t , s , r;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>r;
        int a[s];
        for(int i =s-r; i<s ;i++){
            cin>>a[i];
        }
        for(int i =0 ; i<s-r; i++){
            cin>>a[i];
        }
        for(int i = 0; i<s; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
	return 0;
}
