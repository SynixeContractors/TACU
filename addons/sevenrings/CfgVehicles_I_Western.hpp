class TACU_Seven_Rings_U_I_Western_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (CZ BREN)";
    faction = "TACU_Seven_Rings_I_Western";
    editorSubcategory = "TACU_Seven_Rings_EdSubCat_Western";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_CZ_ACR", "Head_Euro", "Head_Enoch"};
    genericNames = "CUP_Names_CzechMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivity = 2;
    sensitivityEar = 0.15;
    uniformClass = "CUP_I_B_PMC_Unit_40";
    backpack = "";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_rgr"
    };
    Items[] = {};
    respawnItems[] = {};
    weapons[] = {
        "TACU_SR_W_West_BREN2_14",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_BREN2_14",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_PMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_PMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    headgearList[] = {
        "H_Watchcap_blk", 0.50,
        "H_Cap_blk_CMMG", 0.50,
        "H_HelmetB_black", 0.50,
        "H_HelmetB", 0.50,
        "H_HelmetSpecB", 0.50,
        "H_HelmetSpecB_blk", 0.50,
        "H_HelmetB_light", 0.50,
        "H_HelmetB_light_black", 0.50,
        "H_Booniehat_khk", 0.50,
        "", 0.50
    };
    CBA_facewearList[] = {
        "G_Aviator", 0.50,
        "G_Balaclava_blk", 0.50,
        "G_Bandanna_aviator", 0.50,
        "G_Spectacles", 0.50,
        "G_Shades_Black", 0.50,
        "CUP_RUS_Balaclava_grn", 0.50,
        "CUP_FR_NeckScarf3", 0.50,
        "CUP_FR_NeckScarf", 0.50,
        "", 0.50
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Eastern_Rifleman_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Rifleman_02: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (SA58)";
    uniformClass = "CUP_I_B_PMC_Unit_38";
    weapons[] = {
        "TACU_SR_W_West_SA58_Grip",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SA58_Grip",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Rifleman_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Rifleman_03: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (G36K)";
    uniformClass = "CUP_I_B_PMC_Unit_42";
    weapons[] = {
        "TACU_SR_W_West_G36K_Grip",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_G36K_Grip",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_G36"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_G36"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Rifleman_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_Grenadier_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Grenadier (CZ BREN)";
    role = "Grenadier";
    uniformClass = "CUP_I_B_PMC_Unit_41";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_grenadier_belt_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_BREN2_GL_14",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_BREN2_GL_14",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Grenadier_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Grenadier_02: TACU_Seven_Rings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (SA58)";
    uniformClass = "CUP_I_B_PMC_Unit_43";
    weapons[] = {
        "TACU_SR_W_West_SA58_GL",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SA58_GL",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_762x51_FAL_AP_Mag"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Grenadier_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Grenadier_03: TACU_Seven_Rings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (G36K)";
    uniformClass = "CUP_I_B_PMC_Unit_39";
    weapons[] = {
        "TACU_SR_W_West_G36K_GL",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_G36K_GL",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_G36"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_G36"),
        mag_4("1Rnd_HE_Grenade_shell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Grenadier_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_AT_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman AT (MAAWS)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_I_B_PMC_Unit_36";
    backpack = "TACU_SR_B_AT_Assault_Maaws";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    weapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_SR_W_West_AK109_Zenitco",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_SR_W_West_AK109_Zenitco",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_6("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_6("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_AT_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_AT_02: TACU_Seven_Rings_U_I_Western_AT_01 {
    displayName = "Rifleman AT (RPG-32)";
    uniformClass = "CUP_I_B_PMC_Unit_5";
    backpack = "TACU_SR_B_AT_Assault_RPG32";
    weapons[] = {
        "launch_RPG32_green_F",
        "TACU_SR_W_West_MK18_Black",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "launch_RPG32_green_F",
        "TACU_SR_W_West_MK18_Black",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        "RPG32_F",
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "RPG32_F",
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_AT_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_AT_03: TACU_Seven_Rings_U_I_Western_AT_01 {
    displayName = "Rifleman AT (NLAW)";
    uniformClass = "CUP_I_B_PMC_Unit_38";
    backpack = "";
    weapons[] = {
        "launch_NLAW_F",
        "TACU_SR_W_West_ACR556_AFG",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "launch_NLAW_F",
        "TACU_SR_W_West_ACR556_AFG",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_6("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_AT_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_MG_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Autorifleman (Stoner 99)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_belt_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_MK200",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_MK200",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_3("200Rnd_65x39_cased_Box_Red"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_3("200Rnd_65x39_cased_Box_Red"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_MG_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_MG_02: TACU_Seven_Rings_U_I_Western_MG_01 {
    displayName = "Autorifleman (Minimi SPW)";
    uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
    weapons[] = {
        "TACU_SR_W_West_Minimi_SPW",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_Minimi_SPW",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_3("tacgt_200Rnd_556x45_M855A1_Box_Red"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_3("tacgt_200Rnd_556x45_M855A1_Box_Red"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_MG_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_MG_03: TACU_Seven_Rings_U_I_Western_MG_01 {
    displayName = "Autorifleman (MX LSW)";
    uniformClass = "U_O_R_Gorka_01_black_F";
    weapons[] = {
        "TACU_SR_W_West_MXLSW_Black",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_MXLSW_Black",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_4("100Rnd_65x39_caseless_black_mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_4("100Rnd_65x39_caseless_black_mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_MG_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_Medic_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Medic (G3A3)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_E_LooterJacket_01_F";
    backpack = "G_FieldPack_Medic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_medic_belt_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_G3A3_RIS",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_G3A3_RIS",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Medic_02: TACU_Seven_Rings_U_I_Western_Medic_01 {
    displayName = "Medic (SIG 551)";
    uniformClass = "U_BG_Guerilla2_1";
    weapons[] = {
        "TACU_SR_W_West_SG551_TAC_SB",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SG551_TAC_SB",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_SG550"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_SG550"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Medic_03: TACU_Seven_Rings_U_I_Western_Medic_01 {
    displayName = "Medic (AUG A2)";
    uniformClass = "tacs_Uniform_Combat_LS_GS_BP_BB";
    weapons[] = {
        "TACU_SR_W_West_AUGA2",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_AUGA2",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AUG"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AUG"),
        mag_2("SmokeShell"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Medic_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_Engineer_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Engineer (AK-15)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = true;
    uniformClass = "U_BG_Guerilla2_2";
    backpack = "TACU_SR_B_Engineer_Kitbag_Black";
    Items[] = {"ACE_M26_Clacker"};
    respawnItems[] = {"ACE_M26_Clacker"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_assaulter_belt_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_AK15",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_AK15",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Engineer_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Engineer_02: TACU_Seven_Rings_U_I_Western_Engineer_01 {
    displayName = "Engineer (M1014)";
    uniformClass = "U_BG_Guerilla2_3";
    weapons[] = {
        "TACU_SR_W_West_M1014_Grip",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_M1014_Grip",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_10("tacgt_8Rnd_P_000"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_10("tacgt_8Rnd_P_000"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Engineer_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Engineer_03: TACU_Seven_Rings_U_I_Western_Engineer_01 {
    displayName = "Engineer (KH-2002)";
    uniformClass = "U_BG_Guerilla3_1";
    weapons[] = {
        "TACU_SR_W_West_Katiba_LB",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_Katiba_LB",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("30Rnd_65x39_caseless_green"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("30Rnd_65x39_caseless_green"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Engineer_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_Teamleader_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Team Leader (SCAR-L)";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_RGR"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_teamleader_belt_RGR"
    };
    weapons[] = {
        "TACU_SR_W_West_SCAR_L_AFG",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SCAR_L_AFG",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Teamleader_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Teamleader_02: TACU_Seven_Rings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (SIG 553)";
    uniformClass = "tacs_Uniform_Garment_LS_ES_EP_TB";
    weapons[] = {
        "TACU_SR_W_West_SG553_TAC_SB",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SG553_TAC_SB",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_762x39_AK12_BP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Teamleader_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Teamleader_03: TACU_Seven_Rings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (AUG A3)";
    uniformClass = "tacs_Uniform_Garment_LS_TS_BP_BB";
    weapons[] = {
        "TACU_SR_W_West_AUG_A3",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_AUG_A3",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AUG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("tacgt_30Rnd_556x45_M995_AUG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Teamleader_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_CQBSpecialist_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "tacs_Uniform_Combat_RS_CLFS_GP_BB";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_light_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_SAIGA12K",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SAIGA12K",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("CUP_20Rnd_B_Saiga12_74Pellets_M"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_CQBSpecialist_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_CQBSpecialist_02: TACU_Seven_Rings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (P90)";
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    weapons[] = {
        "SMG_03C_black",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("50Rnd_570x28_SMG_03"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("50Rnd_570x28_SMG_03"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_CQBSpecialist_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_CQBSpecialist_03: TACU_Seven_Rings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (Vector)";
    uniformClass = "tacs_Uniform_Combat_RS_CLBS_GP_BB";
    weapons[] = {
        "TACU_SR_W_West_Vector",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_Vector",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("30Rnd_45ACP_Mag_SMG_01"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("30Rnd_45ACP_Mag_SMG_01"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_CQBSpecialist_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_Marksman_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Marksman (SIG 556)";
    role = "Marksman";
    sensitivity = 2.25;
    uniformClass = "U_I_C_Soldier_Bandit_3_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_marksman_rgr"
    };
    weapons[] = {
        "TACU_SR_W_West_SIG556_DMR",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_SIG556_DMR",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Marksman_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Marksman_02: TACU_Seven_Rings_U_I_Western_Marksman_01 {
    displayName = "Marksman (HK417)";
    uniformClass = "CUP_I_B_PARA_Unit_1";
    weapons[] = {
        "TACU_SR_W_West_HK417_DMR",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_HK417_DMR",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Marksman_02.jpg);
};

class TACU_Seven_Rings_U_I_Western_Marksman_03: TACU_Seven_Rings_U_I_Western_Marksman_01 {
    displayName = "Marksman (QBU-88)";
    uniformClass = "tacs_Uniform_Garment_RS_ES_BP_BB";
    weapons[] = {
        "TACU_SR_W_West_QBU_88_DMR",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "TACU_SR_W_West_QBU_88_DMR",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("ACE_20Rnd_65x47_Scenar_mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("ACE_20Rnd_65x47_Scenar_mag"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Marksman_03.jpg);
};

class TACU_Seven_Rings_U_I_Western_AA_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman AA (Titan)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_BS_TP_BB";
    backpack = "TACU_SR_B_AA_Kitbag_Black";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "milgp_v_marciras_hgunner_rgr"
    };
    weapons[] = {
        "launch_B_Titan_olive_F",
        "TACU_SR_W_West_SCAR_L_AFG",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "launch_B_Titan_olive_F",
        "TACU_SR_W_West_SCAR_L_AFG",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        "Titan_AA",
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        "Titan_AA",
        mag_8("tacgt_30Rnd_556x45_M995_EMAG"),
        SR_WEST_MAGAZINE_MACRO
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_AA_01.jpg);
};

class TACU_Seven_Rings_U_I_Western_Pilot_01: TACU_Seven_Rings_U_I_Western_Rifleman_01 {
    displayName = "Pilot (P90";
    role = "Crewman";
    uniformClass = "CUP_U_B_USMC_PilotOverall";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_gry",
        "H_PilotHelmetHeli_O"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_HarnessO_gry",
        "H_PilotHelmetHeli_O"
    };
    weapons[] = {
        "SMG_03C_black",
        SR_WEST_WEAPON_MACRO
    };
    respawnWeapons[] = {
        "SMG_03C_black",
        SR_WEST_WEAPON_MACRO
    };
    magazines[] = {
        mag_8("50Rnd_570x28_SMG_03"),
        SR_WEST_MAGAZINE_MACRO
    };
    respawnMagazines[] = {
        mag_8("50Rnd_570x28_SMG_03"),
        SR_WEST_MAGAZINE_MACRO
    };
    headgearList[] = {
        "H_PilotHelmetHeli_O", 1
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_U_I_Western_Pilot_01.jpg);
};
