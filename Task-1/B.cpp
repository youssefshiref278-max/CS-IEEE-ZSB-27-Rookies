#include <iostream>
using namespace std;
int main() {
int n,count=0;
bool ton,vas,pet;
cin>>n;
cout<<"\n";

for(int i =0;i<n;i++){
    cin>>ton>>vas>>pet;
   if ((ton == 1 && vas == 1) || (ton == 1 && pet == 1) || (vas == 1 && pet == 1)){
       count++;
    }
}
cout<<count;
    return 0;
}
