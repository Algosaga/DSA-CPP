class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> rowMarker(rows, 1);
        vector<int> colMarker(cols, 1);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                  rowMarker[i]=0;
                  colMarker[j]=0;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(rowMarker[i]==0 || colMarker[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
