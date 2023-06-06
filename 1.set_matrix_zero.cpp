void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int> > vec;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    pair<int,int> p{i,j};
                    vec.push_back(p);
                }
            }
        }
        for(int i=0;i<vec.size();i++){
            pair<int,int>p=vec[i];
            for(int j=0;j<n;j++){
                matrix[p.first][j]=0;
            }
            for(int j=0;j<m;j++){
                matrix[j][p.second]=0;
            }
        }
    }
