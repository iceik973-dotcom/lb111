#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
class InRangeSum {
    int a_,b_; long long sum_=0;
public:
    InRangeSum(int a,int b):a_(a),b_(b){}
    void operator()(int x){if(a_<=x&&x<=b_)sum_+=x;}
    long long sum()const{return sum_;}
};
int main(){
    const std::vector<int> data{-4,-1,0,2,3,6,10};
    auto functor=std::for_each(data.begin(),data.end(),InRangeSum{0,6});
    auto lambda=std::accumulate(data.begin(),data.end(),0LL,
        [a=0,b=6](long long s,int x){return s+((a<=x&&x<=b)?x:0);});
    std::cout<<"Functor: "<<functor.sum()<<"\nLambda: "<<lambda<<'\n';
}
