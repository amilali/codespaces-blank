#include <bits/stdc++.h>
using namespace std;

int countPair(vector<int>& arr, int k)
{
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i+1; j < arr.size(); j++) {
            int sum = arr[i] + arr[j];
            int t = log2(sum);
            if (pow(2, t) == sum) {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< countPair(arr, n) << endl;
    return 0;
}
