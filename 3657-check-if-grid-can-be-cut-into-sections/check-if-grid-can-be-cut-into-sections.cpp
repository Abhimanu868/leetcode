class Solution {
public:
    vector<vector<int>> intervals(vector<vector<int>> &intervals){
        vector<vector<int>>result;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        for(int i=1; i<n; i++){
            if(intervals[i][0]<result.back()[1]){
                result.back()[0] = min(intervals[i][0],result.back()[0]);
                result.back()[1] = max(intervals[i][1],result.back()[1]);
            }else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        //similar to intervals
        vector<vector<int>>hor;
        vector<vector<int>>ver;
        for(auto &coord:rectangles){
            int x1 = coord[0];
            int y1 = coord[1];
            int x2 = coord[2];
            int y2 = coord[3];
            hor.push_back({x1,x2});
            ver.push_back({y1,y2});
        }
        vector<vector<int>> result1 = intervals(hor);
        vector<vector<int>> result2 = intervals(ver);
        return result1.size()>=3 || result2.size()>=3;
    }
};