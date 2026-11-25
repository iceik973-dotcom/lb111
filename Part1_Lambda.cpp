#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    const std::vector<int> input{-4,-1,0,2,3,6,10};
    std::vector<long long> result(input.size());
    std::transform(input.begin(),input.end(),result.begin(),[](int n){long long x=n;return x*x*x;});
    std::for_each(result.begin(),result.end(),[](long long x){std::cout<<x<<' ';});
    std::cout<<"\nEmpty size: "<<std::vector<long long>{}.size()<<'\n';
}
