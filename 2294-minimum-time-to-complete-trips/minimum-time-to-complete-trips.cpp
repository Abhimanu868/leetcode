class Solution {
public:
    bool canDo(vector<int>&Time, long long mid, int t){
        long long time = 0;
        for(int &x: Time){
            time+=mid/x;
        }
        return time>=t;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1;
        long long r = (long long) *min_element(begin(time),end(time))*totalTrips;
        while(l<r){
            long long mid = l+(r-l)/2;
            if(canDo(time,mid,totalTrips)){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};