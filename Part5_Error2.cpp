#include <iostream>
int main(){
    int k=2;
    auto by_value=[k](int x){return x*k;};
    auto by_reference=[&k](int x){return x*k;};
    k=10;
    std::cout<<"By value: "<<by_value(3)<<"\nBy reference: "<<by_reference(3)<<'\n';
}
