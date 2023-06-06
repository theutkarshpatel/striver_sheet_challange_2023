vector<vector<int>> generate(int numRows) {
        vector <vector<int>> ans;
        if(numRows>0){
            vector<int> v;
            v.push_back(1);
            ans.push_back(v);
        }
        for(int i=2;i<=numRows;i++){
            vector<int> v;
            v.push_back(1);
            vector<int> pre= ans.back();
            for(int j=2;j<i;j++){
                v.push_back(pre[j-2]+pre[j-1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
