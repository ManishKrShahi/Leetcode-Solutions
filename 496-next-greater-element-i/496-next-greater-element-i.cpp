class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        int n1 = nums1.size();
        int n2 = nums2.size();
        st.push(-1);
        for(int i=nums2.size()-1;i>=0;i--){
		    while(nums2[i]>st.top() && st.top() != -1){
                st.pop();
            }
		    mp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
		vector<int> res(n1);
        for(int i=0;i<n1;i++){
            if(mp.find(nums1[i]) != mp.end()){
                res[i] = mp[nums1[i]];
            }
        }
        return res;
    }
};