/*
 *************************************************************
 *                      NEXTSTEPRC                           *
 *                                                           *
 *             -> Build your DIY MEGA 2560 TX                *
 *                                                           *
 *      Based on code named                                  *
 *      OpenTx - https://github.com/opentx/opentx            *
 *                                                           *
 *         Only avr code here for lisibility ;-)             *
 *                                                           *
 *  License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html  *
 *                                                           *
 *************************************************************
 */

 /* Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */














// NON ZERO TERMINATED STRINGS
#define LEN_OFFON              "\003"
#define TR_OFFON               "AUS""EIN"

#define LEN_MMMINV             "\003"
#define TR_MMMINV              "---""INV"

#define LEN_NCHANNELS          "\004"
#define TR_NCHANNELS           "\0014CH\0016CH\0018CH10CH12CH14CH16CH"

#define LEN_VBEEPMODE          "\005"
#define TR_VBEEPMODE           "Stumm""Alarm""NoKey""Alle\0"

#define LEN_VBEEPLEN           "\005"
#define TR_VBEEPLEN            "0====""=0===""==0==""===0=""====0"

#define LEN_VRENAVIG           "\003"
#define TR_VRENAVIG            "AUSDGaDGb"

#define LEN_VBLMODE            "\005"
#define TR_VBLMODE             "AUS\0 ""Taste""Stks\0""Beide""EIN\0 " // Anpassung

#define LEN_TRNMODE            "\003"
#define TR_TRNMODE             "AUS"" +="" :="

#define LEN_TRNCHN             "\003"
#define TR_TRNCHN              "CH1CH2CH3CH4"

#define LEN_UART3MODES         "\015"
#define TR_UART3MODES          "AUS\0         ""S-Port Mirror""Telemetrie\0  ""SBUS Sch\205ler\0""Debug\0"

#define LEN_SWTYPES            "\006"
#define TR_SWTYPES             "Kein\0 ""Taster""2POS\0 ""3POS\0"

#define LEN_POTTYPES           "\017" 
#define TR_POTTYPES            "Kein\0          ""Poti mit Raste ""Stufen-Schalter""Poti ohne Raste\0"

#define LEN_SLIDERTYPES        "\006"
#define TR_SLIDERTYPES         "Keine\0""Slider"

#define LEN_DATETIME           "\005"
#define TR_DATETIME            "DATE:""ZEIT:"

#define LEN_VLCD               "\006"
#define TR_VLCD                "NormalOptrex"

#define LEN_VPERSISTENT        "\014"
#define TR_VPERSISTENT         "AUS\0        ""Flugzeit\0   ""Manuell Ruck"

#define LEN_COUNTRYCODES       TR("\002", "\007")
#define TR_COUNTRYCODES        TR("US""JP""EU", "Amerika""Japan\0 ""Europa\0")

#define LEN_TARANIS_PROTOCOLS  "\004"          
#define TR_TARANIS_PROTOCOLS   "AUS\0""PPM\0""XJT\0""DSM2""CRSF"

#define LEN_XJT_PROTOCOLS    "\004"
#define TR_XJT_PROTOCOLS     "AUS\0""D16\0""D8\0 ""LR12"

#define LEN_DSM_PROTOCOLS      "\004"
#define TR_DSM_PROTOCOLS       "LP45""DSM2""DSMX"  //LP45 =Low Power 4 und 5 Kanal

#define LEN_VTRIMINC           TR("\007", "\014") // urspr\205glich "\006", "\013"
#define TR_VTRIMINC            TR("Expo   ""ExFein ""Fein   ""Mittel ""Grob   ", "Exponentiell""Extrafein   ""Fein        ""Mittel      ""Grob        ")

#define LEN_VDISPLAYTRIMS      "\006"
#define TR_VDISPLAYTRIMS       "Nein\0 ""Kurz\0 ""Ja\0"  //Trimmwerte Keine, kurze Anzeigen, Ja

#define LEN_VBEEPCOUNTDOWN     "\006"
#define TR_VBEEPCOUNTDOWN      "Kein\0 Pieps\0StimmeHaptik"

#define LEN_VVARIOCENTER       "\006"
#define TR_VVARIOCENTER        "Ton\0  ""Ruhe  "

#define LEN_CURVE_TYPES        "\010"
#define TR_CURVE_TYPES         " Nur Y  "" X und Y"      //"Standard""Custom\0"

#define LEN_RETA123            "\001"

#if defined(CPUM2560)
  #define TR_RETA123           "SHGQ123ab"
#else
  #define TR_RETA123           "SHGQ123"
#endif

#define LEN_VPROTOS            "\006"

#if defined(PXX)
  #define TR_PXX               "PXX\0  "
#elif defined(DSM2) || defined(IRPROTOS)
  #define TR_PXX               "[PXX]\0"
#else
  #define TR_PXX
#endif

#if defined(DSM2)
  #define TR_DSM2              "LP45\0 ""DSM2\0 ""DSMX\0 "
#elif defined(IRPROTOS)
  #define TR_DSM2              "[LP45]""[DSM2]""[DSMX]"
#else
  #define TR_DSM2
#endif

#if defined(IRPROTOS)
  #define TR_IRPROTOS          "SILV  TRAC09PICZ  SWIFT\0"
#else
  #define TR_IRPROTOS
#endif

  #define TR_XPPM              "PPM16\0""PPMsim"

#define TR_VPROTOS             "PPM\0  " TR_XPPM TR_PXX TR_DSM2 TR_IRPROTOS

#define LEN_POSNEG             "\003"
#define TR_POSNEG              "POS""NEG"


#define LEN_VCURVEFUNC         "\003"
#define TR_VCURVEFUNC          "---""x>0""x<0""|x|""f>0""f<0""|f|"

#define LEN_VMLTPX             "\010"
#define TR_VMLTPX              "Addiere ""Multipl.""Ersetze "

#define LEN_VMLTPX2            "\002"
#define TR_VMLTPX2             "+=""*="":="

#define LEN_VMIXTRIMS          "\003"
#define TR_VMIXTRIMS           "AUS""EIN""Sei""H\203h""Gas""Que" //Mixer Trim Werte

  #define TR_CSWTIMER          "Takt\0" // TIM = Takt = Taktgenerator
  #define TR_CSWSTICKY         "SRFF\0" // Sticky = RS-Flip-Flop
    #define TR_CSWRANGE
    #define TR_CSWSTAY

#define TR_CSWEQUAL

#define LEN_VCSWFUNC           "\005"
#define TR_VCSWFUNC            "---\0 " TR_CSWEQUAL "a\173x\0 ""a>x\0 ""a<x\0 " TR_CSWRANGE "|a|>x""|a|<x""AND\0 ""OR\0  ""XOR\0 " TR_CSWSTAY "a=b\0 ""a>b\0 ""a<b\0 ""^}x\0 ""|^|}x" TR_CSWTIMER TR_CSWSTICKY

#define LEN_VFSWFUNC           "\012"

#if defined(VARIO)		
  #define TR_VVARIO            "Vario\0    " // nur 10 Zeichen String!
#else
  #define TR_VVARIO            "[Vario]\0  "
#endif

#if defined(AUDIO)
  #define TR_SOUND             "Spiel T\203ne"
