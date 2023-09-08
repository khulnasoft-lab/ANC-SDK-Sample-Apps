if(NOT DEFINED ENV{ANC_INC})
	message(FATAL_ERROR "ANC_INC is not defined")
endif()

if(NOT DEFINED ENV{ANC_LIB})
	message(FATAL_ERROR "ANC_LIB is not defined")
endif()

find_library(LIBANC_ABSPATH NAMES anc-audio-sdk-static PATHS $ENV{ANC_LIB})
if (NOT LIBANC_ABSPATH) 
	message(FATAL_ERROR "Can't find anc-audio-sdk")
endif()
#include_directories($ENV{ANC_INC})
#link_libraries(${LIBANC_ABSPATH})
