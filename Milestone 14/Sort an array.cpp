void insert(vector<int> &v, temp)
{
    if(v.size==0 || temp>= v[v.size()-1])
    {
        v.push_back();
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    inert(v,temp);
    v.push_back(val);
    return;

}
void sort(vector<int> &v)
{
    if(v.size()==1)
    return;

    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);

    insert(v,temp);
}
 