#else
  #define TR_SOUND             "Spiel\0    "
#endif

#if defined(HAPTIC)
  #define TR_HAPTIC            "Haptic\0   "
#else
  #define TR_HAPTIC            "[Haptic]\0 "
#endif

#if defined(VOICE)
    #define TR_PLAY_TRACK      "Sag Text\0 "
  #define TR_PLAY_BOTH         "Sag Beide "  
  #define TR_PLAY_VALUE        TR("Sag Wert\0 ", "Sag Wert  ")
#else
  #define TR_PLAY_TRACK        "[Sag Text]"
  #define TR_PLAY_BOTH         "[SagBeide]"
  #define TR_PLAY_VALUE        "[Sag Wert]"
#endif

#define TR_SF_BG_MUSIC        "StartMusik""Stop Musik"

#if defined(SDCARD)
  #define TR_SDCLOGS           "SD-Aufz.\0 "
#else
  #define TR_SDCLOGS           "[SD Aufz.]"
#endif

#if defined(GVARS)
  #define TR_ADJUST_GVAR       "\200ndere \0  "
#else
  #define TR_ADJUST_GVAR       "[\200ndereGV]"
#endif

  #define TR_SF_PLAY_SCRIPT   "[Lua]\0    "

#if defined(DEBUG)
  #define TR_SF_TEST          "Test\0     "
#else
  #define TR_SF_TEST
#endif

#if   defined(OVERRIDE_CHANNEL_FUNCTION)
  #define TR_SF_SAFETY        "Overr.\0   "   //"Overr.\0   "
#else
  #define TR_SF_SAFETY        "---\0      "
#endif

  #define TR_SF_SCREENSHOT

#define TR_SF_RESERVE         "[Reserve]\0"

#if defined(PCBGRUVIN9X) || defined(PCBMEGA2560)
  #define TR_VFSWFUNC          TR_SF_SAFETY "Lehrer \0  ""Inst. Trim""R\205cksetz.\0" TR_ADJUST_GVAR TR_SOUND TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_VVARIO TR_HAPTIC TR_SDCLOGS "LCD Licht\0" TR_SF_TEST
#else
  #define TR_VFSWFUNC          TR_SF_SAFETY "Lehrer \0  ""Inst. Trim""R\205cksetz.\0" TR_ADJUST_GVAR TR_SOUND TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_VVARIO TR_HAPTIC "LCD Licht\0" TR_SF_TEST
#endif

#define LEN_VFSWRESET          TR("\004", "\011")

#if defined(FRSKY)
  #define TR_FSW_RESET_TELEM   TR("Telm", "Telemetrie")
#else
  #define TR_FSW_RESET_TELEM
#endif

#if ROTARY_ENCODERS == 2
  #define TR_FSW_RESET_ROTENC  TR("DGa\0""DGb\0", "DrehGb A\0""DrehGb B\0")
#elif ROTARY_ENCODERS == 1
  #define TR_FSW_RESET_ROTENC  TR("D.G.", "DrehGb\0  ")
#else
  #define TR_FSW_RESET_ROTENC
#endif

 #define TR_FSW_RESET_TIMERS   "Tmr1""Tmr2"

#define TR_VFSWRESET 	       TR(TR_FSW_RESET_TIMERS "All\0" TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC, TR_FSW_RESET_TIMERS "All\0 " TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC)

#define LEN_FUNCSOUNDS         TR("\004", "\006")
#define TR_FUNCSOUNDS          TR("Bp1\0""Bp2\0""Bp3\0""Wrn1""Wrn2""Chee""Rata""Tick""Sirn""Ring""SciF""Robt""Chrp""Tada""Crck""Alrm", "Piep1\0""Piep2\0""Piep3\0""Warn1 ""Warn2 ""Cheep ""Ratata""Tick  ""Siren ""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""AlmClk")

#define LEN_VTELEMCHNS         TR("\004", "\005")

  #define TR_TELEM_RESERVE
  #define TR_TELEM_TIME
  #define TR_SWR
  #define TR_RX_BATT
  #define TR_A3_A4
  #define TR_A3_A4_MIN

#define TR_ASPD_MAX            TR("ASp+", "ASpd+") 

  #define TR_TELEM_RSSI_RX     TR("Rx\0 ", "Rx\0  ")

  #define TR_TELEM_TIMERS 	TR("Tmr1""Tmr2", "Tmr1\0""Tmr2\0")

  #define TR_VTELEMCHNS        "---\0""Akku" TR_TELEM_TIME TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_TIMERS TR_SWR "Tx\0 " TR_TELEM_RSSI_RX TR_RX_BATT "A1\0 ""A2\0 " TR_A3_A4 "Alt\0""Rpm\0""Fuel""T1\0 ""T2\0 ""Spd\0""Dist""GAlt""Cell""Cels""Vfas""Curr""Cnsp""Powr""AccX""AccY""AccZ""Hdg\0""VSpd""ASpd""dTE\0" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "A1-\0""A2-\0" TR_A3_A4_MIN "Alt-""Alt+""Rpm+""T1+\0""T2+\0""Spd+""Dst+" TR_ASPD_MAX "Cel-""Cls-""Vfs-""Cur+""Pwr+" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "Acc\0""Zeit"

#define LENGTH_UNIT_IMP        "ft\0"
#define SPEED_UNIT_IMP         "mph"
#define LENGTH_UNIT_METR       "m\0 "
#define SPEED_UNIT_METR        "kmh"

  #if defined(IMPERIAL_UNITS)
    #define LENGTH_UNIT        LENGTH_UNIT_IMP
    #define SPEED_UNIT         SPEED_UNIT_IMP
  #else
    #define LENGTH_UNIT        LENGTH_UNIT_METR
    #define SPEED_UNIT         SPEED_UNIT_METR
  #endif
  #define LEN_VTELEMUNIT       "\003"
  #define TR_VTELEMUNIT        "V\0 ""A\0 ""m/s""-\0 " SPEED_UNIT LENGTH_UNIT "@\0 ""%\0 ""mA\0""mAh""W\0 "

#define STR_V                  (STR_VTELEMUNIT+1)
#define STR_A                  (STR_VTELEMUNIT+4)

#define LEN_VALARM             "\003"
#define TR_VALARM              "---""Glb""Org""Rot"

#define LEN_VALARMFN           "\001"
#define TR_VALARMFN            "<>"

#define LEN_VTELPROTO          "\007"
#define TR_VTELPROTO           "Kein\0  ""Hub\0   ""WSHHigh"

  #define LEN_AMPSRC           TR("\003", "\005")
  #define TR_AMPSRC            TR("---""A1\0""A2\0""FAS""Cel", "---\0 ""A1\0  ""A2\0  ""FAS\0 ""Cells")

#define LEN_VARIOSRC           "\004"
#if defined(FRSKY_SPORT)
  #define TR_VARIOSRC          "Vspd""A1\0 ""A2\0 ""dTE\0"
#else
  #define TR_VARIOSRC          "Alt\0""Alt+""Vspd""A1\0 ""A2\0 "
#endif

  #define LEN_VTELEMSCREENTYPE "\007" 
  #define TR_VTELEMSCREENTYPE  " Werte "" Balken"

