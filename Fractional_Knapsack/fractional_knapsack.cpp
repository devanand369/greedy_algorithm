#include<bits/stdc++.h>

using namespace std;

int fractionalKnapsack(int wt[], int val[], int n, int W){
    int val_wt[n];
    for(int i=0; i<n; i++)
        val_wt[i] = val[i]/wt[i];

    // TO-DO
}

int main()
{
    int wt[] = {10, 20, 20};
    int val[] = {60, 100, 120};
    int n = sizeof(wt)/sizeof(wt[0]);
    int W = 50;

    cout<<"Maximum value be\t"<<fractionalKnapsack(wt, val, n, W)<<"\n";
}