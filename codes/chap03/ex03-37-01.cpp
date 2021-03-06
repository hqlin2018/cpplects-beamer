// 例 03-37-01-singleton : ex03-37-01.cpp
#include <iostream>

using namespace std;

class Singleton
{
private:
    int num;
    static Singleton* sp;
    Singleton(int _num){num = _num;}
    Singleton(const Singleton &){}
public:
    static Singleton * getInstance(int _num);
    void handle()
    {
        if(num > 0)
        {num -= 1;}
        else
        {cout << "num is zero!" << endl;}
    }
};

Singleton* Singleton::sp = nullptr;

Singleton* Singleton::getInstance(int _num){
    if(sp == nullptr) {sp = new Singleton(_num);}
    return sp;
}

int main(){
    Singleton* sp = Singleton::getInstance(1);
    sp->handle();
    Singleton* st = Singleton::getInstance(10);
    st->handle();
}
