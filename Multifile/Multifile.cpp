#include "stdafx.h"

#include "Header.h"
#include "..\Model\model.h"


int main()
{
    UI();
    View();
    Model::Model();

    auto now = time(NULL);
    clock();
    float(now) / CLOCKS_PER_SEC;
    //time points(timestamp) 
    std::chrono::system_clock::now();
    //Durations
    auto start = system_clock::now();
    for (size_t i = 0; i < 100'100'000'000; i++);
    auto stop = std::chrono::system_clock::now();
    std::chrono::duration<double> duration = stop - start;
    duration.count();


}
