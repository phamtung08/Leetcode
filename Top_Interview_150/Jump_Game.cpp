#include<iostream>
#include<vector>
using namespace std;

class solution{
    public: 
        bool canJump(vector<int>& nums){
            int furthest = 0;
            for(int i=0;i<nums.size();i++){
                if(i>furthest){
                    return false;
                }
                furthest = max(furthest,i + nums[i]);
            }
            return true;
        }
};
int main(){
    int n;
    cout<<"nhập số lượng phần tử: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    solution s;
    bool k = s.canJump(nums);
    if(k==1){
        cout<<"True ";
    }
    else{
        cout<<"False";
    }
    return 0;
}