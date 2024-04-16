set(TARGET_NAME ${PROJECT_NAME})

add_executable(${TARGET_NAME}
	main.c
)

#target_link_options(${TARGET_NAME} PRIVATE "--closure 1" "-sMALLOC=emmalloc" "-sINITIAL_MEMORY=33554432" "-sSINGLE_FILE" "-sENVIRONMENT=web" "-sFILESYSTEM=0" "-flto")