class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_Area=0;
        int area=0;
        int length,width;
        int D_length=0;
        int max_Diagonal=0;
        for(int i=0;i<dimensions.size();i++){
            length=dimensions[i][0];
            width =dimensions[i][1];
            D_length =(length*length)+(width*width);
            area=length*width;
            if (D_length > max_Diagonal){
                max_Diagonal=D_length;
                max_Area=area;
                
            }
            else if(D_length == max_Diagonal){
                max_Area= max(area,max_Area);
            }
            
        }
        return max_Area;

        
    }
};