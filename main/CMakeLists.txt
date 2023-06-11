add_executable(main
        main.cpp
        )

pico_enable_stdio_usb(main 1)

# pull in common dependencies
target_link_libraries(main pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(main)

# add url via pico_set_program_url
example_auto_set_url(main)
