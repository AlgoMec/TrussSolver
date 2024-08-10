find_path(Exprtk_INCLUDE_DIR
    NAMES exprtk.hpp
    PATHS "${CMAKE_SOURCE_DIR}/extlibs/exprtk"
)

if (Exprtk_INCLUDE_DIR)
    set(Exprtk_FOUND YES)
    set(Exprtk_INCLUDE_DIR ${Exprtk_INCLUDE_DIR})
else()
    set(Exprtk_FOUND NO)
endif()

if (Exprtk_FOUND)
    add_library(Exprtk INTERFACE IMPORTED)
    target_include_directories(Exprtk INTERFACE ${Exprtk_INCLUDE_DIRS})
endif()

mark_as_advanced(Exprtk_INCLUDE_DIR)

