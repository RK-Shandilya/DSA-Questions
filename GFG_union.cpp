// BY SETS --

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> v;
       set<int> s;
   
   for(int i=0;i<n;i++){
           s.insert(arr1[i]);
        }
      
          for(int i=0;i<m;i++){
           s.insert(arr2[i]);
        }
         for(auto value:s){
             v.push_back(value);
        }
         return v;
    }
};


// M-2 --TWO POINTER ALGORITHM
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>v;
        int i=0,j=0;
        
        while(i<n && j<m){
            
            if(arr1[i]>arr2[j]){
                if(v.empty()){
                    v.push_back(arr2[j]);
                }
                else if(v.back()!=arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
            else if(arr1[i]<arr2[j]){
                 if(v.empty()){
                    v.push_back(arr1[i]);
                }
                else if(v.back()!=arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
            }
            else{
                 if(v.empty()){
                    v.push_back(arr1[i]);
                }
                else if(v.back()!=arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        while(i<n){
             if(v.empty()){
                    v.push_back(arr1[i]);
                }
                else if(v.back()!=arr1[i]){
                    v.push_back(arr1[i]);
                }
            i++;
        }
        
        while(j<m){
             if(v.empty()){
                    v.push_back(arr2[j]);
                }
                else if(v.back()!=arr2[j]){
                    v.push_back(arr2[j]);
                }
            j++;
        }
        return v;
    }
};
