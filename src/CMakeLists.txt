SET(LEAKER_INSTALL_DESTINATION_RUNTIME .)
SET(LEAKER_INSTALL_DESTINATION_LIBRARY .)
SET(LEAKER_INSTALL_DESTINATION_ARCHIVE .)
SET(LEAKER_INSTALL_DESTINATION_INCLUDE .)

if( NOT WIN32 )
    # don't skip the full RPATH for the build tree
    SET(CMAKE_SKIP_BUILD_RPATH  FALSE)

    # when building, don't use the install RPATH already
    # (but later on when installing)
    SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)

    SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}")
endif()

add_subdirectory(leaker)
add_subdirectory(libmodule)
add_subdirectory(test_leaker)

# following is used for find_package functionality
install(FILES leaker-config.cmake DESTINATION ${LEAKER_INSTALL_DESTINATION_LIBRARY})
install(EXPORT leaker.package NAMESPACE leaker:: DESTINATION ${LEAKER_INSTALL_DESTINATION_LIBRARY})
