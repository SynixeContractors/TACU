// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX tacu
#define SUBPREFIX addons

#include "script_version.hpp"

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.94

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(TAC Units - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(TAC Units - COMPONENT)
#endif
