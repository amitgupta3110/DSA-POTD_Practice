/*
 * @lc app=leetcode id=2483 lang=cpp
 *
 * [2483] Minimum Penalty for a Shop
 */

// @lc code=start
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int penalty = 0;
        for(int c : customers){
            if(c=='Y') penalty++;
        }
        int minPenalty = penalty;
        int ans=0;
        

        for(int i=0;i<n;i++){
            
            if(customers[i]=='Y') penalty--;
            else penalty++;

            if(penalty<minPenalty){
                ans = i + 1;
                minPenalty = penalty;
            }
        }
        return ans;
        
    }
};
// @lc code=end

