#include <iostream>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;

int findMedian(vector<int> v){
    int n= v.size();
    if(n%2==0){
        int median = (n/2) - 1;
        return (v[median]+v[median+1])/2 ;
    }else{
        int median = ceil(n/2.0) - 1;
        return v[median];
    }
}

int main()
{
    int n;
    vector<int> v;
    while(cin >> n){
        v.push_back(n);
        sort(v.begin(),v.end());
        if(v.size() == 0){
            cout<<0<<"\n";
        }else if(v.size() == 1){
            cout<<n<<"\n";
        }else{
            cout<<findMedian(v)<<"\n";
        }
    }

    return 0;
}