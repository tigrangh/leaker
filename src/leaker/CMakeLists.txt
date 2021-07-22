# interface library for headers only module
add_library(leaker INTERFACE)

# modules linking to this library will include following
# directories. two options are provided for installed package
# and for in-tree source build
target_include_directories(leaker INTERFACE
    $<INSTALL_INTERFACE:include/leaker>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>)

# libraries this module links to
target_link_libraries(leaker INTERFACE )

# what to do on make install
install(TARGETS leaker
        EXPORT leaker.package
        DESTINATION ${LEAKER_INSTALL_DESTINATION_LIBRARY})

set(SRC_FILES
    global.hpp
    test.hpp)

install(FILES
    ${SRC_FILES}
    DESTINATION ${LEAKER_INSTALL_DESTINATION_INCLUDE}/leaker)

#
# add custom target simply for IDE to show the files
#
add_custom_target(leaker.include SOURCES
    ${SRC_FILES})
