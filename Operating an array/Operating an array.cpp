
bool searchEle(int a[],int x)
{
    int n = sizeof(a)/sizeof(a[0]);
       for(int i = 0 ;i<n; i++){
           if(a[i] == x){
               return true;
           }
       }
      return false;
}
bool insertEle(int a[],int y,int yi)
{
     int n = sizeof(a)/sizeof(a[0]);
     for(int i = n; i>yi; i--){
         a[i] = a[i-1];
     }
     a[yi] = y;
     return true;
    
}
bool deleteEle(int a[],int z)
{
int n = sizeof(a)/sizeof(a[0]);
 for(int i = 0 ; i<n;i++){
     if(a[i] == z){
         index = i; 
         break;
     }
 }
 for(int j = index ;j<n; j++){
     a[j] = a[j+1];
 }
}
