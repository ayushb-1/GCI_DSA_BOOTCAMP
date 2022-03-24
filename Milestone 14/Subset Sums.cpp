// Subset sums(GFG Problem)
class Solution
{
    public:
    void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset){
        if(ind==N){
            sumSubset.push_back(sum);
            return;
        }
        // when element picked
        func(ind+1, sum+arr[ind], arr, N, sumSubset);
        //when element not picked 
        func(ind+1, sum, arr, N, sumSubset);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;
        func(0, 0, arr, N, sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
    }
};
