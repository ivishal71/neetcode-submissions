//BRUTE FORCE APPP----
// class Solution {  
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int maxW = 0;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int wid = j-i;
//                 int ht = min(height[i], height[j]);
//                 int ans = wid * ht;
//                 maxW = max(maxW, ans);
//             }
//         }
//         return maxW;     
//     }
// };




//OPTIMAL APP---
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxW = 0;
        int n = heights.size();
        int leftPointer = 0;
        int rightPointer = n-1;
        while(leftPointer < rightPointer){
            int width = rightPointer - leftPointer;
            int ht = min(heights[leftPointer], heights[rightPointer]);
            int ans = width * ht;
            maxW = max(maxW, ans);

            if(heights[leftPointer] < heights[rightPointer]){
                leftPointer++;
            }
            else{
                rightPointer--;
            }


        }
        return maxW;
        
    }
};
