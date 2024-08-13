add_library(core STATIC
	"load.cpp"
)

find_package(ExprTk REQUIRED)
target_link_libraries(core PRIVATE ExprTk::ExprTk)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
