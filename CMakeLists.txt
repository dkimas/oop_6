cmake_minimum_required(VERSION 3.19)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab6 main.cpp figure.h pentagon.h pentagon.cpp TIterator.h TList.cpp TList.h TListItem.cpp TListItem.h TAllocationBlock.cpp TAllocationBlock.h TStack.cpp TStack.h TStackItem.cpp TStackItem.h)
