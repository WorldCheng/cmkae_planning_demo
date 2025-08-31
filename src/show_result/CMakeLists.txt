project(show_result)

add_library(${PROJECT_NAME} 
  SHARED
  show_result.cpp
)



target_link_libraries(${PROJECT_NAME}
  PUBLIC 
  easyx
)