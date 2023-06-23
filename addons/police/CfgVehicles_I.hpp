// Units - Police (Counter-Terrorism)
class TACU_Police_U_I_CT_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    backpack = "";
    //EDITORPREVIEW(Police_U_I_CT_Rifleman)
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "G_Balaclava_blk", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "G_Balaclava_blk", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Police_W_SG551LB_TAC", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_SG551LB_TAC", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_SIG"), mag_3("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_SIG"), mag_3("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 0.70,
        "G_Balaclava_combat", 0.30
    };
    editorSubcategory = "TACU_Police_EdSubCat_I_CT";
};

class TACU_Police_U_I_CT_Breacher: TACU_Police_U_I_CT_Rifleman {
    displayName = "Breacher";
    //EDITORPREVIEW(Police_U_I_CT_Breacher)
    weapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("6Rnd_00_Buckshot_Magazine"), mag_3("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("6Rnd_00_Buckshot_Magazine"), mag_3("tacgt_AI_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
};

class TACU_Police_U_I_CT_Marksman: TACU_Police_U_I_CT_Rifleman {
    displayName = "Marksman";
    //EDITORPREVIEW(Police_U_I_CT_Marksman)
    weapons[] = {"TACU_Police_W_SG5501_DMR_Rail", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_SG5501_DMR_Rail", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_SIG"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_SIG"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_CT_RiotControl: TACU_Police_U_I_CT_Rifleman {
    displayName = "Riot Control";
    //EDITORPREVIEW(Police_U_I_CT_RiotControl)
    weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("tacgt_AI_15Rnd_9x19_M9")};
};

// Units - Police (Enforcers)
class TACU_Police_U_I_Enforcer_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    backpack = "";
    //EDITORPREVIEW(Police_U_I_Enforcer_Rifleman)
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceBlack"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk", "G_Aviator", "TACU_Police_Vest_PlateCarrier_PoliceBlack"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_G36C", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_G36C", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_G36"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    headgearList[] = {
        "H_Cap_blk", 0.60,
        "H_HelmetB_black", 0.40
    };
    CBA_facewearList[] = {
        "G_Aviator", 1
    };
    editorSubcategory = "TACU_Police_EdSubCat_I_Enforcer";
};

class TACU_Police_U_I_Enforcer_SMG_1: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (CPW)";
    //EDITORPREVIEW(Police_U_I_Enforcer_SMG_1)
    weapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_Enforcer_SMG_2: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (P90)";
    //EDITORPREVIEW(Police_U_I_Enforcer_SMG_2)
    weapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_50Rnd_57x28"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_4("tacgt_AI_50Rnd_57x28"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_Enforcer_Breacher: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "Breacher";
    //EDITORPREVIEW(Police_U_I_Enforcer_Breacher)
    weapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("6Rnd_00_Buckshot_Magazine"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("6Rnd_00_Buckshot_Magazine"), mag_3("tacgt_AI_15Rnd_9x19_M9")};
};
