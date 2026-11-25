#include <cstddef>
#include <iostream>
#include <optional>
#include <ranges>
int add_noise(int x,int noise){return x+noise;}
template<std::ranges::input_range R>
std::optional<double> average(R&& data){
    double sum=0;std::size_t n=0;
    for(int x:data){sum+=x;++n;}
    if(!n)return std::nullopt;
    return sum/static_cast<double>(n);
}
std::optional<double> sensor_average(int noise){
    auto pipeline=std::views::iota(1,50)
        |std::views::transform([noise](int x){return add_noise(x,noise);})
        |std::views::filter([](int x){return x>=10&&x<=90;});
    return average(pipeline);
}
int main(){
    if(auto result=sensor_average(3))std::cout<<"Sensor average: "<<*result<<'\n';
    if(!sensor_average(-200))std::cout<<"Empty sensor result\n";
}
