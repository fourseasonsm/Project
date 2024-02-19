project(creating_menu)

set(HEADERS 
	menu.hpp
	menu_functions.hpp
	menu_item.hpp
)

set(SOURCES 
	main.cpp
	menu_functions.cpp
	menu_item.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
