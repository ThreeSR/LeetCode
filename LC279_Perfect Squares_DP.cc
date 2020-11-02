// # -*- coding: utf-8 -*-
// """
// Created on Mon Nov  2 13:35:02 2020

// @author: Three
// """
#include<iostream>
#include<vector>
class Solution {
public:
    int numSquares(int n) {
        vector<int> v(n+1,INT_MAX);
        v[0] = 0;
        v[1] = 1;
        for(int i=2;i<=n;i++){
            for(int j=1;i-j*j>=0;j++){
                v[i] = min(v[i],v[i-j*j]+1);
            }
        }
        return v[n];
    }
};

Solution res;
cout << res.numSquares(13);
