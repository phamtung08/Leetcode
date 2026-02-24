#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
    int removeDumplicates(vector<int>& nums){
        int n = nums.size();
        if(n<=2) return n;

        int i = 2;
        for(int j = 2; j<n; j++){
            if(nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
int main(){
    int n;
    cout<<"nhập số lượng phần tử mảng: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"nhập mảng: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    solution s;
    int k = s.removeDumplicates(nums);
    cout<<"mảng sau khi xử lý là: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\nsố phần tử hợp lệ là: "<<k;
    return 0;
}