#define LEN_GPSFORMAT          "\004"
#define TR_GPSFORMAT           "GMS\0""NMEA"  //Koordinatenanzeige

#define LEN2_VTEMPLATES        15  // max String L\201nge f\205r Men\205 (original=13)
#define LEN_VTEMPLATES         "\017"  // max String L\201nge 15+cr+lf
#define TR_VTEMPLATES          "Misch. L\203sch.\0 ""Einfach. 4-CH\0 ""Fixe Gassperre\0""V-Leitwerk\0    ""Delta Mischer\0 ""eCCPM\0         ""Hubschrauber\0  ""Servo Tester\0  "

#define LEN_VSWASHTYPE         "\004"
#define TR_VSWASHTYPE          "--- ""120 ""120X""140 ""90\0"

#define LEN_VKEYS              "\005"
#define TR_VKEYS               TR("Menu\0""Exit\0""Down\0""Up\0  ""Right""Left\0", "Menu\0""Exit\0""Enter""Page\0""Plus\0""Minus")

#define LEN_VRENCODERS         "\003"
#define TR_VRENCODERS          "DGa""DGb" //Digitalgeber a und b = Drehgeber

#define LEN_VSWITCHES          "\003"
#define LEN_VSRCRAW            "\004"

#define TR_STICKS_VSRCRAW      TR("Sei\0""H\203h\0""Gas\0""Qur\0", "\307Sei""\307H\203h""\307Gas""\307Qur")
#define TR_TRIMS_VSRCRAW       TR("TrmS""TrmH""TrmG""TrmQ", "\313Sei""\313H\203h""\313Gas""\313Qur")

  #define TR_POTS_VSRCRAW      "P1\0 ""P2\0 ""P3\0 "
  #define TR_SW_VSRCRAW        "3POS"
  #define TR_9X_3POS_SWITCHES  "ID0""ID1""ID2"

  #define TR_LOGICALSW         "L1\0""L2\0""L3\0""L4\0""L5\0""L6\0""L7\0""L8\0""L9\0""L10""L11""L12"

#define TR_TRIMS_SWITCHES      TR("tSl""tSr""tHd""tHu""tGd""tGu""tQl""tQr", "\313Sl""\313Sr""\313Hd""\313Hu""\313Gd""\313Gu""\313Ql""\313Qr")

#if defined(PCBGRUVIN9X) || defined(PCBMEGA2560)
  #define TR_ROTARY_ENCODERS   "DGa\0""DGb\0"
  #define TR_ROTENC_SWITCHES   "DGa""DGb"
#else
  #define TR_ROTARY_ENCODERS
  #define TR_ROTENC_SWITCHES
#endif

  #define TR_PHYS_SWITCHES     "THR""RUD""ELE""AIL""GEA""TRN"

#define TR_ON_ONE_SWITCHES     "ON\0""One"

  #define TR_VSWITCHES         "---" TR_9X_3POS_SWITCHES TR_PHYS_SWITCHES TR_TRIMS_SWITCHES TR_ROTENC_SWITCHES TR_LOGICALSW TR_ON_ONE_SWITCHES

#if defined(HELI)
#define TR_CYC_VSRCRAW         "CYC1""CYC2""CYC3"
#else
#define TR_CYC_VSRCRAW         "[C1]""[C2]""[C3]"
#endif

  #define TR_EXTRA_VSRCRAW

#define TR_VSRCRAW             "---\0" TR_STICKS_VSRCRAW TR_POTS_VSRCRAW TR_ROTARY_ENCODERS "MAX\0" TR_CYC_VSRCRAW TR_TRIMS_VSRCRAW TR_SW_VSRCRAW TR_EXTRA_VSRCRAW

#define LEN_VTMRMODES          "\003"
#define TR_VTMRMODES           "AUS""EIN""GSs""GS%""GSt"

#define LEN_VTRAINERMODES      "\022"
#define TR_VTRAINERMODES       "Lehrer/Buchse\0    ""Sch\205ler/Buchse\0   ""Lehrer/SBUS Modul\0""Lehrer/CPPM Modul\0""Lehrer/Batterie\0"

#define LEN_VFAILSAFE          "\015" // "\013" original
#define TR_VFAILSAFE           "Kein Failsafe""Halte Pos.\0  ""Kan\201le\0      ""Kein Signal\0 ""Empf\201nger\0   "

#if defined(MAVLINK)
  #define LEN_MAVLINK_BAUDS    "\006"
  #define TR_MAVLINK_BAUDS     "4800  ""9600  ""14400 ""19200 ""38400 ""57600 ""76800 ""115200"
  #define LEN_MAVLINK_AC_MODES "\011"
  #define TR_MAVLINK_AC_MODES  "Stabilize""Acro     ""Alt Hold ""Auto     ""Guided   ""Loiter   ""RTL      ""Circle   ""Pos Hold ""Land     ""OF Loiter""Toy A    ""Toy M    ""INVALID  "
  #define LEN_MAVLINK_AP_MODES "\015"
  #define TR_MAVLINK_AP_MODES  "Manual       ""Circle       ""Stabilize    ""Training     ""Fly by Wire A""Fly by Wire A""Auto         ""RTL          ""Loiter       ""Guided       ""Initialising ""INVALID      "
#endif

#define LEN_VSENSORTYPES        "\012"
#define TR_VSENSORTYPES        "Sensor\0   ""Berechnung"

#define LEN_VFORMULAS          "\014"  // "\10" urspr\205nglich
#define TR_VFORMULAS           "Addieren\0   ""Mittelwert\0 ""Min\0        ""Max\0        ""Multiplizier""Gesamt\0     ""Zelle\0      ""Verbrauch\0  ""Distanz\0    "

#define LEN_VPREC              "\004"  //  "\005"  Prec0 Prec1 Prec2 urspr\205nglich
#define TR_VPREC               "0.--""0.0 ""0.00"

#define LEN_VCELLINDEX         "\012"  // "\007" urspr\205nglich
#define TR_VCELLINDEX          "Niedrigst\0""1. Zelle\0 ""2. Zelle\0 ""3. Zelle\0 ""4. Zelle\0 ""5. Zelle\0 ""6. Zelle\0 ""H\203chster\0 ""Differenz\0"

// ZERO TERMINATED STRINGS
  #define INDENT               "\001"
  #define LEN_INDENT           1
  #define INDENT_WIDTH         (FW/2)
  #define BREAKSPACE           " "

  #define TR_ENTER             "[MENU]"

#define TR_EXIT                "[EXIT]"

  #define TR_POPUPS            TR_ENTER "\010" TR_EXIT
  #define OFS_EXIT             sizeof(TR_ENTER)

