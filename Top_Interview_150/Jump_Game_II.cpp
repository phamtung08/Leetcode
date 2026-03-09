#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        int jump(vector<int> nums){
            int jumps = 0;
            int end = 0;
            int farthest = 0;
            for(int i=0;i<nums.size()-1;i++){
                farthest = max(farthest,i + nums[i]);
                if(i == end){
                    jumps++;
                    end = farthest;
                }
            }
            return jumps;
        }
};
int main(){
    int n;
    cout<<"nhập số lượng phần tử: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"nhập mảng: ";
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    solution s;
    int k = s.jump(nums);
    cout<<"số lần nhảy ít nhất là: "<<k;
    return 0;
}