cmake_minimum_required(VERSION 3.22)
project(test)

set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer -g3")
# set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address -g3")
# add_executable(asan_test address_sanitizer_test.cpp)
# add_executable(lsan_test leak_sanitizer_test.cpp)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -fPIE -pie -g")
# add_executable(tsan_test thread_sanitizer_test.cpp)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g3")
# add_executable(ubsan_test undefined_behaviour_sanitizer.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory -fPIE -pie -fno-omit-frame-pointer -g")
add_executable(msan_test memory_sanitizer_test.cpp)