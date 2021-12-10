// Цыбенко Дмитрий Лабораторная работа №6, фигура: пятиугольник, контейнер: список, аллокатор: стэк. 

#include <iostream>
#include <memory>
#include <cstdlib>
#include <cstring>
#include "pentagon.h"
#include "TList.h"

void menu()
{
    std::cout << "Choose an operation:" << std::endl;
    std::cout << "1) Add pentagon" << std::endl;
    std::cout << "2) Delete figure from list" << std::endl;
    std::cout << "3) Print list"  << std::endl;
    std::cout << "4) Print list with iterator"  << std::endl;
    std::cout << "0) Exit" << std::endl;
}

int main(void)
{
    int32_t act = 0;
    TList<Figure> list;
    std::shared_ptr<Figure> ptr;
    do {
        menu();
        std::cin >> act;
        switch(act) {
            case 1:
                ptr = std::make_shared<Pentagon>(std::cin);
                list.Push(ptr);
                break;
            case 2:
                ptr = list.Pop();
                break;
            case 3:
                std::cout << list << std::endl;
                break;
            case 4:
                if(!list.IsEmpty()) {
                    for(auto i : list) {
                        i->Print();
                    } 
                } else {
                    std::cout << "List is empty." << std::endl;
                }
                break;
            case 0:
                list.Del();
                break;
            default:
                std::cout << "Incorrect command" << std::endl;;
                break;
        }
    } while (act);
    return 0;
}
