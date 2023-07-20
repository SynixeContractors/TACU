class TACU_African_Militia_Infantry_I {
    name = "Infantry";

    class TACU_African_Militia_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_African_Militia_U_I_Rifleman,2);
        MACRO_UNIT1(TACU_African_Militia_U_I_Rifleman_02,2);
    };

    class TACU_African_Militia_G_Fireteam: TACU_African_Militia_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_African_Militia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_African_Militia_U_I_Medic,2);
        MACRO_UNIT2(TACU_African_Militia_U_I_Rifleman_02,2);
        MACRO_UNIT3(TACU_African_Militia_U_I_Machinegunner,2);
    };

    class TACU_African_Militia_G_ATTeam: TACU_African_Militia_G_Patrol {
        name = "AT Team";
        MACRO_UNIT0(TACU_African_Militia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_African_Militia_U_I_AT,2);
        MACRO_UNIT2(TACU_African_Militia_U_I_AT,2);
        MACRO_UNIT3(TACU_African_Militia_U_I_Rifleman,2);
    };

    class TACU_African_Militia_G_Squad: TACU_African_Militia_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_African_Militia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_African_Militia_U_I_Medic,2);
        MACRO_UNIT2(TACU_African_Militia_U_I_Demolitions,2);
        MACRO_UNIT3(TACU_African_Militia_U_I_Machinegunner,2);
        MACRO_UNIT4(TACU_African_Militia_U_I_Grenadier,2);
        MACRO_UNIT5(TACU_African_Militia_U_I_AT,2);
        MACRO_UNIT6(TACU_African_Militia_U_I_Marksman,2);
        MACRO_UNIT7(TACU_African_Militia_U_I_Repair,2);
    };
};