#define TR_MENUWHENDONE        CENTER"\010"TR_ENTER" > Weiter"
#define TR_FREE                "frei"
#define TR_DELETEMODEL         "Modell l\203schen?"
#define TR_COPYINGMODEL        "Kopiere Modell"
#define TR_MOVINGMODEL         "Schiebe Modell"
#define TR_LOADINGMODEL        "Lade Modell..."
#define TR_NAME                "Name"
#define TR_MODELNAME           "Modellname"
#define TR_PHASENAME           "Phase-Name"
#define TR_MIXNAME             "Mix-Name"
#define TR_INPUTNAME           "Input-Name"
#define TR_EXPONAME          "Info-Name" // Expo Name
#define TR_BITMAP              "Modellfoto"
#define TR_TIMER               TR("Timer", "Timer ")  // f\205r Timer1 Timer2 Timer3
#define TR_ELIMITS             TR("Erw. Limit", "Erw. Wege auf 150%")
#define TR_ETRIMS              TR("Erw. Trims", "Erw. Trim  auf 100%")
#define TR_TRIMINC             TR("Trim Schr.", "Trimmschritte")
#define TR_DISPLAY_TRIMS       TR("Trim anzeig", "Trimwerte anzeigen")
#define TR_TTRACE              TR("Gasquelle", INDENT "Gas-Timerquelle")
#define TR_TTRIM 	       			 TR("Gastrim", INDENT "Gas-Leerlauftrim")  
#define TR_BEEPCTR             TR("Mitt.Piep", "Mittelstell. -Pieps")
#define TR_USE_GLOBAL_FUNCS    TR("Glob. Funkt.", "Globale Funkt verw.")
#define TR_PROTO               TR(INDENT "Protok.", INDENT "Protokoll")
  #define TR_PPMFRAME          "PPM frame"
#define TR_MS                  "ms"
#define TR_SWITCH              TR("Schalt.", "Schalter")
#define TR_TRIMS               "Trims"
#define TR_FADEIN              "Langs. Ein"
#define TR_FADEOUT             "Langs. Aus"
#define TR_DEFAULT             "(Normal)"
#define TR_CHECKTRIMS          CENTER"\006Check\012Trims"
#define OFS_CHECKTRIMS         CENTER_OFS+(9*FW)
#define TR_SWASHTYPE			     TR("Typ Taumelsch", "Typ  Taumelscheibe")
#define TR_COLLECTIVE	         TR("Kollekt. Pitch", "Kollekt. Pitch Quelle")
#define TR_AILERON             "Roll Quelle"
#define TR_ELEVATOR            "Nick Quelle"
#define TR_SWASHRING           TR("Ring   Begrenz", "Ring Begrenzung")
#define TR_ELEDIRECTION        TR("Nick   Richtung", "Nick   Servo Richtung")
#define TR_AILDIRECTION        TR("Roll   Richtung", "Roll   Servo Richtung") 
#define TR_COLDIRECTION        TR("Pitch Richtung", "Pitch Servo Richtung") 
#define TR_MODE                INDENT "Modus"
#define TR_NOFREEEXPO          "Expos voll!"
#define TR_NOFREEMIXER         "Mischer voll!"
#define TR_INSERTMIX           "MISCHER Hinz."
#define TR_EDITMIX             "MISCHER Edit"
#define TR_SOURCE              INDENT "Quelle"
#define TR_WEIGHT              "Gewicht"
#define TR_EXPO                TR("Expo", "Exponential")
#define TR_SIDE                "Seite"
#define TR_DIFFERENTIAL        "Diff"
#define TR_OFFSET              INDENT "Offset"
#define TR_TRIM                "Trim"
#define TR_DREX                "DRex"
#define DREX_CHBOX_OFFSET      30
#define TR_CURVE               "Kurve"
#define TR_FLMODE              TR("Phase", "Phasen")
#define TR_MIXWARNING          "Warnung"
#define TR_OFF                 "AUS"
#define TR_MULTPX              "Wirkung"
#define TR_DELAYDOWN           "Verz. Dn"
#define TR_DELAYUP             "Verz. Up"
#define TR_SLOWDOWN            "Langs.Dn"
#define TR_SLOWUP              "Langs.Up"
#define TR_MIXER               "MISCHER"
#define TR_CV                  "KV"
#define TR_GV                  "GV"
#define TR_ACHANNEL            TR("A\004gemessen", "A\004Kanal gemessen =>") //9XR-Pro
#define TR_RANGE               TR(INDENT "Bereich", INDENT "Variobereich m/s") // 9XR-Pro
#define TR_CENTER              TR(INDENT "Mitte m/s", INDENT "Variomitte     m/s")
#define TR_BAR                 "Streifen"
#define TR_ALARM               TR(INDENT "Alarme ", INDENT "Ein bei Alarm")  //9XR-Pro
#define TR_USRDATA             "Daten berechnen aus"
#define TR_BLADES              TR(INDENT "Prop", INDENT "Prop-Bl\201tter") //9XR-Pro
#define TR_SCREEN              "Telm-Bild "
#define TR_SOUND_LABEL         "----T\203ne---------"
#define TR_LENGTH              INDENT "Dauer"
#define TR_BEEP_LENGTH         INDENT "Beep-L\201nge"
#define TR_SPKRPITCH           INDENT "Beep-Freq. +/-"
#define TR_HAPTIC_LABEL        "----Haptik-------" //9XR-Pro
#define TR_HAPTICSTRENGTH      INDENT "St\201rke"
#define TR_CONTRAST            "LCD-Kontrast"
#define TR_ALARMS_LABEL        "----Alarm wenn---"
#define TR_BATTERY_RANGE       TR("Akku Bereich", "Akku Spgs-Bereich") // Symbol Akku Ladezustand
#define TR_BATTERYWARNING      INDENT "Akkuspg kleiner"
#define TR_INACTIVITYALARM     TR(INDENT "Inaktivit\201t", INDENT "Inaktivit\201t nach") //9XR-Pro
#define TR_MEMORYWARNING       INDENT "Speicher voll"
#define TR_ALARMWARNING        TR(INDENT "Alle T\203ne aus?", INDENT "Alle T\203ne ganz aus?")
#define TR_RENAVIG             "Drehgeb. Navig."
#define TR_THROTTLE_LABEL      "----Gas-Kontrolle----"
#define TR_THROTTLEREVERSE     TR("Gas invers", INDENT "Vollgas hinten?") //\200nderung wg TH9x, Taranis
#define TR_TIMER_NAME          INDENT "Name"
#define TR_MINUTEBEEP          TR(INDENT "Min-Alarm", INDENT "Minuten-Alarm")
#define TR_BEEPCOUNTDOWN       INDENT "Countdown"
#define TR_PERSISTENT          TR(INDENT "Permanent", INDENT "Permanent")
#define TR_BACKLIGHT_LABEL     "----LCD-Beleuchtg----"
#define TR_BLDELAY             INDENT "Dauer"
#define TR_BLONBRIGHTNESS      INDENT "An-Helligkeit"
#define TR_BLOFFBRIGHTNESS     INDENT "Aus-Helligkeit"
#define TR_BLCOLOR             INDENT "Farbe"
#define TR_SPLASHSCREEN        TR("Startbild Ein", "Startbild Ein f\205r")
#define TR_THROTTLEWARNING     TR("Gasalarm", INDENT "Gas Alarm")
#define TR_SWITCHWARNING       TR("Sch. Alarm", INDENT "Schalter-Alarm")
#define TR_POTWARNING          TR("Pot Warn.", INDENT "Poti-Warnung")
#define TR_TIMEZONE            TR("Zeitzone", "GPS-Zeitzone +/-Std")
#define TR_ADJUST_RTC          INDENT "Uhrzeit per GPS setzen"
#define TR_GPS                 "----GPS--------------"
#define TR_RXCHANNELORD        TR("Kanalanordnung", "Kanalvoreinstellung")
#define TR_STICKS              "Kn\205ppel"
#define TR_POTS                "Potis"
#define TR_SWITCHES            "Schalter"
#define TR_SWITCHES_DELAY      TR("Sw. Mitte Delay", "Schaltermitte Verz.")   //Schalter Mitten verz\203gern Anpassung
#define TR_SLAVE               TR("Sch\205ler PPM1-16", "Sch\205ler PPM1-16 als Ausgang")
#define TR_MODESRC             " Modus\003%  Quelle"
#define TR_MULTIPLIER          "Multiplikator"
#define TR_CAL                 "Kal."
#define TR_VTRIM               "Trim - +"
#define TR_BG                  "BG:"
  #define TR_MENUTOSTART       CENTER"\007"TR_ENTER" zum Start"
  #define TR_SETMIDPOINT       TR(CENTER "\002Kn\205ppel+Potis auf Mitte", CENTER "\002Kn\205ppel+Potis auf Mitte")
  #define TR_MOVESTICKSPOTS    CENTER"\003Kn\205ppel+Potis bewegen"
