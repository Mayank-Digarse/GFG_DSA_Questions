#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0; i<N;i++){
           cin>>arr[i];
        }
        for(int i = N-1; i>=0 ; i--){
            cout<<arr[i]<<" ";
        }
     cout<<endl;   
    }
	
	return 0;
}
