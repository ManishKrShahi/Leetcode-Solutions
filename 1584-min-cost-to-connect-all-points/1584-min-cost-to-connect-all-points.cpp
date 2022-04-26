class Solution {
public:
     static bool comparator(pair<int,pair<int,int> > v1, pair<int,pair<int,int> > v2) {

        return (v1.first < v2.first);

    }

    

    

    int find(vector<int>&parent, int i) {

        if(parent[i]==-1)

            return i;

        return find(parent, parent[i]);

    }

    

    void uni(vector<int>&parent, vector<int>&size, int x, int y) {

        

        int u = find(parent, x);

        int v = find(parent, y);

        

        if(size[u]<size[v]) {

            parent[u] = v;

        } else if (size[u]>size[v]) {

            parent[v] = u;

        } else {

            parent[v] = u;

            size[v]++;

        }

    }

    

    int minCostConnectPoints(vector<vector<int>>& p) {

        vector<pair<int,pair<int,int> > > v;

        

        for(int i =0; i<p.size(); i++) {

            for(int j=i+1;j<p.size(); j++) {

                int cost = abs(p[i][0]-p[j][0]) + abs(p[i][1]-p[j][1]);

                v.push_back(make_pair(cost, make_pair(i, j)));

            }

        }

        sort(v.begin(),v.end(), comparator);

        

        

        vector<int>parent(p.size(), -1);

        vector<int>size(p.size(),0);

        int ans = 0;

        for(int i=0; i<v.size(); i++) {

            int c = v[i].first;

            int x = v[i].second.first;

            int y = v[i].second.second;

            

            if(find(parent, x) != find(parent,y)) {

                ans = ans + c;

                uni(parent, size, x, y);

            }

        }

        return ans;

    }
        

};