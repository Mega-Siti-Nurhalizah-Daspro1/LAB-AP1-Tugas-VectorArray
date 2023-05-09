#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num = {1,2,3,0,4,5,0,0};
    int b=0;
    
    for(int i=0;i<num.size();i++){
        if(num[i],num[b]){
            swap(num[i],num[b]);
            b++;
        }
    
    }
    
    sort(num.begin(),num.end());
    
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
        

