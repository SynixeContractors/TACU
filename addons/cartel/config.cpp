#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Uniforms
            "TACU_Uniform_O_V_Cartel_01",
            "TACU_Uniform_O_V_Cartel_02",
            "TACU_Uniform_O_V_Cartel_03",
            "TACU_Uniform_O_V_Cartel_04",
            "TACU_Uniform_O_V_Cartel_05",
            "TACU_Uniform_O_V_Cartel_06",
            // Units - Grunts
            "TACU_Cartel2_U_O_Grunt_Rifleman_01",
            "TACU_Cartel2_U_O_Grunt_Rifleman_02",
            "TACU_Cartel2_U_O_Grunt_Rifleman_03",
            "TACU_Cartel2_U_O_Grunt_Rifleman_04",
            "TACU_Cartel2_U_O_Grunt_Rifleman_05",
            "TACU_Cartel2_U_O_Grunt_Rifleman_06",
            "TACU_Cartel2_U_O_Grunt_Rifleman_07",
            "TACU_Cartel2_U_O_Grunt_Rifleman_08"
            // Units - Thugs
            // Units - Enforcers
        };
        weapons[] = {
            "TACU_Uniform_O_W_Cartel_01",
            "TACU_Uniform_O_W_Cartel_02",
            "TACU_Uniform_O_W_Cartel_03",
            "TACU_Uniform_O_W_Cartel_04",
            "TACU_Uniform_O_W_Cartel_05",
            "TACU_Uniform_O_W_Cartel_06"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgFaces.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
