#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int remove_Duplicates(vector<int>& nums){
            if(nums.size()==0) return 0;
            int k = 1;
            for(int i = 1; i<nums.size(); i++){
                if(nums[i] != nums[k-1]){
                    nums[k] = nums[i];
                    k++;
                }
            }
            return k;
        }
};
int main(){
    int n;
    cout<<"nhập số lượng phần tử của mảng: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i; i<nums.size(); i++){
        cin>>nums[i];
    }
    solution s;
    int k = s.remove_Duplicates(nums);
    cout<<"mảng sau khi xử lý: ";
    for(int i = 0; i<k; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\nsố lượng phần tử khác nhau là: "<<k;
    return 0;
}