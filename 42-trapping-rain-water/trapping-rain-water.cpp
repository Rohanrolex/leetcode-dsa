 
class Solution {
public:
    int trap(vector<int>& height) { 
int water =0;
int left =0 ;
int right = height.size()-1;

int leftmax =height[left];
int rightmax = height[right];


while(left< right){
    if(height[left] < height[right]){
        leftmax = max(leftmax , height[left]);
        water += leftmax - height[left];
        left++;
    }else{
          rightmax = max(rightmax , height[right]);
        water += rightmax - height[right];
        right--;
    }

}



        return water;
    }
};