#define TR_RXBATT              "Rx Akku:"
#define TR_TXnRX               "Tx:\0Rx:"
#define OFS_RX                 4
#define TR_ACCEL               "Acc:"
#define TR_NODATA              CENTER"Keine Daten"
#define TR_TOTTM1TM2THRTHP     "\037\146SES\036TM1\037\146TM2\036GAS\037\146GS%"
#define TR_TMR1LATMAXUS        "Tmr1Lat max\037\124us"
#define STR_US                 (STR_TMR1LATMAXUS+13)
#define TR_TMR1LATMINUS        "Tmr1Lat min\037\124us"
#define TR_TMR1JITTERUS        "Tmr1 Jitter\037\124us"

  #define TR_TMIXMAXMS         "Tmix max\037\124ms"
  #define TR_FREESTACKMINB     "Free Stack\037\124b"

#define TR_MENUTORESET         CENTER TR_ENTER" f\205r Reset"
#define TR_PPM_TRAINER         "TR"              //old #define TR_PPM      "PPM"
#define TR_CH                  "CH"
#define TR_MODEL               "MODELL"
#define TR_FP                  "FP"
#define TR_MIX                 "MIX"
#define TR_EEPROMLOWMEM        "EEPROM voll"
#define TR_ALERT               "WARNUNG"
#define TR_PRESSANYKEYTOSKIP	 TR("Taste dr\205cken",CENTER"Taste dr\205cken")	
#define TR_THROTTLENOTIDLE     "Gas nicht Null!"
#define TR_ALARMSDISABLED      "Alarme ausgeschaltet"
#define TR_PRESSANYKEY         TR("Taste dr\205cken",CENTER"Taste dr\205cken")
#define TR_BADEEPROMDATA       "EEPROM ung\205ltig"
#define TR_EEPROMFORMATTING    "EEPROM Initialisieren"
#define TR_EEPROMOVERFLOW      "EEPROM \204berlauf"
#define TR_MENURADIOSETUP      TR("SENDER-EINSTELLEN", "SENDER-GRUNDEINSTELLUNGEN")
#define TR_MENUDATEANDTIME     "DATUM UND ZEIT"
#define TR_MENUTRAINER         TR("LEHRER/SCH\204LER", "LEHRER/SCH\204LER")
#define TR_MENUGLOBALFUNCS     "GLOBALE FUNKTIONEN"
#define TR_MENUVERSION         "VERSION"
#define TR_MENUDIAG            TR("Schalt.", "Schalter-Test")
#define TR_MENUANA             "Analog-Test"
#define TR_MENUCALIBRATION     TR("KALIB. ANALOG", "KALIBRIERUNG Kn\205ppel+Potis")
  #define TR_TRIMS2OFFSETS     "\006Trims => Subtrims"
#define TR_MENUMODELSEL        TR("MODELLE", "MODELL W\200HLEN")
#define TR_MENUSETUP           TR("MODELL-EINSTELLUNG", "MODELL-EINSTELLUNGEN")
#define TR_MENUFLIGHTPHASE     "FLUGPHASE"
#define TR_MENUFLIGHTPHASES    "FLUGPHASEN"
#define TR_MENUHELISETUP       TR("HELI TS-Mischer", "HELI TS-Mischer CYC1-3")

  #define TR_MENUINPUTS        TR("DR/EXPO", "DUALRATE/EXPO")
  #define TR_MENULIMITS        TR("GRENZEN", "SERVOWEGE")

#define TR_MENUCURVES          "KURVEN"
#define TR_MENUCURVE           "KURVE"
#define TR_MENULOGICALSWITCH   "LOGIKSCHALTER"
#define TR_MENULOGICALSWITCHES "LOGIKSCHALTER"
#define TR_MENUCUSTOMFUNC      TR("SPEZ.-FUNKTIONEN", "SPEZIAL-FUNKTIONEN")
#define TR_MENUCUSTOMSCRIPTS   "LUA-SCRIPTE"
#define TR_MENUCUSTOMSCRIPT    "LUA-SCRIPT"
#define TR_MENUTELEMETRY       "TELEMETRIE"
#define TR_MENUTEMPLATES       "VORLAGEN"
#define TR_MENUSTAT            "STAT"
#define TR_MENUDEBUG           "DEBUG"
  #define TR_RXNUM             "Empf Nr."
