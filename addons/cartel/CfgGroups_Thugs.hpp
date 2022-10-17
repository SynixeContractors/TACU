class TACU_Cartel_O_G_Thugs_Infantry {
    name = "Thugs";

    class TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Patrol";
        side = 0;
        faction = "TACU_Cartel_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Cartel_G_O_Thugs_Fireteam: TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Fireteam";
        class unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_04";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Cartel_G_O_Thugs_Squad: TACU_Cartel_G_O_Thugs_Fireteam {
        name = "Thug Squad";
        class unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_04";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_05";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Cartel2_U_O_Thug_Rifleman_06";
            position[] = {15, -15, 0};
        };
    };
};