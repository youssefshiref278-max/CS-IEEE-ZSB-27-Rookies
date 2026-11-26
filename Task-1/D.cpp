#include <iostream>
using namespace std;
int main() {
int t,n1,n2,n3;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n1>>n2>>n3;
    if((n1+n2)==n3 ||(n1+n3)==n2 ||(n2+n3==n1)){
        cout<<"YES"<<"\n"; 
    }
    else 
    cout<<"NO"<<"\n";
}
    return 0;
}
