#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_SevenRings_B_AT_Assault_Maaws",
            "TACU_SevenRings_B_AT_Assault_RPG32",
            "TACU_SevenRings_B_AT_Fieldpack_RPG7",
            "TACU_SevenRings_B_Engineer_Kitbag_Black",
            "TACU_SevenRings_B_AA_Kitbag_Black",
            "TACU_SevenRings_B_Engineer_Kitbag_Tan",
            "TACU_SevenRings_B_AA_Kitbag_Tan",
            // Western Independent - Units
            "TACU_SevenRings_U_I_Western_Rifleman_01",
            "TACU_SevenRings_U_I_Western_Rifleman_02",
            "TACU_SevenRings_U_I_Western_Rifleman_03",
            "TACU_SevenRings_U_I_Western_Grenadier_01",
            "TACU_SevenRings_U_I_Western_Grenadier_02",
            "TACU_SevenRings_U_I_Western_Grenadier_03",
            "TACU_SevenRings_U_I_Western_Rifleman_AT_01",
            "TACU_SevenRings_U_I_Western_Rifleman_AT_02",
            "TACU_SevenRings_U_I_Western_Rifleman_AT_03",
            "TACU_SevenRings_U_I_Western_Autorifleman_01",
            "TACU_SevenRings_U_I_Western_Autorifleman_02",
            "TACU_SevenRings_U_I_Western_Autorifleman_03",
            "TACU_SevenRings_U_I_Western_Medic_01",
            "TACU_SevenRings_U_I_Western_Medic_02",
            "TACU_SevenRings_U_I_Western_Medic_03",
            "TACU_SevenRings_U_I_Western_Engineer_01",
            "TACU_SevenRings_U_I_Western_Engineer_02",
            "TACU_SevenRings_U_I_Western_Engineer_03",
            "TACU_SevenRings_U_I_Western_Teamleader_01",
            "TACU_SevenRings_U_I_Western_Teamleader_02",
            "TACU_SevenRings_U_I_Western_Teamleader_03",
            "TACU_SevenRings_U_I_Western_CQBSpecialist_01",
            "TACU_SevenRings_U_I_Western_CQBSpecialist_02",
            "TACU_SevenRings_U_I_Western_CQBSpecialist_03",
            "TACU_SevenRings_U_I_Western_Marksman_01",
            "TACU_SevenRings_U_I_Western_Marksman_02",
            "TACU_SevenRings_U_I_Western_Marksman_03",
            "TACU_SevenRings_U_I_Western_AA_01",
            "TACU_SevenRings_U_I_Western_Pilot_01",
            // Western Opfor - Units
            "TACU_SevenRings_U_O_Western_Rifleman_01",
            "TACU_SevenRings_U_O_Western_Rifleman_02",
            "TACU_SevenRings_U_O_Western_Rifleman_03",
            "TACU_SevenRings_U_O_Western_Grenadier_01",
            "TACU_SevenRings_U_O_Western_Grenadier_02",
            "TACU_SevenRings_U_O_Western_Grenadier_03",
            "TACU_SevenRings_U_O_Western_Rifleman_AT_01",
            "TACU_SevenRings_U_O_Western_Rifleman_AT_02",
            "TACU_SevenRings_U_O_Western_Rifleman_AT_03",
            "TACU_SevenRings_U_O_Western_Autorifleman_01",
            "TACU_SevenRings_U_O_Western_Autorifleman_02",
            "TACU_SevenRings_U_O_Western_Autorifleman_03",
            "TACU_SevenRings_U_O_Western_Medic_01",
            "TACU_SevenRings_U_O_Western_Medic_02",
            "TACU_SevenRings_U_O_Western_Medic_03",
            "TACU_SevenRings_U_O_Western_Engineer_01",
            "TACU_SevenRings_U_O_Western_Engineer_02",
            "TACU_SevenRings_U_O_Western_Engineer_03",
            "TACU_SevenRings_U_O_Western_Teamleader_01",
            "TACU_SevenRings_U_O_Western_Teamleader_02",
            "TACU_SevenRings_U_O_Western_Teamleader_03",
            "TACU_SevenRings_U_O_Western_CQBSpecialist_01",
            "TACU_SevenRings_U_O_Western_CQBSpecialist_02",
            "TACU_SevenRings_U_O_Western_CQBSpecialist_03",
            "TACU_SevenRings_U_O_Western_Marksman_01",
            "TACU_SevenRings_U_O_Western_Marksman_02",
            "TACU_SevenRings_U_O_Western_Marksman_03",
            "TACU_SevenRings_U_O_Western_AA_01",
            "TACU_SevenRings_U_O_Western_Pilot_01",
            // Eastern Independent - Units
            "TACU_SevenRings_U_I_Eastern_Rifleman_01",
            "TACU_SevenRings_U_I_Eastern_Rifleman_02",
            "TACU_SevenRings_U_I_Eastern_Rifleman_03",
            "TACU_SevenRings_U_I_Eastern_Grenadier_01",
            "TACU_SevenRings_U_I_Eastern_Grenadier_02",
            "TACU_SevenRings_U_I_Eastern_Grenadier_03",
            "TACU_SevenRings_U_I_Eastern_Rifleman_AT_01",
            "TACU_SevenRings_U_I_Eastern_Rifleman_AT_02",
            "TACU_SevenRings_U_I_Eastern_Rifleman_AT_03",
            "TACU_SevenRings_U_I_Eastern_Autorifleman_01",
            "TACU_SevenRings_U_I_Eastern_Autorifleman_02",
            "TACU_SevenRings_U_I_Eastern_Autorifleman_03",
            "TACU_SevenRings_U_I_Eastern_Medic_01",
            "TACU_SevenRings_U_I_Eastern_Medic_02",
            "TACU_SevenRings_U_I_Eastern_Medic_03",
            "TACU_SevenRings_U_I_Eastern_Engineer_01",
            "TACU_SevenRings_U_I_Eastern_Engineer_02",
            "TACU_SevenRings_U_I_Eastern_Engineer_03",
            "TACU_SevenRings_U_I_Eastern_Teamleader_01",
            "TACU_SevenRings_U_I_Eastern_Teamleader_02",
            "TACU_SevenRings_U_I_Eastern_Teamleader_03",
            "TACU_SevenRings_U_I_Eastern_CQBSpecialist_01",
            "TACU_SevenRings_U_I_Eastern_CQBSpecialist_02",
            "TACU_SevenRings_U_I_Eastern_CQBSpecialist_03",
            "TACU_SevenRings_U_I_Eastern_Marksman_01",
            "TACU_SevenRings_U_I_Eastern_Marksman_02",
            "TACU_SevenRings_U_I_Eastern_Marksman_03",
            "TACU_SevenRings_U_I_Eastern_AA_01",
            // Eastern Opfor - Units
            "TACU_SevenRings_U_O_Eastern_Rifleman_01",
            "TACU_SevenRings_U_O_Eastern_Rifleman_02",
            "TACU_SevenRings_U_O_Eastern_Rifleman_03",
            "TACU_SevenRings_U_O_Eastern_Grenadier_01",
            "TACU_SevenRings_U_O_Eastern_Grenadier_02",
            "TACU_SevenRings_U_O_Eastern_Grenadier_03",
            "TACU_SevenRings_U_O_Eastern_Rifleman_AT_01",
            "TACU_SevenRings_U_O_Eastern_Rifleman_AT_02",
            "TACU_SevenRings_U_O_Eastern_Rifleman_AT_03",
            "TACU_SevenRings_U_O_Eastern_Autorifleman_01",
            "TACU_SevenRings_U_O_Eastern_Autorifleman_02",
            "TACU_SevenRings_U_O_Eastern_Autorifleman_03",
            "TACU_SevenRings_U_O_Eastern_Medic_01",
            "TACU_SevenRings_U_O_Eastern_Medic_02",
            "TACU_SevenRings_U_O_Eastern_Medic_03",
            "TACU_SevenRings_U_O_Eastern_Engineer_01",
            "TACU_SevenRings_U_O_Eastern_Engineer_02",
            "TACU_SevenRings_U_O_Eastern_Engineer_03",
            "TACU_SevenRings_U_O_Eastern_Teamleader_01",
            "TACU_SevenRings_U_O_Eastern_Teamleader_02",
            "TACU_SevenRings_U_O_Eastern_Teamleader_03",
            "TACU_SevenRings_U_O_Eastern_CQBSpecialist_01",
            "TACU_SevenRings_U_O_Eastern_CQBSpecialist_02",
            "TACU_SevenRings_U_O_Eastern_CQBSpecialist_03",
            "TACU_SevenRings_U_O_Eastern_Marksman_01",
            "TACU_SevenRings_U_O_Eastern_Marksman_02",
            "TACU_SevenRings_U_O_Eastern_Marksman_03",
            "TACU_SevenRings_U_O_Eastern_AA_01",
            // Western Independent - Vehicles
            "TACU_SevenRings_V_I_AH6_Little_Bird",
            "TACU_SevenRings_V_I_CH47_Chinook_Unarmed",
            "TACU_SevenRings_V_I_CH47_Chinook_Armed",
            "TACU_SevenRings_V_I_UH80_Ghost_Hawk",
            "TACU_SevenRings_V_I_Assault_Boat",
            "TACU_SevenRings_V_I_Offroad_Covered",
            "TACU_SevenRings_V_I_MATV",
            "TACU_SevenRings_V_I_MATV_HMG",
            "TACU_SevenRings_V_I_Fennek",
            "TACU_SevenRings_V_I_Fennek_HMG",
            "TACU_SevenRings_V_I_Polaris_Dagor",
            "TACU_SevenRings_V_I_Polaris_Dagor_XM312",
            "TACU_SevenRings_V_I_HEMTT_Transport",
            "TACU_SevenRings_V_I_HEMTT_Transport_Covered",
            "TACU_SevenRings_V_I_PANDUR_II",
            "TACU_SevenRings_V_I_Badger_IFV",
            // Western Opfor - Vehicles
            "TACU_SevenRings_V_O_AH6_Little_Bird",
            "TACU_SevenRings_V_O_CH47_Chinook_Unarmed",
            "TACU_SevenRings_V_O_CH47_Chinook_Armed",
            "TACU_SevenRings_V_O_UH80_Ghost_Hawk",
            "TACU_SevenRings_V_O_Assault_Boat",
            "TACU_SevenRings_V_O_Offroad_Covered",
            "TACU_SevenRings_V_O_MATV",
            "TACU_SevenRings_V_O_MATV_HMG",
            "TACU_SevenRings_V_O_Fennek",
            "TACU_SevenRings_V_O_Fennek_HMG",
            "TACU_SevenRings_V_O_Polaris_Dagor",
            "TACU_SevenRings_V_O_Polaris_Dagor_XM312",
            "TACU_SevenRings_V_O_HEMTT_Transport",
            "TACU_SevenRings_V_O_HEMTT_Transport_Covered",
            "TACU_SevenRings_V_O_PANDUR_II",
            "TACU_SevenRings_V_O_Badger_IFV",
            // Eastern Independent - Vehicles
            "TACU_SevenRings_V_I_Kamaz",
            "TACU_SevenRings_V_I_Kamaz_Covered",
            "TACU_SevenRings_V_I_Ural_ZU23",
            "TACU_SevenRings_V_I_Offroad",
            "TACU_SevenRings_V_I_Offroad_Armored",
            "TACU_SevenRings_V_I_Offroad_M2",
            "TACU_SevenRings_V_I_Offroad_Armored_M2",
            "TACU_SevenRings_V_I_Marid_M2",
            "TACU_SevenRings_V_I_AGS30",
            "TACU_SevenRings_V_I_D30",
            "TACU_SevenRings_V_I_ZU23",
            "TACU_SevenRings_V_I_DSHKM",
            // Eastern Opfor - Vehicles
            "TACU_SevenRings_V_O_Kamaz",
            "TACU_SevenRings_V_O_Kamaz_Covered",
            "TACU_SevenRings_V_O_Kamaz_ZU23",
            "TACU_SevenRings_V_O_Offroad",
            "TACU_SevenRings_V_O_Offroad_Armored",
            "TACU_SevenRings_V_O_Offroad_M2",
            "TACU_SevenRings_V_O_Offroad_Armored_M2",
            "TACU_SevenRings_V_O_Marid_M2",
            "TACU_SevenRings_V_O_AGS30",
            "TACU_SevenRings_V_O_D30",
            "TACU_SevenRings_V_O_ZU23",
            "TACU_SevenRings_V_O_DSHKM"
        };
        weapons[] = {
            // Western Weapons
            "TACU_SevenRings_W_West_BREN2_14",
            "TACU_SevenRings_W_West_BREN2_GL_14",
            "TACU_SevenRings_W_West_SA58_Grip",
            "TACU_SevenRings_W_West_SA58_GL",
            "TACU_SevenRings_W_West_G36K_Grip",
            "TACU_SevenRings_W_West_G36K_GL",
            "TACU_SevenRings_W_West_HK416_Grip",
            "TACU_SevenRings_W_West_ACR556_AFG",
            "TACU_SevenRings_W_West_AK109_Zenitco",
            "TACU_SevenRings_W_West_MK18_Black",
            "TACU_SevenRings_W_West_MK200",
            "TACU_SevenRings_W_West_Minimi_SPW",
            "TACU_SevenRings_W_West_MXLSW_Black",
            "TACU_SevenRings_W_West_G3A3_RIS",
            "TACU_SevenRings_W_West_SG551_TAC_SB",
            "TACU_SevenRings_W_West_AUGA2",
            "TACU_SevenRings_W_West_AK15",
            "TACU_SevenRings_W_West_M1014_Grip",
            "TACU_SevenRings_W_West_Katiba_LB",
            "TACU_SevenRings_W_West_SCAR_L_AFG",
            "TACU_SevenRings_W_West_SG553_TAC_SB",
            "TACU_SevenRings_W_West_AUG_A3",
            "TACU_SevenRings_W_West_SAIGA12K",
            "TACU_SevenRings_W_West_Vector",
            "TACU_SevenRings_W_West_SIG556_DMR",
            "TACU_SevenRings_W_West_HK417_DMR",
            "TACU_SevenRings_W_West_QBU_88_DMR",
            // Eastern Weapons
            "TACU_SevenRings_W_East_AK101",
            "TACU_SevenRings_W_East_AK103",
            "TACU_SevenRings_W_East_AK103_GL",
            "TACU_SevenRings_W_East_AK104",
            "TACU_SevenRings_W_East_SA58_GL",
            "TACU_SevenRings_W_East_AKS74_GL",
            "TACU_SevenRings_W_East_AK15K",
            "TACU_SevenRings_W_East_AKMN_AFG",
            "TACU_SevenRings_W_East_RPK12",
            "TACU_SevenRings_W_East_RPK",
            "TACU_SevenRings_W_East_MG3",
            "TACU_SevenRings_W_East_AK107",
            "TACU_SevenRings_W_East_AKS_74U",
            "TACU_SevenRings_W_East_AKS",
            "TACU_SevenRings_W_East_VIKHR",
            "TACU_SevenRings_W_East_Type_56",
            "TACU_SevenRings_W_East_M4",
            "TACU_SevenRings_W_East_AK108",
            "TACU_SevenRings_W_East_Scorpion_Evo",
            "TACU_SevenRings_W_East_SAIGA12K",
            "TACU_SevenRings_W_East_SVD",
            "TACU_SevenRings_W_East_Cyrus",
            "TACU_SevenRings_W_East_FNFAL_5061"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
