#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n; 
    cin>>n; 

    int ans = 0; 

    for(int i=5; i<=n; i=i*5)
    {
        ans += n/i; 
    }
    
    cout<<"The trailing is: "<<ans<<endl;

    return 0; 


}