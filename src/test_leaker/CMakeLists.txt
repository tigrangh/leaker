# define the executable
add_executable(test_leaker
    main.cpp)

# libraries this module links to
target_link_libraries(test_leaker PRIVATE module)

# what to do on make install
install(TARGETS test_leaker
        EXPORT leaker.package
        RUNTIME DESTINATION ${LEAKER_INSTALL_DESTINATION_RUNTIME}
        LIBRARY DESTINATION ${LEAKER_INSTALL_DESTINATION_LIBRARY}
        ARCHIVE DESTINATION ${LEAKER_INSTALL_DESTINATION_ARCHIVE})
