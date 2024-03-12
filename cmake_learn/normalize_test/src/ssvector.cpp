#include"/home/wangxv/Files/hw/jw/cmake_learn/normalize_test/include/ssvector.h"
int& Ssvector::pop(){
    if(Ssvector::getsize()!=0){
        Ssvector::size--;
    }
    return list[size+1];
};
int& Ssvector::getsize(){
    return size;
};
void Ssvector::push(int e){
    list[size]=e;
    size++;
}