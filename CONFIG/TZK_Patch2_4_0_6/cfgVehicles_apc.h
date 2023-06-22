    class M113Ambul_xj400: M113Ambul {};
    class M113Ambul_C_xj400: M113Ambul_xj400 {
        model = "M113_ambulance";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class M113Ambul_G_xj400: M113Ambul_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\M113_Ambu_G.p3d";
    };
    class Bradley_xj400: M113 {};
    class M2A2_xj400: Bradley_xj400 {};
    class M2A2_C_xj400: M2A2_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\M2A2_TZK_C.p3d";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class M2A2_G_xj400: M2A2_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\M2A2_TZK_G.p3d";
    };
    class BMP_xj400: BMP {};
    class BMPAmbul_xj400: BMPAmbul {};
    class BMPAmbul_C_xj400: BMPAmbul_xj400 {
        model = "bmp_Ambu";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class BMPAmbul_G_xj400: BMPAmbul_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\BMP_Ambu_TZK_G.p3d";
    };
    class BMP2_Base_xj400: BMP {};
    class BMP2_xj400: BMP2_Base_xj400 {};
    class BMP2_C_xj400: BMP2_xj400 {
		model = "\bmp2\bmp2";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class BMP2_G_xj400: BMP2_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\BMP2_TZK_G.p3d";
    };