vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) 
{
    vector<pair<int,int>>ans;
    if(vec.size()==0)
    {
        return ans;
    }
    sort(vec.begin(),vec.end());
    pair<int,int>p;
    p=vec[0];
    for(auto it:vec)
    {
        if(p.second>=it.first)
        {
            p.second=max(p.second,it.second);
        }
        else
        {
            ans.push_back(p);
            p=it;
        }
    }
    ans.push_back(p);
    return ans;
    
}
