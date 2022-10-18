class TACU_SevenRings_G_I_Eastern {
    name = "Seven Rings (Eastern)";

    // Patrol Groups
    class TACU_SevenRings_G_I_Eastern_Patrol_01 {
        name = "Patrol 1";
        side = 2;
        faction = "TACU_SevenRings_I_Eastern";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Patrol_02: TACU_SevenRings_G_I_Eastern_Patrol_01 {
        name = "Patrol 2";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Patrol_03: TACU_SevenRings_G_I_Eastern_Patrol_02 {
        name = "Patrol 3";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    // Fireteam Groups
    class TACU_SevenRings_G_I_Eastern_Fireteam_01: TACU_SevenRings_G_I_Eastern_Patrol_03 {
        name = "Fireteam 1";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_01";
            position[] = {10, -10, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Fireteam_02: TACU_SevenRings_G_I_Eastern_Fireteam_01 {
        name = "Fireteam 2";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_02";
            position[] = {10, -10, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Fireteam_03: TACU_SevenRings_G_I_Eastern_Fireteam_02 {
        name = "Fireteam 3";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_03";
            position[] = {10, -10, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Squad_01: TACU_SevenRings_G_I_Eastern_Fireteam_03 {
        name = "Squad 1";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_01";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Engineer_01";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Marksman_01";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_01";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_01";
            position[] = {20, -20, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Squad_02: TACU_SevenRings_G_I_Eastern_Squad_01 {
        name = "Squad 2";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_02";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Engineer_02";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Marksman_02";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_02";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_02";
            position[] = {20, -20, 0};
        };
    };

    class TACU_SevenRings_G_I_Eastern_Squad_03: TACU_SevenRings_G_I_Eastern_Squad_02 {
        name = "Squad 3";
        class unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Teamleader_03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Grenadier_03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Medic_03";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Engineer_03";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Marksman_03";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Autorifleman_03";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_SevenRings_U_I_Eastern_Rifleman_AT_03";
            position[] = {20, -20, 0};
        };
    };
};
