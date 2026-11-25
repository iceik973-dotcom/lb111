#include <algorithm>
#include <iostream>
#include <optional>
#include <ranges>
#include <vector>
std::vector<int> make(){return {3,1,4};}
std::optional<int> maximum(const std::vector<int>& values){
    if(values.empty())return std::nullopt;
    return *std::ranges::max_element(values);
}
int main(){
    const auto values=make();
    if(auto result=maximum(values))std::cout<<"Maximum: "<<*result<<'\n';
    if(!maximum({}))std::cout<<"Empty vector: no maximum\n";
}