#define TR_SYNCMENU            "Sync [MENU]"
#define TR_LIMIT               INDENT "Grenzen"   
#define TR_MINRSSI             "Min. RSSI"
#define TR_LATITUDE            "Breite:"
#define TR_LONGITUDE           "L\201nge:"
#define TR_GPSCOORD            TR("GPS-Koord.", "GPS-Koordinaten-Format")
#define TR_VARIO               TR("----Vario--------", "----Variometer----") //9XR-Pro
#define TR_PITCH_AT_ZERO       INDENT "Niedrigster Ton"
#define TR_PITCH_AT_MAX        INDENT "H\203chster Ton"
#define TR_REPEAT_AT_ZERO      INDENT "Wiederholrate"
#define TR_POWEROFF            "\027Power OFF..."
#define TR_SHUTDOWN            "Herunterfahren"
#define TR_SAVEMODEL           "Modelleinstellungen speichern"
#define TR_BATT_CALIB          "Akku Spg messen"
#define TR_CURRENT_CALIB       "Strom abgl."
#define TR_VOLTAGE             TR(INDENT "Spg", INDENT "Spannungsquelle")  //9XR-Pro
#define TR_CURRENT             TR(INDENT "Strom", INDENT "Stromquelle")
#define TR_SELECT_MODEL        "Modell W\201hlen"
#define TR_CREATE_MODEL        "Neues Modell"
#define TR_COPY_MODEL          "Kopiere Modell"
#define TR_MOVE_MODEL          "Verschiebe Modell"
#define TR_BACKUP_MODEL        "Modell auf SD-Karte"  //9XR-Pro
#define TR_DELETE_MODEL        "Modell L\203schen" // TODO merged into DELETEMODEL?
#define TR_RESTORE_MODEL       "Modell Restore"
#define TR_SDCARD_ERROR        "SD-Kartenfehler"
#define TR_NO_SDCARD           "Keine SD-Karte"
#define TR_SDCARD_FULL         "SD-Karte voll"
#define TR_INCOMPATIBLE        "Nicht kompatibel"
#define TR_WARNING             "WARNUNG"
#define TR_EEPROMWARN          "EEPROM"
#define TR_EEPROM_CONVERTING   "EEPROM Converting"
#define TR_THROTTLEWARN        "GAS"
#define TR_ALARMSWARN          "ALARM"
#define TR_SWITCHWARN          "SCHALTER"
#define TR_FAILSAFEWARN        "FAILSAFE"
#define TR_NO_FAILSAFE         TR("Failsafe not set", "Failsafe nicht programmiert")
#define TR_KEYSTUCK            "Taste klemmt"  //Key stuck=Taste klemmt 
#define TR_INVERT_THR          TR("Gas umkehren?", "Vollgas hinten?") // Th9x 9XR 
#define TR_SPEAKER_VOLUME      INDENT "Lautst\201rke"
#define TR_LCD                 "Bildschirm"
#define TR_BRIGHTNESS          INDENT "Helligkeit"
#define TR_CPU_TEMP            "CPU-Temp.\016>"
#define TR_CPU_CURRENT         "Strom\022>"
#define TR_CPU_MAH             "Verbrauch"
#define TR_COPROC              "CoProz."
#define TR_COPROC_TEMP         "MB Temp. \016>"
#define TR_CAPAWARNING         INDENT "Kapaz. niedrig" // wg 9XR-Pro
#define TR_TEMPWARNING         INDENT "Temp.   gr\203\206er"  //wg 9XR-Pro
#define TR_FUNC                "Funktion"
#define TR_V1                  "V1"
#define TR_V2                  "V2"
#define TR_DURATION            "Dauer"
#define TR_DELAY               "Verz\203g."
#define TR_SD_CARD             "SD-Karte"
#define TR_SDHC_CARD           "SDHC-Karte"
#define TR_NO_SOUNDS_ON_SD     "Keine T\203ne auf SD"
#define TR_NO_MODELS_ON_SD     "Kein Modell auf SD"
#define TR_NO_BITMAPS_ON_SD    "Keine Bitmaps auf SD"
#define TR_NO_SCRIPTS_ON_SD    "Keine Scripte auf SD"
#define TR_SCRIPT_SYNTAX_ERROR "Script Syntax Fehler"
#define TR_SCRIPT_PANIC        "Script panic"   //??
#define TR_SCRIPT_KILLED       "Script killed"  //??
#define TR_SCRIPT_ERROR        "Unbekannter Fehler"
#define TR_PLAY_FILE           "Spielen"
#define TR_DELETE_FILE         "L\203schen"
#define TR_COPY_FILE           "Kopieren"
#define TR_RENAME_FILE         "Umbenennen"
#define TR_ASSIGN_BITMAP       "Bitmap zuordnen"
#define TR_EXECUTE_FILE        "Execute"
#define TR_REMOVED             " gel\203scht"
#define TR_SD_INFO             "Information"
#define TR_SD_FORMAT           "Formatieren"
#define TR_NA                  "N/V"	//NV=Nicht Verf\205gbar  Kurz-Meldung 
#define TR_HARDWARE            TR("Hardware einst. ", "Namen und Hardware einst.")
#define TR_FORMATTING          "Formatierung..."
#define TR_TEMP_CALIB          "Temp.  abgl."
#define TR_TIME                "Uhrzeit:"
#define TR_BAUDRATE            "BT Baudrate"
#define TR_SD_INFO_TITLE       "SD-INFO"
#define TR_SD_TYPE             "Typ:"
#define TR_SD_SPEED            "Geschw:"
#define TR_SD_SECTORS          "Sectoren:"
#define TR_SD_SIZE             "Gr\203\206e:"
#define TR_TYPE                INDENT "Type"
#define TR_GLOBAL_VARS         "Globale Variablen"
#define TR_GLOBAL_V            "GLOBALE V."
#define TR_GLOBAL_VAR          "Globale Variable"
#define TR_MENUGLOBALVARS      "GLOBALE VARIABLEN"
#define TR_OWN                 "Eigen"
#define TR_DATE                "Datum:"
#define TR_ROTARY_ENCODER      "Drehgeber"
#define TR_CHANNELS_MONITOR    "Kanal-Monitor==>"
#define TR_MIXERS_MONITOR      "==>Mischer Monitor"
#define TR_PATH_TOO_LONG       "Pfad zu Lang"
#define TR_VIEW_TEXT           "View Text"
#define TR_FLASH_BOOTLOADER      "Flash BootLoader selbst"      //
#define TR_FLASH_EXTERNAL_DEVICE "Flash externes Ger\201t"
#define TR_FLASH_INTERNAL_MODULE "Flash internes XJT-Modul"
#define TR_WRITING               "\032Writing..."        //
#define TR_CONFIRM_FORMAT      "Formatieren best\201tigen?"
#define TR_INTERNALRF          "----Internes HF-Modul----------"
#define TR_EXTERNALRF          TR("---Externes HF-Modul---", "----Externes HF-Modul----------")  //9XR-Pro
#define TR_FAILSAFE            TR(INDENT "Failsafe", INDENT "Failsafe Mode")
#define TR_FAILSAFESET         "Failsafe setzen"
#define TR_MENUSENSOR          "SENSOR"
#define TR_COUNTRYCODE         "Landescode"
#define TR_VOICELANG           "Sprach-Ansage"
#define TR_UNITSSYSTEM         "Einheiten"
#define TR_EDIT                "Zeile Editieren"
#define TR_INSERT_BEFORE       "Neue Zeile davor"
#define TR_INSERT_AFTER        "Neue Zeile danach"
#define TR_COPY                "Zeile kopieren"
#define TR_MOVE                "Zeile verschieben"
#define TR_PASTE               "Zeile einf\205gen"
#define TR_DELETE              "Zeile l\203schen"
#define TR_INSERT              "Neue Zeile"
#define TR_RESET_FLIGHT        "Reset Flugdaten"
#define TR_RESET_TIMER1        "Reset Timer1"
#define TR_RESET_TIMER2        "Reset Timer2"
#define TR_RESET_TIMER3	       "Reset Timer3"
#define TR_RESET_TELEMETRY     "Reset Telemetrie"
#define TR_STATISTICS          "Statistik und Gas"
#define TR_ABOUT_US            "Die Programmierer"
#define TR_AND_SWITCH          "UND Schalt" //UND mit weiterem Schaltern 
#define TR_SF                  "SF" //Spezial Funktionen 
#define TR_GF                  "GF" // Globale Funktionen
#define TR_SPEAKER             INDENT "Lautspr"
#define TR_BUZZER              INDENT "Summer"
#define TR_BYTES               "Bytes"
#define TR_MODULE_BIND         TR("Bind","[Bind]")   //9XR-Pro
#define TR_MODULE_RANGE        TR("Rang", "[Range]")  //9XR-Pro
#define TR_RESET_BTN           TR("[Reset]", "[Reset Trim]")
#define TR_SET                 "[Set]"
#define TR_TRAINER             "----DSC Buchse PPM In/Out------" //DSC Buchse Trainer Buchse
#define TR_ANTENNAPROBLEM      CENTER "TX-Antennenproblem!"
#define TR_MODELIDUSED         TR("ID schon benutzt", "Modell-ID schon benutzt")
#define TR_MODULE              INDENT "Modul-Typ"
#define TR_TELEMETRY_TYPE      TR("Typ", "Telemetrytyp")
#define TR_TELEMETRY_SENSORS   "----Sensoren----"
#define TR_VALUE               "Wert"
#define TR_TOPLCDTIMER         "Top LCD Timer"
#define TR_UNIT                "Einheit"
#define TR_TELEMETRY_NEWSENSOR INDENT "Sensor hinzuf\205gen ..."
#define TR_CHANNELRANGE        TR(INDENT "Kan\201le", INDENT "Ausgangs Kan\201le")  //wg 9XR-Pro
#define TR_LOWALARM            INDENT "Vor-Alarm bei"
#define TR_CRITICALALARM       INDENT "Kritisch-Alarm"
#define TR_ENABLE_POPUP        "Freigabe Popup-Fenster"
#define TR_DISABLE_POPUP       "Sperren  Popup-Fenster"
#define TR_CURVE_PRESET        "Gerade 0 11 22 33 45"
#define TR_PRESET              "Preset"
#define TR_MIRROR              "Spiegeln"
#define TR_CLEAR               "L\203schen"
#define TR_RESET               "Servowerte r\205cksetzen"
#define TR_RESET_SUBMENU       TR("Reset Werte   ==>", "Reset=>Timer Flug Telem")
#define TR_COUNT               "Punkte"
#define TR_PT                  "Pt"
#define TR_PTS                 "Pts"
#define TR_SMOOTH              "Runden"
#define TR_COPY_STICKS_TO_OFS  "Kopie Stick to Servo-Mitte"  
#define TR_COPY_TRIMS_TO_OFS   "Kopie Trimm to Servo-Mitte"  // "Trim to Subtrim"
#define TR_INCDEC              "Inc/Decrement"
#define TR_GLOBALVAR           "Global Var"
#define TR_MIXSOURCE           "Mixer Quelle"
#define TR_CONSTANT            "Konstant"
#define TR_PERSISTENT_MAH      TR(INDENT "Spr. mAh", INDENT "Speichern mAh") //9XR-Pro
#define TR_PREFLIGHT           TR("---Vorflug-Checkliste--", "----Vorflug-Checkliste----")
#define TR_CHECKLIST           TR(INDENT "Checkliste", INDENT "Checkliste anzeigen") //9XR-Pro
#define TR_FAS_OFFSET          TR(INDENT "FAS-Ofs", INDENT "FAS-Offset")
#define TR_UART3MODE           "Serieller Port"
#define TR_SCRIPT              "Lua-Script"
#define TR_INPUTS              "Inputs"
#define TR_OUTPUTS             "Outputs"
#define TR_EEBACKUP            "\002[ENTER Long] Backup EEPROM->SD-Karte"
#define TR_FACTORYRESET        "\004[MENU Long] ALLES komplett l\203schen"
#define TR_CONFIRMRESET        "ALLE Modelle + Einst. l\203schen?"
#define TR_TO_MANY_LUA_SCRIPTS "Zu viele Lua-Scripte!!"

