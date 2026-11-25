#include <cstddef>
#include <iostream>
#include <optional>
#include <ranges>
template<std::ranges::input_range R>
std::optional<double> average(R&& range){
    double sum=0.0;std::size_t count=0;
    for(auto x:range){sum+=static_cast<double>(x);++count;}
    if(!count)return std::nullopt;
    return sum/static_cast<double>(count);
}
int main(){
    auto data=std::views::iota(1,31)
        |std::views::filter([](int x){return x%3==0;})
        |std::views::transform([](int x){return x*x;});
    if(auto result=average(data))std::cout<<"Average: "<<*result<<'\n';
    auto empty=std::views::iota(1,5)|std::views::filter([](int x){return x>10;});
    if(!average(empty))std::cout<<"Empty view: no average\n";
}
