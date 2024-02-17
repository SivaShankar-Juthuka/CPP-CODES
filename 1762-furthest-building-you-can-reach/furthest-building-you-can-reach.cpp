class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i=0, diff =0; 
        for(i=0; i<heights.size()-1; i++){ 
            diff = heights[i+1]-heights[i];
            if(diff <= 0){
                continue;
            }

            bricks -= diff; 
            pq.push(diff);
            // cout << diff << " " << pq.top() << " " << bricks <<" ";
            if(bricks < 0){
                bricks += pq.top(); 
                // cout << bricks<<" bricks \n";
                pq.pop();
                ladders--; 
            }
            cout << "\n";
            if(ladders < 0) break;
        }
        return i;
        }
};