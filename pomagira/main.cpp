#include <iostream>
#include <atomic>
#include <chrono>
#include <cassert>

struct X
{
   int i;
   std::string s;
};

std::atomic<X*> p;
std::atomic<int> a;

void create_x()
{
    X* x = new X;
    x-> i = 42;
    x-> s = "hello";

    a.store(99, std::memory_order_relaxed);

    p.store(x,std::memory_order_release);
}

