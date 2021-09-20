#include<iostream>
#include<map>
using namespace std;
void check(int t){
    string s;
    cin>>s;
    int l=s.length();
    char a[l];
    map<char,int> m1;
    for(int i=0;i<l;i++){
        a[i]='\0';
        m1[s[i]]++;
    }
    
    map<char,int>::iterator itr;
    itr = m1.begin();

    int max = itr->second;
    char x = itr->first;
    int n=itr->second;
        
    // for(int i = 0;i<l;i++)
    // {
    //    // cout<<a[i]<<x<<s[i]<<endl;
    //     if(s[i] != x && a[i]=='\0'){
    //         a[i] = x;
    //          //cout<<max<<endl;
    //         max--;
    //         // cout<<max<<endl;
    //     }   
       
    //     if(max==0)
    //     break;
    // }
    // m1[x]=0;
    // for(itr = m1.begin();itr!=m1.end();itr++){
    //     cout<<itr->first<<itr->second<<endl;
    // }
    while(n!=0)
    {
        n=0;
    for(itr = m1.begin();itr!=m1.end();itr++){
       //cout<<itr->first<<itr->second<<endl;
       if(itr->second > max && itr->second !=0){
            max = itr->second;
            x = itr->first;
            n++;
        } 
      
    }
   // cout<<x<<" "<<max<<endl;
    if(n==0)
    break;
    for(int i = 0;i<l;i++)
    {
       // cout<<a[i]<<x<<s[i]<<endl;
        if(s[i] != x && a[i]=='\0'){
            a[i] = x;
            n++;
             //cout<<max<<endl;
            max--;
            // cout<<max<<endl;
        }   
       
        if(max==0)
        break;
    }
    if(max!=0)
    {
        cout<<"case #%d: IMPOSSIBLE"<<t<<endl;
        l=-1;
        break;
    }
    m1[x] = 0;
    }

    
    
    if(l!=-1)
    {
    cout<<"case #%d: "<<t;
    for(int i=0;i<l;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        check(t+1);
    }
    return 0;
    
}