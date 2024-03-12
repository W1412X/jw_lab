#ifndef SSVECTOR_HEADER
#define SSVECTOR_HEADER
class Ssvector{
    private:
    int size=0;
    int list[10];
    public:
    void push(int e);
    int& pop();
    int& getsize();
};
#endif