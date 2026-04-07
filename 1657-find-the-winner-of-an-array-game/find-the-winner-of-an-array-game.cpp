class Solution {
public:
    int getWinner(vector<int>& arr, int k) 
    {
       int currWinner=arr[0];
       int winCount=0;
        map<int,int>freqArr;
        for(int i=1;i<arr.size();i++)
        {
          if(currWinner>arr[i])
          {
            winCount++;
          }
          else
          {
            currWinner=arr[i];
            winCount=1;
          }
          if(winCount==k) return currWinner;
        }
        return currWinner;
    }
};