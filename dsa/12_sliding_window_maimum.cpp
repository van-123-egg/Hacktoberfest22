#include <bits/stdc++.h>
using namespace std;

// Brute Approach : Generate All subarray of length k and find out mamum among all
// TC: O(n*k)  || SC: O(n) : for storing maximums in array
void BruteApproach(vector<int> &vec, int n, int k)
{
    int mx = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n - k + 1; i++) // for every i
    {
        for (int j = i; j < i + k; j++) // traverse upto k
            mx = max(mx, vec[j]);

        ans.push_back(mx);
    }

    for (auto &it : ans)
        cout << it << " ";
}

// Optimised approach: using the deque and comparing the current i with dq.back()
// TC: O(n) + O(n)  || SC: O(n)
void OptimisedApproach(vector<int> &vec, int n, int k)
{
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() and (dq.front() == i - k)) // checking of given range 
            dq.pop_front();

        while (!dq.empty() and vec[dq.back()] <= vec[i]) // if smaller popback
            dq.pop_back();

        dq.push_back(i);    //insert the given element

        if (i >= k - 1) // taking maximum among the subarray
            ans.push_back(vec[dq.front()]);
    }
    for (auto &it : ans)
        cout << it << " ";
}
int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int k;
    cin >> k;
    BruteApproach(vec, n, k);
    cout << endl;
    OptimisedApproach(vec, n, k);
    return 0;
}