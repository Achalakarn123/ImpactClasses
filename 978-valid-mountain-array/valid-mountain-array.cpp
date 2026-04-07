class Solution {
public:
    bool validMountainArray(vector<int>& arr)
    {
        if(arr.size()<3)
        {
         return false;
        }
        int i=0;
        while(arr[i+1]>arr[i] && i + 1 < arr.size() )
        {
            i++;
        }
        if(i==0 || i==arr.size()-1)
        {
            return false;
        }
        while(i + 1<arr.size()&&arr[i+1]<arr[i] )
        {
            i++;
        }
        return i == arr.size()-1;   
    }
};