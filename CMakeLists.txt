cmake_minimum_required(VERSION 3.1.0)

set(CXX_STANDARD 20)

project(yamlp VERSION 0.1.0)

add_executable(${PROJECT_NAME}
    src/activation_functions/activation_tanh.cpp
    src/derivatives_of_activation_functions/derivative_of_activation_tanh.cpp
    src/function.cpp
    src/perceptron.cpp
    src/yamlp.cpp
    main.cpp
)
include_directories(include)
include_directories(include/activation_functions)
include_directories(include/derivatives_of_activation_functions)
include_directories(src)
include_directories(src/activation_functions)
include_directories(src/derivatives_of_activation_functions)
#add_library(glad STATIC glad/src/glad.c)

#target_link_libraries(ogl OpenGL::GL)

#target_link_libraries(${PROJECT_NAME}
#	${OPENGL_LIBRARY} # filled by "find_package(OpenGL REQUIRED)"
#	${GLFW_LIBRARY}
#	${GLEW_LIBRARY}
#)

#target_link_libraries(${PROJECT_NAME} dl glfw glad)
