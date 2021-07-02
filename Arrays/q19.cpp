//https://leetcode.com/problems/peak-index-in-a-mountain-array/
int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size()-1;
        int i;
        for(i=1;i<n;++i) if(arr[i-1]<arr[i] && arr[i] > arr[i+1]) break;
        return i;
    }