#if defined(MAVLINK)
  #define TR_MAVLINK_RC_RSSI_SCALE_LABEL   "Max RSSI"
  #define TR_MAVLINK_PC_RSSI_EN_LABEL      "PC RSSI EN"
  #define TR_MAVMENUSETUP_TITLE            "Mavlink Setup"
  #define TR_MAVLINK_BAUD_LABEL            "Baudrate"
  #define TR_MAVLINK_INFOS                 "INFOS"
  #define TR_MAVLINK_MODE                  "MODE"
  #define TR_MAVLINK_CUR_MODE              "Current Mode"
  #define TR_MAVLINK_ARMED                 "Armed"
  #define TR_MAVLINK_BAT_MENU_TITLE        "BAT RSSI"
  #define TR_MAVLINK_BATTERY_LABEL         "Flugakku-Status"
  #define TR_MAVLINK_RC_RSSI_LABEL         "RC RSSI"
  #define TR_MAVLINK_PC_RSSI_LABEL         "PC RSSI"
  #define TR_MAVLINK_NAV_MENU_TITLE        "NAV"
  #define TR_MAVLINK_COURSE                "Course"
  #define TR_MAVLINK_HEADING               "Heading"
  #define TR_MAVLINK_BEARING               "Bearing"
  #define TR_MAVLINK_ALTITUDE              "Altitude"
  #define TR_MAVLINK_GPS                   "GPS"
  #define TR_MAVLINK_NO_FIX                "NO Fix"
  #define TR_MAVLINK_SAT                   "SAT"
  #define TR_MAVLINK_HDOP                  "HDOP"
  #define TR_MAVLINK_LAT                   "LAT"
  #define TR_MAVLINK_LON                   "LON"
#endif

// Taranis Info Zeile Anzeigen
#define TR_PHASES_HEADERS      { " Name ", " Schalter ", " Trim Seite ", " Trim H\203he ", " Trim Gas ", " Trim Quer ", " Fade In ", " Fade Out " }
#define TR_LIMITS_HEADERS      { " Name ", " Mitte ", " Min ", " Max ", " Richtung ", " Kurve ", " PPM-Mitte ", " Mitte-Mode " }
#define TR_CSW_HEADERS         { " Funktion ", " Var1 ", " Var2 ", " Var2 ", " UND-Schalter ", " Dauer ", " Verz\203gerung " }

//Taranis About screen
#define TR_ABOUTUS             "\204ber nextsteprc"

#define TR_ABOUT_nextsteprc_1      "nextsteprc ist Open Source,"
#define TR_ABOUT_nextsteprc_2      "nicht kommerziell, ohne"
#define TR_ABOUT_nextsteprc_3      "Funktionsgarantie, frei"
#define TR_ABOUT_nextsteprc_4      "verf\205gbar. Unterst\205tzung"
#define TR_ABOUT_nextsteprc_5      "durch Spenden willkommen"

#define TR_ABOUT_BERTRAND_1    "Bertrand Songis"
#define TR_ABOUT_BERTRAND_2    "nextsteprc Hauptauthor"
#define TR_ABOUT_BERTRAND_3    "Companion9x-Mitentwickler"

#define TR_ABOUT_MIKE_1        "Mike Blandford"
#define TR_ABOUT_MIKE_2        "Code- und Treiber-Guru"
#define TR_ABOUT_MIKE_3        "Wohl einer der Besten."
#define TR_ABOUT_MIKE_4        "Sehr inspirierend."
       
#define TR_ABOUT_ROMOLO_1      "Romolo Manfredini"
#define TR_ABOUT_ROMOLO_2      "Companion9x-Hauptentwickler"
#define TR_ABOUT_ROMOLO_3      ""

#define TR_ABOUT_ANDRE_1       "Andre Bernet"
#define TR_ABOUT_ANDRE_2       "Funktionalit\201t und Tests,"
#define TR_ABOUT_ANDRE_3       "Debugging, Dokumentation"

