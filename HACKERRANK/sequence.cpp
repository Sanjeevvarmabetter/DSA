#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int cloud_energy(int arr[],int n,int k) {
        int energy = 100;
        int current = 0;

        for(int i=0;i<n;i+=k) {
            current = i;
            energy = energy - 1;

            if(arr[i] == 1) {
                energy = energy - 2;

            }

        }
        return energy;
    }
};

int main() {
    int n,k;
    cin >> n;   
    cin >> k;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    Solution sol;
    int ans = sol.cloud_energy(arr,n,k);
    cout << ans << endl;
    return 0;

}