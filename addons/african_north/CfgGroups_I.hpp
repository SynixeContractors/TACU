class TACU_African_North_I {
    name = "Army of the African Republic";

    class TACU_African_North_Infantry_I {
        name = "Infantry";

        class TACU_African_North_Patrol_I {
            name = "Patrol";
            side = 2;
            faction = "TACU_African_North_B";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_North_U_I_Teamleader,2);
            MACRO_UNIT1(TACU_African_North_U_I_Rifleman,2);
        };

        class TACU_African_North_Fireteam_I: TACU_African_North_Patrol_I {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_North_U_I_Teamleader,2);
            MACRO_UNIT1(TACU_African_North_U_I_Medic,2);
            MACRO_UNIT2(TACU_African_North_U_I_Rifleman,2);
            MACRO_UNIT3(TACU_African_North_U_I_Grenadier,2);
        };

        class TACU_African_North_Squad_I: TACU_African_North_Patrol_I {
            name = "Squad";
            MACRO_UNIT0(TACU_African_North_U_I_Teamleader,2);
            MACRO_UNIT1(TACU_African_North_U_I_Rifleman,2);
            MACRO_UNIT2(TACU_African_North_U_I_Medic,2);
            MACRO_UNIT3(TACU_African_North_U_I_Demolitions,2);
            MACRO_UNIT4(TACU_African_North_U_I_Machinegunner,2);
            MACRO_UNIT5(TACU_African_North_U_I_Grenadier,2);
            MACRO_UNIT6(TACU_African_North_U_I_AT,2);
            MACRO_UNIT7(TACU_African_North_U_I_Marksman,2);
        };

        class TACU_African_North_AATeam_I: TACU_African_North_Patrol_I {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_North_U_I_Teamleader,2);
            MACRO_UNIT1(TACU_African_North_U_I_AA,2);
            MACRO_UNIT2(TACU_African_North_U_I_AA,2);
            MACRO_UNIT3(TACU_African_North_U_I_Rifleman,2);
        };

        class TACU_African_North_ATTeam_I: TACU_African_North_Patrol_I {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_North_U_I_Teamleader,2);
            MACRO_UNIT1(TACU_African_North_U_I_AT,2);
            MACRO_UNIT2(TACU_African_North_U_I_AT,2);
            MACRO_UNIT3(TACU_African_North_U_I_Rifleman,2);
        };
    };
};