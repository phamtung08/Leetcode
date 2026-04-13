#include<bits/stdc++.h>
using namespace std;
class RandomizedSet{
    public: 
        vector<int> nums;
        unordered_map<int,int> mp;
        RandomizedSet(){

        }

        bool insert (int val){
            if(mp.count(val)) return false;
            nums.push_back(val);
            mp[val] = nums.size()-1;
            return true;
        }

        bool remove(int val){
            if(!mp.count(val)) return false;

            int idx = mp[val];
            int last = nums.back();

            nums[idx] = last;
            mp[last] = idx;

            nums.pop_back();
            mp.erase(val);
            return true;
        }
        int getRandom(){
            int idx = rand() % nums.size();
            return nums[idx];
        }


};
int main(){
    RandomizedSet rs;
    while (true){
        cout<<"1. Insert"<<endl;
        cout<<"2. Remove"<<endl;
        cout<<"3. Get random"<<endl;
        cout<<"0. End"<<endl;

        int i;
        cin>>i;
        if(i==1){
            int x ;
            cin>>x;
            cout<<rs.insert(x)<<endl;
        }
        else if(i==2){
            int x;
            cin>>x;
            cout<<rs.remove(x)<<endl;
        }
        else if(i==3){
            cout<<rs.getRandom()<<endl;
        }
        else if(i==0){
            return 0;
        }
        else cout<<"VUI LÒNG NHẬP ĐÚNG!"<<endl;
    }
    return 0;
}