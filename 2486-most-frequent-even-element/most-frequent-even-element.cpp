class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
    //     unordered_map<int,int> hmap;
    //     int maxFreq=0;
    //     int result = -1;
    //     for(auto num:nums)
    //     {
    //         if(num%2==0)
    //         {
    //           hmap[num]++;
    //         }
    //     }
    //    for(auto &entry : hmap)
    //     {
    //         int evenNum = entry.first;
    //         int freq=entry.second;
    //         if(freq>maxFreq || (freq==maxFreq && evenNum < result))
    //         {
    //         maxFreq=freq;
    //         result=evenNum;
    //     }
    //     }
    //     return result;
 map<int,int>newArray;
  int maxFreq=0;
    int element=-1;
for(auto num:nums)
{
    if(num%2==0)
    {
      newArray[num]++;
    }
}
    
   
    for(auto &num:newArray)
    {
        int hF=num.second;
        int hE=num.first;
        if(hF>maxFreq || (hF==maxFreq && hE<element))
        {
            maxFreq=hF;
            element=hE;
        }  
    }

return element;
    }
};


// most frequent even element
// even elements
// maximum freq nikal of smaller element that is even
// first 

// find out even elements




















