find_path(ExprTk_INCLUDE_DIR
    NAMES exprtk.hpp
    PATHS "${CMAKE_SOURCE_DIR}/extlibs/ExprTk"
    DOC "Path to ExprTK header"
)
mark_as_advanced(ExprTk_INCLUDE_DIR)

if (ExprTk_INCLUDE_DIR)
    set(ExprTk_FOUND YES)
else()
    set(ExprTk_FOUND NO)
endif()

if (ExprTk_FOUND)
  set(ExprTk_INCLUDE_DIRS "${ExprTk_INCLUDE_DIR}")
  if (NOT TARGET ExprTk::ExprTk)
    add_library(ExprTk::ExprTk INTERFACE IMPORTED)
    set_target_properties(ExprTk::ExprTk PROPERTIES
      INTERFACE_INCLUDE_DIRECTORIES "${ExprTk_INCLUDE_DIR}")
  endif ()
endif ()

