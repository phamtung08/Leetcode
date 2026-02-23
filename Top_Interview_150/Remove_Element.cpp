#include <iostream>
#include<vector>
using namespace std;

class solution{
    public: 
        int RemoveElement (vector<int>& nums, int val){
            int k = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] != val){
                    nums[k] = nums[i];
                    k++;
                }
            }
            return k;
        }
};
int main(){
    int val,n;
    cout<<"nhập phân tử cần xóa: ";
    cin>>val;
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    solution s;
    int k = s.RemoveElement(nums,val);
    cout<<"mảng sau khi xóa "<<val<<" là:";
    for(int i=0; i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\nsố phần tử còn lại là :"<<k;
    return 0;
}