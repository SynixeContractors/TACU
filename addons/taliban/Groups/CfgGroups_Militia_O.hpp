class TACU_Taliban_Militia_Infantry_O {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Militia {
        name = "Patrol";
        side = 0;
        faction = "TACU_Taliban_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Taliban_Militia_U_O_Rifleman_01,0);
        MACRO_UNIT1(TACU_Taliban_Militia_U_O_Rifleman_03,0);
    };

    class TACU_Taliban_G_Fireteam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Taliban_Militia_U_O_Leader,0);
        MACRO_UNIT1(TACU_Taliban_Militia_U_O_Medic,0);
        MACRO_UNIT2(TACU_Taliban_Militia_U_O_Rifleman_02,0);
        MACRO_UNIT3(TACU_Taliban_Militia_U_O_Machinegunner,0);
    };

    class TACU_Taliban_G_ATTeam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "AT Team";
        MACRO_UNIT0(TACU_Taliban_Militia_U_O_Leader,0);
        MACRO_UNIT1(TACU_Taliban_Militia_U_O_AT,0);
        MACRO_UNIT2(TACU_Taliban_Militia_U_O_AT,0);
        MACRO_UNIT3(TACU_Taliban_Militia_U_O_Rifleman_01,0);
    };

    class TACU_Taliban_G_Squad_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Squad";
        MACRO_UNIT0(TACU_Taliban_Militia_U_O_Leader,0);
        MACRO_UNIT1(TACU_Taliban_Militia_U_O_AT,0);
        MACRO_UNIT2(TACU_Taliban_Militia_U_O_Machinegunner,0);
        MACRO_UNIT3(TACU_Taliban_Militia_U_O_Demolitions,0);
        MACRO_UNIT4(TACU_Taliban_Militia_U_O_Medic,0);
        MACRO_UNIT5(TACU_Taliban_Militia_U_O_Grenadier,0);
        MACRO_UNIT6(TACU_Taliban_Militia_U_O_Rifleman_03,0);
        MACRO_UNIT7(TACU_Taliban_Militia_U_O_Rifleman_01,0);
    };
};