#define TR_ABOUT_ROB_1         "Rob Thomson"
#define TR_ABOUT_ROB_2         "Openrcforums Webmaster"

#define TR_ABOUT_KJELL_1       "Kjell Kernen"
#define TR_ABOUT_KJELL_2       "www.open-tx.org Hauptautor"
#define TR_ABOUT_KJELL_3       "Author von nextsteprc Recorder"
#define TR_ABOUT_KJELL_4       "Companion contributor"

#define TR_ABOUT_MARTIN_1      "Martin Hotar"
#define TR_ABOUT_MARTIN_2      "Grafikdesigner"

  #define TR_ABOUT_HARDWARE_1  "Brent Nelson"
  #define TR_ABOUT_HARDWARE_2  "Sky9x Design/Produktion"
  #define TR_ABOUT_HARDWARE_3  ""

#define TR_ABOUT_PARENTS_1     "Vorg\201nger-Projekte"
#define TR_ABOUT_PARENTS_2     "Ersky9x (Mike Blandford)"
#define TR_ABOUT_PARENTS_3     "ER9X (Erez Raviv)"
#define TR_ABOUT_PARENTS_4     "TH9X (Thomas Husterer)"

#define TR_CHR_SHORT  's' // Taste short
#define TR_CHR_LONG   'l' // Taste long
#define TR_CHR_TOGGLE 't' // Taste als togglefunktion = Ein Aus Ein 
#define TR_CHR_HOUR   'h' // Stunden
#define TR_CHR_INPUT  'I' // Values between A-I will work

#define TR_BEEP_VOLUME         "Beep-Lautst."
#define TR_WAV_VOLUME          "Wave-Lautst."
#define TR_VARIO_VOLUME        "Vario-Lautst."
#define TR_BG_VOLUME           "Hintergr-Lautst."

#define TR_TOP_BAR             "----Infozeile----"
#define TR_ALTITUDE            INDENT "H\203henanzeige"
#define TR_SCALE               "Skalierer"
#define TR_VIEW_CHANNELS       "Zeige Kan\201le"
#define TR_VIEW_NOTES          "Zeige Notizen"
#define TR_MODS_FORBIDDEN      "Ver\201nderungen verboten!"
#define TR_UNLOCKED            "Entsperrt"
#define TR_ID                  "ID"
#define TR_PRECISION           "Prezision"
#define TR_RATIO               "Umrechnung"  //Faktor, Mulitplikator, Teiler  0,1 bis 10,0
#define TR_FORMULA             "Formel"
#define TR_CELLINDEX           "Zellenindex"
#define TR_LOGS                "Log Daten"
#define TR_OPTIONS             "Optionen"

#define TR_ALTSENSOR           "H\203hen Sensor"
#define TR_CELLSENSOR          "Zellen Sensor"
#define TR_GPSSENSOR           "GPS Sensor"
#define TR_CURRENTSENSOR       "Sensor"
#define TR_AUTOOFFSET          "Auto Offset"
#define TR_ONLYPOSITIVE        "Nur Positiv"
#define TR_FILTER              "Filter aktiv"
#define TR_TELEMETRYFULL       "Telemetriezeilen voll!"
#define TR_INVERTED_SERIAL     INDENT "Invert."
#define TR_IGNORE_INSTANCE     TR(INDENT "Keine ID", INDENT "Keine Multisen-ID")	//unklar
#define TR_DISCOVER_SENSORS    INDENT "Start Sensorsuche"
#define TR_STOP_DISCOVER_SENSORS INDENT "Stop Sensorsuche"
#define TR_DELETE_ALL_SENSORS  INDENT "L\203sche alle Sensoren"
#define TR_CONFIRMDELETE       "Wirklich alle l\203schen?"
// ----------------------------- Symbole f\205r Auswahlliste----------
#define TR_MENU_INPUTS         "\314Inputs"
#define TR_MENU_LUA            "\322Lua Scripte"
#define TR_MENU_STICKS         "\307Kn\205ppel"
#define TR_MENU_POTS           "\310Potis"
#define TR_MENU_MAX            "\315MAX"
#define TR_MENU_HELI           "\316Heli-TS CYC1-3"
#define TR_MENU_TRIMS          "\313Trimmung"
#define TR_MENU_SWITCHES       "\312Schalter"
#define TR_MENU_LOGICAL_SWITCHES "\312Log. Schalter"
#define TR_MENU_TRAINER        "\317Trainer"
#define TR_MENU_CHANNELS       "\320Kan\201le"
#define TR_MENU_GVARS          "\311Glob. Vars"
#define TR_MENU_TELEMETRY      "\321Telemetrie"
#define TR_MENU_OTHER          " Weitere"
#define TR_MENU_INVERT         "Invertieren<!>"
// ----------------------------------------------------------------
#define ZSTR_RSSI              "\022\023\023\011"
#define ZSTR_SWR               "\023\027\022"
#define ZSTR_A1                "\001\034"
#define ZSTR_A2                "\001\035"
#define ZSTR_A3                "\001\036"
#define ZSTR_A4                "\001\037"
#define ZSTR_BATT              "\022\350\002\354"
#define ZSTR_ALT               "\001\364\354"
#define ZSTR_TEMP1             "\024\363\360\034"
#define ZSTR_TEMP2             "\024\363\360\035"
#define ZSTR_RPM               "\022\020\015"
#define ZSTR_FUEL              "\006\353\373\364"
#define ZSTR_VSPD              "\026\023\360\374"
#define ZSTR_ACCX              "\001\375\375\030"
#define ZSTR_ACCY              "\001\375\375\031"
#define ZSTR_ACCZ              "\001\375\375\032"
#define ZSTR_CURR              "\003\353\356\356"
#define ZSTR_VFAS              "\026\006\001\023"
#define ZSTR_ASPD              "\001\023\360\374"
#define ZSTR_GSPD              "\007\023\360\374"
#define ZSTR_HDG               "\010\374\371"
#define ZSTR_CELLS             "\003\373\364\355"
#define ZSTR_GPSALT            "\007\001\364\354"
#define ZSTR_GPSDATETIME       "\004\377\354\373"
#define ZSTR_GPS               "\007\020\023"
#define ZSTR_BATT1_VOLTAGE     "\022\002\034\026"
#define ZSTR_BATT2_VOLTAGE     "\022\002\035\026"
#define ZSTR_BATT1_CURRENT     "\022\002\034\001"
#define ZSTR_BATT2_CURRENT     "\022\002\035\001"
#define ZSTR_BATT1_CONSUMPTION "\022\002\034\003"
#define ZSTR_BATT2_CONSUMPTION "\022\002\035\003"
#define ZSTR_RX1_FAILSAFE      "\022\350\034\006"
#define ZSTR_RX1_LOSTFRAME     "\022\350\034\014"
#define ZSTR_RX1_CONN_LOST     "\022\350\034\003"
#define ZSTR_RX1_NO_SIGNAL     "\022\350\034\023"
#define ZSTR_RX2_FAILSAFE      "\022\350\035\006"
#define ZSTR_RX2_LOSTFRAME     "\022\350\035\014"
#define ZSTR_RX2_CONN_LOST     "\022\350\035\003"
#define ZSTR_RX2_NO_SIGNAL     "\022\350\035\023"