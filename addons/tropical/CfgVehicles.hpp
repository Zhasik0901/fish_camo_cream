class CfgVehicles {
    /** external **/ class Man;

    class CAManBase: Man {
        class ACE_SelfActions {
              class FISH_Camo_Cream {
                class FISH_Camo_Cream_type_tropical {
                    displayName = CSTRING(type);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    statement = "";
                    showDisabled = 1;
                    icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);

                    class GVAR(apply_tropical_regular_cream) {
                        displayName = ECSTRING(common,apply_regular_cream);
                        condition = QUOTE([ARR_2(player, DQUOTE(tropical_regular_cream))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(tropical_regular_cream), (DLLSTRING(type)) + "" "" + (DLELSTRING(common,regular_cream)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_tropical_dark_cream) {
                        displayName =  ECSTRING(common,apply_dark_cream);
                        condition = QUOTE([ARR_2(player, DQUOTE(tropical_dark_cream))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(tropical_dark_cream), (DLLSTRING(type)) + "" "" + (DLELSTRING(common,dark_cream)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_tropical_light_cream) {
                        displayName = ECSTRING(common,apply_light_cream);
                        condition = QUOTE([ARR_2(player, DQUOTE(tropical_light_cream))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(tropical_light_cream), (DLLSTRING(type)) + "" "" + (DLELSTRING(common,light_cream)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_tropical_half_cream) {
                        displayName = ECSTRING(common,apply_half_cream);
                        condition = QUOTE([ARR_2(player, DQUOTE(tropical_half_cream))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(tropical_half_cream), (DLLSTRING(type)) + "" "" + (DLELSTRING(common,half_cream)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };
                };
            };
        };
    };
};