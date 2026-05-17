const int N=2e5+7;
ll tree[4*N];
struct Segtree{
    #define lc (n<<1)
    #define rc (n<<1)+1
    
    ll combine(ll a,ll b){ // return min(a,b) for min and vice versa
        return a+b;
    } 


    void build(int n,int s,int e,vector<ll>&v){
        if(s==e){
            tree[n]=v[s];
            return;
        }
        int mid=(s+e)>>1;
        build(lc,s,mid,v);
        build(rc,mid+1,e,v);
        tree[n]=combine(tree[lc],tree[rc]);
    }


    void update(int n,int s,int e,int ind,ll val){
        if(s==e){
            tree[n]=val;
            return;
        }
        int mid=(s+e)>>1;
        if(ind<=mid) update(lc,s,mid,ind,val);
        else update(rc,mid+1,e,ind,val);
        tree[n]=combine(tree[lc],tree[rc]);
    }


    ll query(int n,int s,int e,int i,int j){
        if(j<s or e<i) return 0; // return INT_MAX for min and vice versa for max
        if(i<=s and e<=j) return tree[n];
        int mid=(s+e)>>1;
        return combine(query(lc,s,mid,i,j),query(rc,mid+1,e,i,j));
    }

};
//Segtree st;
//st.build(1,0,n-1,vector)
//st.update(1,0,n-1,index,value)
//st.query(1,0,n-1,l,r-1)
