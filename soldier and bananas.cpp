#include<bits/stdc++.h>
using  namespace std;
 
int main()
{
    int n,k,w,a;
    cin>>k>>n>>w;
    a=w*(w+1)*k/2;
    a-=n;
    if(a>=0)
   {
       cout<<a<<endl;
   }
    else cout<<"0"<<endl;
    return 0;
}
