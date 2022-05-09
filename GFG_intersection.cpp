// Using SETS --- 
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> s1;
        set<int> s2;
        set<int> ans;
        for(int value =0;value<n;value++){
            s1.insert(a[value]);
            ans.insert(a[value]);
        }
        for(int value =0;value<m;value++){
            s2.insert(b[value]);
            ans.insert(b[value]);
        }
        int l=s1.size()+s2.size();
        int k = ans.size();
        return l-k;
    }
};

// TWO POINTER APPROACH
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int i = 0, j = 0;
        vector<int> v;
        sort(a, a + n);
        sort(b, b + m);
        while(i < n && j < m)
        {
            if(a[i] < b[j])
                i++;
            else if(a[i] > b[j])
                j++;
            else if(a[i] == b[j])
            {
                if(v.empty()){
                v.push_back(a[i]);
                }
                if(v.back()!=a[i]){
                    v.push_back(a[i]);
                }
                i++;  j++;
            }
        }
        return v.size();
    }
};
