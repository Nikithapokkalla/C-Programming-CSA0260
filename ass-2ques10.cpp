#include<stdio.h>
#include<limits.h>
int min(int a, int b){
    return a < b ? a : b;
}

int minJumps(int arr[], int n){
    int dp[n];
    int i, j;
    dp[0] = 0;
    for(i=1; i<n; i++){
        dp[i] = INT_MAX;
        for(j=0; j<i; j++){
            if(i <= j + arr[j] && dp[j] != INT_MAX){
                dp[i] = min(dp[i], dp[j] + 1);
                break;
            }
        }
    }
    return dp[n-1] == INT_MAX ? -1 : dp[n-1];
}

int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum number of jumps to reach end is %d\n", minJumps(arr, n));
    return 0;
}
