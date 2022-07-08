cmake_minimum_required(VERSION 3.1)

project(ClassMembersOnStack VERSION 1.0
                  DESCRIPTION "Testing classes members on stack"
                  LANGUAGES CXX)


add_executable(main main.cpp Node.cpp)

target_compile_features(main PRIVATE cxx_std_17)

