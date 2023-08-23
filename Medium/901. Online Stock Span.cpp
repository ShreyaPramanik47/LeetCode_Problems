class StockSpanner {
public:
    stack<pair<int,int>> st;
    int index;
    StockSpanner() {
        index=0;
    }
    
    int next(int price) {
        index++;
        if(st.size()==0){
            st.push({price,index});
            return 1;
        }else{
            if(st.top().first>price){
                st.push({price,index});
                return 1;
            }else{
                while(!st.empty() && st.top().first<=price){
                    st.pop();
                }
                if(st.size()==0){
                   st.push({price,index});
                   return index;
                }else{
                    int temp=st.top().second;
                    st.push({price,index});
                    return index-temp;
                }
            }
        }
    }
};
