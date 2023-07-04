#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Assets_Fieldpack_Arid",
            "TACU_Assets_Fieldpack_Tropic",
            "TACU_Assets_Fieldpack_Urban",
            // Uniforms
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Muddy",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_01",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_02",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_03",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_04",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_05",
            "TACU_Uniform_O_V_Cartel_Greek_Grunt_06",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_01",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_02",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_03",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_04",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_05",
            "TACU_Uniform_O_V_Cartel_Greek_Thug_06",
            // Helmets
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid",
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Tropic",
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Urban",
            "TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack",
            "TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen",
            // Vests
            "TACU_BAF_Item_Vest_LightPlateCarrier_Arid",
            "TACU_BAF_Item_Vest_LightPlateCarrier_Tropic",
            "TACU_BAF_Item_Vest_LightPlateCarrier_Urban",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Arid",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Tropic",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Urban",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceGreen",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Earth",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Foliage",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Snow",
            "TACU_Assets_TestUnit",
            // Vehicles
            "TACU_AH6_LittleBird_Base",
            "TACU_Merlin_Base",
            "TACU_Badger_IFV_Base",
            "TACU_Bardelas_Base",
            "TACU_Chinook_Armed_Base",
            "TACU_Chinook_Unarmed_Base",
            "TACU_Fennek_GMG_Base",
            "TACU_Fennek_HMG_Base",
            "TACU_Fennek_Unarmed_Base",
            "TACU_FV510_Warrior_Base",
            "TACU_GhostHawk_Base",
            "TACU_HEMTT_Base",
            "TACU_HEMTT_Covered_Base",
            "TACU_Jeep_Wrangler_AT_Base",
            "TACU_Jeep_Wrangler_LMG_Base",
            "TACU_Jeep_Wrangler_Unarmed_Base",
            "TACU_Kamaz_Covered_Base",
            "TACU_Kamaz_MRL_Base",
            "TACU_Kamaz_ZU23_Base",
            "TACU_Kamaz_Base",
            "TACU_Karatel_GMG_Base",
            "TACU_Karatel_HMG_Base",
            "TACU_Karatel_Unarmed_Base",
            "TACU_Kasatka_Armed_Base",
            "TACU_Kasatka_Unarmed_Base",
            "TACU_Kasatka_Armed_Armoured_Base",
            "TACU_Kasatka_Unarmed_Armoured_Base",
            "TACU_Leopard_2SG_Base",
            "TACU_LSV_MKII_Armed_AT_Base",
            "TACU_LSV_MKII_Armed_Base",
            "TACU_LSV_MKII_Base",
            "TACU_MATV_GMG_Base",
            "TACU_MATV_HMG_Base",
            "TACU_MATV_Unarmed_Base",
            "TACU_Namer_Base",
            "TACU_Nemmera_Base",
            "TACU_Offroad_Armed_AT_UP_Base",
            "TACU_Offroad_Armed_AT_Base",
            "TACU_Offroad_Armed_M2_UP_Base",
            "TACU_Offroad_Armed_M2_Base",
            "TACU_Offroad_Covered_Base",
            "TACU_Offroad_Unarmed_UP_Base",
            "TACU_Offroad_Unarmed_Base",
            "TACU_Otokar_ARMA_Armed_Base",
            "TACU_Otokar_ARMA_HMG_Base",
            "TACU_Otokar_ARMA_Unarmed_Base",
            "TACU_Pandur_Base",
            "TACU_Polaris_Armed_AT_Base",
            "TACU_Polaris_Armed_Base",
            "TACU_Polaris_Unarmed_Base",
            "TACU_RAH66_Comanche_Base",
            "TACU_Speedboat_Minigun_Base",
            "TACU_Transport_Van_Base",
            "TACU_Truck_Base",
            "TACU_Typhoon_Covered_Base",
            "TACU_Typhoon_Base",
            "TACU_Cargo_Van_Base",
            "TACU_Transport_Van_Base",
            "TACU_Wiesel_Armed_AT_Base",
            "TACU_Wiesel_Armed_Base",
            "TACU_Wildcat_Armed_Base",
            "TACU_Wildcat_Base",
            // Weapons
            "TACU_Assets_W_Item_HK416A5_Arid",
            "TACU_Assets_W_Item_HK417A2_Arid",
            // Turrets
            "TACU_Assets_AGS_base",
            "TACU_Assets_D30_base",
            "TACU_Assets_D30AT_base",
            "TACU_Assets_DSHKM_base",
            "TACU_Assets_DSHKM_Mini_base",
            "TACU_Assets_FIM92_base",
            "TACU_Assets_IGLA_base",
            "TACU_Assets_KORD_base",
            "TACU_Assets_KORD_Mini_base",
            "TACU_Assets_KORNET_AT4_base",
            "TACU_Assets_L11A1_base",
            "TACU_Assets_L11A1_MiniTripod_base",
            "TACU_Assets_L134A1_base",
            "TACU_Assets_M119_base",
            "TACU_Assets_M2_base",
            "TACU_Assets_M220_TOW_base",
            "TACU_Assets_Metis_base",
            "TACU_Assets_MK19_base",
            "TACU_Assets_RBS70_base",
            "TACU_Assets_SearchLight_base",
            "TACU_Assets_ZU23_base"
        };
        weapons[] = {
            // Uniforms
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy",
            "TACU_Police_Uniform_Combat_Black",
            "TACU_Police_Uniform_Combat_Blue",
            "TACU_Police_Uniform_Combat_Brown",
            "TACU_Police_Uniform_Combat_Green",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_01",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_02",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_03",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_04",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_05",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_06",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_01",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_02",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_03",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_04",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_05",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_06",
            // Helmets
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
            "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
            "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
            // Vests
            "TACU_BAF_Vest_LightPlateCarrier_Arid",
            "TACU_BAF_Vest_LightPlateCarrier_Tropic",
            "TACU_BAF_Vest_LightPlateCarrier_Urban",
            "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
            "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
            "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Vest_PlateCarrier_PoliceGreen",
            "TACU_Vanguard_V_PlateCarrier_Earth",
            "TACU_Vanguard_V_PlateCarrier_Foliage",
            "TACU_Vanguard_V_PlateCarrier_Snow",
            // Weapons
            "TACU_Assets_W_HK416A5_Arid",
            "TACU_Assets_W_HK416A5_GL_Arid",
            "TACU_Assets_W_HK417A2_Arid"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "CfgFaces.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWorlds.hpp"
