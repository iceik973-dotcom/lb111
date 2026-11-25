#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
long long calculate(const std::vector<int>& input){
    std::vector<int> positive;
    std::copy_if(input.begin(),input.end(),std::back_inserter(positive),[](int x){return x>0;});
    std::vector<long long> multiplied(positive.size());
    std::transform(positive.begin(),positive.end(),multiplied.begin(),
        [](int x){return static_cast<long long>(x)*5;});
    return std::accumulate(multiplied.begin(),multiplied.end(),0LL);
}
int main(){std::cout<<"STL: "<<calculate({-4,-1,0,2,3,6,10})
                    <<"\nEmpty: "<<calculate({})<<'\n';}
