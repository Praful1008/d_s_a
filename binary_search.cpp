#include<bits/stdc++.h>
using namespace std;


// the given array should be sorted and arranged in the order
// returns -1 if the target value is not found else return the smallest index
int search(vector<int> v, int target){
    int idx = -1;
    int low = 0, high = v.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target) idx = mid;
        if(v[mid] > target)
            high = mid - 1;
        else{
            low = mid + 1;
        }
    }
    return idx;
}

int main()
{
    vector <int> v = {1,3,5,6,7,8,9};
    cout << search(v, 5) << endl;

    return 0;
}