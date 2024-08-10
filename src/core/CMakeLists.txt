add_library(core STATIC
	"nodes.cpp"
	"elements.cpp"
	"loads.cpp"
)

find_package(Exprtk REQUIRED)
target_link_libraries(core PRIVATE Exprtk)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
