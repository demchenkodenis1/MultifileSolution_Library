#include "stdafx.h"

#include "Header.h"
#include "..\Model\model.h"
#include "library.cpp"

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

    std::vector<UniqName> names;
    for (size_t i = 0; i < 10; i++) {
        UniqName tmp{ i + 1, 'a' + i };
        names.push_back(tmp);
    }
    for (const auto &name : names) { //range base for // for each
        std::cout << name.id << ' ' << name.name << '\n';
    }
    UniqName tmp;
    tmp.id = names.back().id + 1;
    tmp.name = 'r';
    names.push_back(tmp);
    for (size_t i = 0; i < names.size(); i++) {
        std::cout <<
            "index - " << i << ' ' <<
            "id - " << names[i].id
    }

}
