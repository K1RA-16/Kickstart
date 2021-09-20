#include<iostream>
#include<vector>
using namespace std;
int sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v1;
    int x;
    for(int i=0;i<n;i++){
        v1.push_back(s[i]-48);    
    }
  
    int dis,k;
    int sum=0,y,a = -1,left = 0,right =0;
    for(int i=0;i<n;i++){
        if(v1[i] == 1){
            a = i;
            continue;
        }
        else{
        k=i;
        while(v1[k] != 1 && k<n){
            k++;
        }
        if(k<n)
        right = k-i;
        if(a!=-1)
          left = i-a;
        if(left == 0)
        dis = right;
        if(right ==0)
        dis = left;
        if(right!=0 && left!=0)
        dis = min(left,right);
        
        sum += dis;
          left = 0;
          right = 0;
        }
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        cout<<"Case #"<<x<<": "<<sol()<<endl;
        x++;
    }
    return 0;
}