#include<iostream>
#include"/home/wangxv/Files/hw/jw/cmake_learn/normalize_test/include/ssvector.h"
int main(){
    Ssvector a;
    for(int i=0;i<5;i++){
        a.push(i);
    }
    for(int i=0;i<a.getsize();i++){
        std::cout<<a.pop()<<" ";
    }
    std::cout<<std::endl;
}