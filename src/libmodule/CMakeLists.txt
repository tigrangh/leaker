add_definitions(-DMODULE_LIBRARY)

# define the library
add_library(module
    global.hpp
    test.cpp
    test.hpp)

# libraries this module links to
target_link_libraries(module PUBLIC leaker)

# what to do on make install
install(TARGETS module
        EXPORT leaker.package
        RUNTIME DESTINATION ${LEAKER_INSTALL_DESTINATION_RUNTIME}
        LIBRARY DESTINATION ${LEAKER_INSTALL_DESTINATION_LIBRARY}
        ARCHIVE DESTINATION ${LEAKER_INSTALL_DESTINATION_ARCHIVE})

install(FILES
    global.hpp
    test.hpp
    DESTINATION ${LEAKER_INSTALL_DESTINATION_INCLUDE}/libmodule)
