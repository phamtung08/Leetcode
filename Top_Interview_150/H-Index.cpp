#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
        int hIndex(vector<int>& citations){
            sort(citations.begin(),citations.end(),greater<int>());
            int h=0;
            for(int i=0;i<citations.size();i++){
                if(citations[i]>=i+1){
                    h = i+1;
                }
            }
            return h;
        }
};

int main(){
    int n;
    cout<<"nhập số lượng phần tử: ";
    cin>>n;
    vector<int> citations(n);
    cout<<"nhập phần tử: ";
    for(int i = 0;i<n;i++){
        cin>>citations[i];
    }
    solution s;
    int k = s.hIndex(citations); 
    cout<<"h citation: "<<k;
    return 0;
}

