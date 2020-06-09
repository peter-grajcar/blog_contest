file(GLOB_RECURSE files "src/*.cpp")

add_library(string STATIC ${files})

target_include_directories(string PUBLIC include)
