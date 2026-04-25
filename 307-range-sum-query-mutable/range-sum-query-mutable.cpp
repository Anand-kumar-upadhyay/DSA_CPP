class NumArray {
public:
vector<int>v;
vector<int>seg;
    NumArray(vector<int>& nums) {
    v=nums;
    int n=nums.size();
    seg.resize(4*n);
    buildtree(v,0,0,n-1,seg);
    }



    
void buildtree(vector<int>&arr, int i, int low, int high,vector<int>&seg)
{
    if (low == high)
    {
        seg[i] = arr[low];
        return;
    }
    int mid = low + (high - low) / 2;
    buildtree(arr, 2* i+1, low, mid,seg);
    buildtree(arr, 2* i+2, mid + 1, high,seg);
    seg[i] = seg[2* i+1]+seg[2* i+2];
}


void up(long long i,long long l,long long h,long long val,long long idx,vector<int>&seg)
{
    if(l==h)
    {
       seg[i]=val;
       
       return;
    }
    int mid=l+(h-l)/2;
    if(idx<=mid)up(2*i+1,l,mid,val,idx,seg);
    else up(2*i+2,mid+1,h,val,idx,seg);
    seg[i]=(seg[2*i+1]+seg[2*i+2]);
 
}

    
    void update(int index, int val) 
    {
        up(0,0,v.size()-1,val,index,seg);

        

    }


    int func(int a,int b,int l,int h,int i,vector<int>&seg)
{
    if(l>b ||h<a)return 0;
 
    if(l>=a && h<=b)return seg[i];
    int mid=l+(h-l)/2;
    int x=func(a,b,l,mid,2*i+1,seg);
    int  y=func(a,b,mid+1,h,2*i+2,seg);
    return x+y;;
}
    
    int sumRange(int left, int right) 
    {
        return func(left,right,0,v.size()-1,0,seg);


        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */