#include <iostream>
#include <numeric>
#include <ranges>
#include <vector>
long long calculate(const std::vector<int>& input){
    auto pipeline=input|std::views::filter([](int x){return x>0;})
                       |std::views::transform([](int x){return static_cast<long long>(x)*5;});
    return std::accumulate(pipeline.begin(),pipeline.end(),0LL);
}
int main(){std::cout<<"Ranges: "<<calculate({-4,-1,0,2,3,6,10})
                    <<"\nEmpty: "<<calculate({})<<'\n';}
