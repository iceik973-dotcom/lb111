#include <algorithm>
#include <iostream>
#include <vector>
std::vector<int> join(const std::vector<int>& a,const std::vector<int>& b){
    std::vector<int> result;result.reserve(a.size()+b.size());
    result.insert(result.end(),a.begin(),a.end());
    result.insert(result.end(),b.begin(),b.end());return result;
}
void show(const std::vector<int>& v){
    std::cout<<"[ ";std::for_each(v.begin(),v.end(),[](int x){std::cout<<x<<' ';});std::cout<<"]\n";
}
int main(){
    const std::vector<int> a{1,2,3},b{4,5};
    std::cout<<"Before A: ";show(a);
    std::cout<<"Before B: ";show(b);
    std::cout<<"Combined: ";show(join(a,b));
    std::cout<<"After A: ";show(a);
    std::cout<<"After B: ";show(b);
    std::cout<<"Empty: ";show(join({},{}));
}
