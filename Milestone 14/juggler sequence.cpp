class solution{
    public:
    void answer(vector<int> &ans, int n){
    if(n==1){
    ans.push_back(n);
    return;
    }
    ans.push_back(n);
    if(n%2==0){
        n=pow(n,0.5);
        answer(ans,n);
        }
    else{
        n=pow(n,1.5);
        answer(ans,n);
    }
}
vector<int> jugglerSequence(int N){
    vector<int>ans;
        answer(ans,N);
        return ans;
}
};