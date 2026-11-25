#include <algorithm>
#include <iostream>
#include <vector>
int main(){
    std::vector<int> values{1,-2,3,-4,5};
    auto new_end=std::remove_if(values.begin(),values.end(),[](int x){return x<0;});
    std::cout<<"Before erase size: "<<values.size()<<'\n';
    values.erase(new_end,values.end());
    std::cout<<"After erase size: "<<values.size()<<"; values: ";
    for(int x:values){
        std::cout<<x<<' ';
    }
    std::cout<<'\n';
}
