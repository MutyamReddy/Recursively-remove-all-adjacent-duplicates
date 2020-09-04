#include<bits/stdc++.h>
using namespace std;
void remv(string s,string res){
    int i,n;
    n=s.size();
    if(n==1){
        res=s;
    }else{
        for(i=0;i<n;i++){
            if(s[i]!=s[i+1]&&s[i]!=s[i-1])
            res.push_back(s[i]);
        }
    }
    if(res==s){
        cout<<res<<endl;
        return ;
    }
    res=s;
    res.clear();
    remv(s,res);
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
    string s,res;
    cin>>s;
    remv(s,res);
    }
	return 0;
 }
