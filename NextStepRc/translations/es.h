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
#define TR_OFFON               "OFF""ON\0"

#define LEN_MMMINV             "\003"
#define TR_MMMINV              "---""INV"

#define LEN_NCHANNELS          "\004"
#define TR_NCHANNELS           "\0014CH\0016CH\0018CH10CH12CH14CH16CH"

#define LEN_VBEEPMODE          "\005"
#define TR_VBEEPMODE           "Mudo ""Alarm""NoKey""Todo "

#define LEN_VBEEPLEN           "\005"
#define TR_VBEEPLEN            "0====""=0===""==0==""===0=""====0"

#define LEN_VRENAVIG           "\003"
#define TR_VRENAVIG            "No REaREb"

#define LEN_VBLMODE            "\004"
#define TR_VBLMODE             "OFF ""Keys""Stks""Both""ON\0"

#define LEN_TRNMODE            "\003"
#define TR_TRNMODE             "OFF"" +="" :="

#define LEN_TRNCHN             "\003"
#define TR_TRNCHN              "CH1CH2CH3CH4"

#define LEN_UART3MODES         "\015"
#define TR_UART3MODES          "OFF\0         ""S-Port Mirror""Telemetry\0   ""SBUS Trainer\0""Debug\0"

#define LEN_SWTYPES            "\006"
#define TR_SWTYPES             "None\0 ""Toggle""2POS\0 ""3POS\0"

#define LEN_POTTYPES           "\017"
#define TR_POTTYPES            "None\0          ""Pot with detent""Multipos Switch""Pot\0"

#define LEN_SLIDERTYPES        "\006"
#define TR_SLIDERTYPES         "Rien\0 ""Slider"

#define LEN_DATETIME           "\005"
#define TR_DATETIME            "DATA:""HORA:"

#define LEN_VLCD               "\006"
#define TR_VLCD                "NormalOptrex"

#define LEN_VPERSISTENT        "\014"
#define TR_VPERSISTENT         "OFF\0        ""Flight\0     ""Manual Reset"

#define LEN_COUNTRYCODES       TR("\002", "\007")
#define TR_COUNTRYCODES        TR("US""JP""EU", "America""Japon\0 ""Europa\0")

#define LEN_TARANIS_PROTOCOLS  "\004"
#define TR_TARANIS_PROTOCOLS   "OFF\0""PPM\0""XJT\0""DSM2""CRSF"

#define LEN_XJT_PROTOCOLS      "\004"
#define TR_XJT_PROTOCOLS       "OFF\0""D16\0""D8\0 ""LR12"

#define LEN_DSM_PROTOCOLS      "\004"
#define TR_DSM_PROTOCOLS       "LP45""DSM2""DSMX"

#define LEN_VTRIMINC           TR("\006", "\013")
#define TR_VTRIMINC            TR("Expo  ""ExFino""Fino  ""Medio ""Grueso", "Exponencial""Extra Fino ""Fino       ""Medio      ""Grueso     ")

#define LEN_VDISPLAYTRIMS      "\006"
#define TR_VDISPLAYTRIMS       "No\0   ""Change""Yes\0"

#define LEN_VBEEPCOUNTDOWN     "\006"
#define TR_VBEEPCOUNTDOWN      "SilentBeeps\0Voz\0  Haptic"

#define LEN_VVARIOCENTER       "\006"
#define TR_VVARIOCENTER        "Tone\0 ""Silent"

#define LEN_CURVE_TYPES        "\010"
#define TR_CURVE_TYPES         "Standard""Custom\0"

#define LEN_RETA123            "\001"

#if defined(CPUM2560)
  #define TR_RETA123           "RETA123ab"
#else
  #define TR_RETA123           "RETA123"
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
#define TR_VMLTPX              "A\201adir\0 ""Multipl.""Cambiar\0"

#define LEN_VMLTPX2            "\002"
#define TR_VMLTPX2             "+=""*="":="

#define LEN_VMIXTRIMS          "\003"
#define TR_VMIXTRIMS           "OFF""ON\0""Dir""Ele""Ace""Ale"

  #define TR_CSWTIMER          "Tim\0 "
  #define TR_CSWSTICKY         "Glue\0"
    #define TR_CSWRANGE
    #define TR_CSWSTAY

  #define TR_CSWEQUAL

#define LEN_VCSWFUNC           "\005"
#define TR_VCSWFUNC            "---\0 " TR_CSWEQUAL "a\173x\0 ""a>x\0 ""a<x\0 " TR_CSWRANGE "|a|>x""|a|<x""AND\0 ""OR\0  ""XOR\0 " TR_CSWSTAY "a=b\0 ""a>b\0 ""a<b\0 ""^}x\0 ""|^|}x" TR_CSWTIMER TR_CSWSTICKY

#define LEN_VFSWFUNC           "\012"

#if defined(VARIO)
  #define TR_VVARIO            "Vario\0    "
#else
  #define TR_VVARIO            "[Vario]\0  "
#endif

#if defined(AUDIO)
  #define TR_SOUND             "Oir Sonido"
#else
  #define TR_SOUND             "Beep\0     "
#endif

#if defined(HAPTIC)
  #define TR_HAPTIC            "Tactil\0   "
#else
  #define TR_HAPTIC            "[Tactil]\0 "
#endif

#if defined(VOICE)
    #define TR_PLAY_TRACK      "Oir pista\0"
  #define TR_PLAY_BOTH         "Oir Ambos\0"
  #define TR_PLAY_VALUE        "Oir valor\0"
#else
  #define TR_PLAY_TRACK        "[OirPista]"
  #define TR_PLAY_BOTH         "[OirAmbos]"
  #define TR_PLAY_VALUE        "[OirValor]"
#endif

#define TR_SF_BG_MUSIC        "BgMusica\0 ""BgMusica||"

#if defined(SDCARD)
  #define TR_SDCLOGS           "SD Logs\0  "
#else
  #define TR_SDCLOGS           "[SD Logs]\0"
#endif

#if defined(GVARS)
  #define TR_ADJUST_GVAR       "Ajuste\0   "
#else
  #define TR_ADJUST_GVAR       "[AdjustGV]"
#endif

  #define TR_SF_PLAY_SCRIPT   "[Lua]\0    "

#if defined(DEBUG)
  #define TR_SF_TEST          "Test\0"
#else
  #define TR_SF_TEST
#endif

#if defined(OVERRIDE_CHANNEL_FUNCTION)
  #define TR_SF_SAFETY        "Seguro\0   "
#else
  #define TR_SF_SAFETY        "---\0      "
#endif

  #define TR_SF_SCREENSHOT

#define TR_SF_RESERVE         "[reserve]\0"

#if defined(PCBGRUVIN9X) || defined(PCBMEGA2560)
  #define TR_VFSWFUNC          TR_SF_SAFETY "Aprendiz\0 ""Inst. Trim""Reset\0    " TR_ADJUST_GVAR TR_SOUND TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_VVARIO TR_HAPTIC TR_SDCLOGS "Luz fondo\0" TR_SF_TEST
#else
  #define TR_VFSWFUNC          TR_SF_SAFETY "Aprendiz\0 ""Inst. Trim""Reset\0    " TR_ADJUST_GVAR TR_SOUND TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_VVARIO TR_HAPTIC "Luz fondo\0" TR_SF_TEST
#endif

#define LEN_VFSWRESET          TR("\004", "\011")

#if defined(FRSKY)
  #define TR_FSW_RESET_TELEM   TR("Telm", "Telemetry")
#else
  #define TR_FSW_RESET_TELEM
#endif

#if ROTARY_ENCODERS == 2
  #define TR_FSW_RESET_ROTENC  TR("REa\0""REb\0", "RotEnc A\0""RotEnc B\0")
#elif ROTARY_ENCODERS == 1
  #define TR_FSW_RESET_ROTENC  TR("R.E.", "RotEnc\0  ")
#else
  #define TR_FSW_RESET_ROTENC
#endif

  #define TR_FSW_RESET_TIMERS  "Tmr1""Tmr2"

#define TR_VFSWRESET           TR(TR_FSW_RESET_TIMERS "All\0" TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC, TR_FSW_RESET_TIMERS "All\0     " TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC)

#define LEN_FUNCSOUNDS         TR("\004", "\006")
#define TR_FUNCSOUNDS          TR("Bp1\0""Bp2\0""Bp3\0""Avs1""Avs2""Chee""Rata""Tick""Sirn""Ring""SciF""Robt""Chrp""Tada""Crck""Alrm", "Beep1 ""Beep2 ""Beep3 ""Aviso1""Aviso2""Cheep ""Ratata""Tick  ""Sirena""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""AlmClk")

#define LEN_VTELEMCHNS         TR("\004", "\005")

  #define TR_TELEM_RESERVE
  #define TR_TELEM_TIME
  #define TR_SWR
  #define TR_RX_BATT
  #define TR_A3_A4
  #define TR_A3_A4_MIN

#define TR_ASPD_MAX            TR("ASp+", "ASpd+")

  #define TR_TELEM_RSSI_RX     TR("Rx\0  ", "Rx\0 ")

  #define TR_TELEM_TIMERS      TR("Tmr1""Tmr2", "Tmr1\0""Tmr2\0")

  #define TR_VTELEMCHNS        "---\0""Batt" TR_TELEM_TIME TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_TIMERS TR_SWR "Tx\0 " TR_TELEM_RSSI_RX TR_RX_BATT "A1\0 ""A2\0 " TR_A3_A4 "Alt\0""Rpm\0""Fuel""T1\0 ""T2\0 ""Spd\0""Dist""GAlt""Cell""Cels""Vfas""Curr""Cnsp""Powr""AccX""AccY""AccZ""Hdg\0""VSpd""ASpd""dTE\0" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "A1-\0""A2-\0" TR_A3_A4_MIN "Alt-""Alt+""Rpm+""T1+\0""T2+\0""Spd+""Dst+" TR_ASPD_MAX "Cel-""Cls-""Vfs-""Cur+""Pwr+" TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE TR_TELEM_RESERVE "Acc\0""Time"

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
#define TR_VALARM              "---""Ama""Nar""Roj"

#define LEN_VALARMFN           "\001"
#define TR_VALARMFN            "<>"

#define LEN_VTELPROTO          "\007"
#define TR_VTELPROTO           "Nada\0  ""Hub\0   ""WSHHigh"

  #define LEN_AMPSRC           TR("\003", "\007")
  #define TR_AMPSRC            TR("---""A1\0""A2\0""FAS""Cel", "---\0   ""A1\0    ""A2\0    ""FAS\0   ""Cells\0 ")

#define LEN_VARIOSRC           "\005"
#if defined(FRSKY_SPORT)
  #define TR_VARIOSRC          "Vario""A1\0  ""A2\0"
#else
  #define TR_VARIOSRC          "Alti\0""Alti+""Vario""A1\0  ""A2\0"
#endif

#define LEN_VTELEMSCREENTYPE   "\004"
#define TR_VTELEMSCREENTYPE    "Nums""Bars"

#define LEN_GPSFORMAT          "\004"
#define TR_GPSFORMAT           "HMS NMEA"

#define LEN2_VTEMPLATES        13
#define LEN_VTEMPLATES         "\015"
#define TR_VTEMPLATES          "Elim Mezcla\0\0""Simple 4-CH \0""Anular Motor\0""Cola en V   \0""Elevon\\Delta\0""eCCPM       \0""Heli Setup  \0""Servo Test  \0"

#define LEN_VSWASHTYPE         "\004"
#define TR_VSWASHTYPE          "---\0""120\0""120X""140\0""90\0"

#define LEN_VKEYS              "\005"
#define TR_VKEYS               TR("Menu\0""Salir""Abajo""Arrib""Dcha.""Izqd.", "Menu\0""Salir""Enter""Pgna.""Mas\0 ""Menos")

#define LEN_VRENCODERS         "\003"
#define TR_VRENCODERS          "REa""REb"

#define LEN_VSWITCHES          "\003"
#define LEN_VSRCRAW            "\004"

  #define TR_POTS_VSRCRAW      "P1\0 ""P2\0 ""P3\0 "
  #define TR_SW_VSRCRAW        "3POS"
  #define TR_9X_3POS_SWITCHES  "ID0""ID1""ID2"

  #define TR_LOGICALSW          "L1\0""L2\0""L3\0""L4\0""L5\0""L6\0""L7\0""L8\0""L9\0""L10""L11""L12"

#define TR_TRIMS_SWITCHES      TR("tRl""tRr""tEd""tEu""tTd""tTu""tAl""tAr", "\313Rl""\313Rr""\313Ed""\313Eu""\313Td""\313Tu""\313Al""\313Ar")

#if defined(PCBGRUVIN9X) || defined(PCBMEGA2560)
  #define TR_ROTARY_ENCODERS   "REa\0""REb\0"
  #define TR_ROTENC_SWITCHES   "REa""REb"
#else
  #define TR_ROTARY_ENCODERS
  #define TR_ROTENC_SWITCHES
#endif

  #define TR_PHYS_SWITCHES     "THR""RUD""ELE""AIL""GEA""TRN"

#define TR_ON_ONE_SWITCHES     "ON\0""One"

  #define TR_VSWITCHES         "---" TR_9X_3POS_SWITCHES TR_PHYS_SWITCHES TR_TRIMS_SWITCHES TR_ROTENC_SWITCHES TR_LOGICALSW TR_ON_ONE_SWITCHES

#if defined(HELI)
  #define TR_CYC_VSRCRAW       "CYC1""CYC2""CYC3"
#else
  #define TR_CYC_VSRCRAW       "[C1]""[C2]""[C3]"
#endif

#define TR_VSRCRAW             "---\0""Dir\0""Ele\0""Thr\0""Ale\0" TR_POTS_VSRCRAW TR_ROTARY_ENCODERS "MAX\0" TR_CYC_VSRCRAW "TrmR" "TrmE" "TrmT" "TrmA" TR_SW_VSRCRAW

#define LEN_VTMRMODES          "\003"
#define TR_VTMRMODES           "OFF""ABS""THs""TH%""THt"

#define LEN_VTRAINERMODES      "\022"
#define TR_VTRAINERMODES       "Master/Jack\0      ""Esclav/Jack\0      ""Master/SBUS Module""Master/CPPM Module""Master/Battery\0"

#define LEN_VFAILSAFE          "\011"
#define TR_VFAILSAFE           "Not set\0 ""Guardar\0 ""Adaptar\0 ""Sin pulso""Receiver\0"

#if defined(MAVLINK)
  #define LEN_MAVLINK_BAUDS    "\006"
  #define TR_MAVLINK_BAUDS     "4800  ""9600  ""14400 ""19200 ""38400 ""57600 ""76800 ""115200"
  #define LEN_MAVLINK_AC_MODES "\011"
  #define TR_MAVLINK_AC_MODES  "Estabilizar""Acrobat. ""Alt Hold ""Auto     ""Guiado   ""Loiter   ""RTL      ""Circulo  ""Pos Hold ""Tierra   ""OF Loiter""Toy A    ""Toy M    ""INVALIDO "
  #define LEN_MAVLINK_AP_MODES "\015"
  #define TR_MAVLINK_AP_MODES  "Manual       ""Circulo       ""Estabilizar   ""Entrenamiento""Fly by Wire A""Fly by Wire A""Auto         ""RTL          ""Loiter       ""Guiado       ""Inicialisando""INVALID      "
#endif

#define LEN_VSENSORTYPES        "\012"
#define TR_VSENSORTYPES        "Custom\0   ""Calculated"

#define LEN_VFORMULAS          "\010"
#define TR_VFORMULAS           "Add\0    ""Average\0""Min\0    ""Max\0    ""Multiply""Totalize""Cell\0   ""Consumpt""Distance"

#define LEN_VPREC              "\004"
#define TR_VPREC               "0.--""0.0 ""0.00"

#define LEN_VCELLINDEX         "\007"
#define TR_VCELLINDEX          "Lowest\0""1\0     ""2\0     ""3\0     ""4\0     ""5\0     ""6\0     ""Highest""Delta\0"

// ZERO TERMINATED STRINGS
#define INDENT                 "\001"
#define LEN_INDENT             1
#define INDENT_WIDTH           (FW/2)

  #define TR_ENTER             "[MENU]"

#define TR_EXIT                "[SALIR]"

  #define TR_POPUPS            TR_ENTER "\010" TR_EXIT
  #define OFS_EXIT             sizeof(TR_ENTER)

#define TR_MENUWHENDONE        CENTER "\007" TR_ENTER " AL ACABAR "
#define TR_FREE                "libre"
#define TR_DELETEMODEL         "BORRAR MODELO"
#define TR_COPYINGMODEL        "Copiando modelo.."
#define TR_MOVINGMODEL         "Mover modelo..."
#define TR_LOADINGMODEL        "Cargar modelo..."
#define TR_NAME                "Nom."
#define TR_MODELNAME           "Nom.Modelo"
#define TR_PHASENAME           "Nom.Fase "
#define TR_MIXNAME             "Nom.Mezcla"
#define TR_INPUTNAME           "Input Name"
  #define TR_EXPONAME          "Nom. Expo"
#define TR_BITMAP              "Imagen Modelo"
#define TR_TIMER               TR("Reloj","Reloj ")
#define TR_ELIMITS             TR("E.Limite","Ampliar Limites")
#define TR_ETRIMS              TR("E.Trims","Ampliar Trims")
#define TR_TRIMINC             "Paso Trim"
#define TR_DISPLAY_TRIMS       "Display Trims"
#define TR_TTRACE              TR("Fuente-A", INDENT "Fuente Acelerad")
#define TR_TTRIM               TR("Trim-A", INDENT "Trim Acelerad")
#define TR_BEEPCTR             TR("Ctr Beep","Center Beep")
#define TR_USE_GLOBAL_FUNCS    "Use Global Funcs"
#define TR_PROTO               TR(INDENT"Proto",INDENT"Protocol")
#define TR_PPMFRAME            "Trama PPM"
#define TR_MS                  "ms"
#define TR_SWITCH              "Interr"
#define TR_TRIMS               "Trims"
#define TR_FADEIN              "Inicio"
#define TR_FADEOUT             "Final"
#define TR_DEFAULT             "(defecto)"
#define TR_CHECKTRIMS          CENTER "\006Check\012Trims"
#define OFS_CHECKTRIMS         CENTER_OFS+(9*FW)
#define TR_SWASHTYPE           "Tipo ciclico"
#define TR_COLLECTIVE          TR("Colectivo", "Fuente Colectivo")
#define TR_AILERON             "Lateral cyc. source"
#define TR_ELEVATOR            "Long. cyc. source"
#define TR_SWASHRING           "Ciclico"
#define TR_ELEDIRECTION        TR("ELE Direccion","Largo cyc. direccion")
#define TR_AILDIRECTION        TR("AIL Direccion","Lateral cyc. direccion")
#define TR_COLDIRECTION        TR("PIT Direccion","Coll. pitch direccion")
#define TR_MODE                INDENT"Modo"
#define TR_NOFREEEXPO          "No expo libre!"
#define TR_NOFREEMIXER         "No mezcla lib!"
#define TR_INSERTMIX           "INSERTAR MIX"
#define TR_EDITMIX             "EDITAR MIX "
#define TR_SOURCE              INDENT"Fuente"
#define TR_WEIGHT              "Cantidad"
#define TR_EXPO                TR("Expo","Exponencial")
#define TR_SIDE                "Lado"
#define TR_DIFFERENTIAL        "Diferenc"
#define TR_OFFSET              INDENT"Offset"
#define TR_TRIM                "Trim"
#define TR_DREX                "DRex"
#define DREX_CHBOX_OFFSET      30
#define TR_CURVE               "Curva"
#define TR_FLMODE              TR("Modo","Modos")
#define TR_MIXWARNING          "Aviso"
#define TR_OFF                 "OFF"
#define TR_MULTPX              "Multpx"
#define TR_DELAYDOWN           "Delay Dn"
#define TR_DELAYUP             "Delay Up"
#define TR_SLOWDOWN            "Slow  Dn"
#define TR_SLOWUP              "Slow  Up"
#define TR_MIXER               "Mezclas"
#define TR_CV                  "CV"
#define TR_GV                  "GV"
#define TR_ACHANNEL            "A\004canal"
#define TR_RANGE               INDENT"Alcance"
#define TR_CENTER              INDENT "Center"
#define TR_BAR                 "Bar"
#define TR_ALARM               INDENT"Alarma"
#define TR_USRDATA             "UsrData"
#define TR_BLADES              INDENT"Palas"
#define TR_SCREEN              "Pantalla"
#define TR_SOUND_LABEL         "Sonido"
#define TR_LENGTH              INDENT"Longitud"
#define TR_BEEP_LENGTH         INDENT "Beep Length"
#define TR_SPKRPITCH           INDENT"Tono"
#define TR_HAPTIC_LABEL        "Tactil"
#define TR_HAPTICSTRENGTH      INDENT"Intensidad"
#define TR_CONTRAST            "Contraste"
#define TR_ALARMS_LABEL        "Alarmas"
#define TR_BATTERY_RANGE       TR("Rango bateria","Rango medidor Bater")
#define TR_BATTERYWARNING      INDENT"Bateria Baja"
#define TR_INACTIVITYALARM     INDENT"Inactividad"
#define TR_MEMORYWARNING       INDENT"Memoria Baja"
#define TR_ALARMWARNING        INDENT"Sin Sonido"
#define TR_RENAVIG             "RotEnc Navig"
#define TR_THROTTLE_LABEL      "Throttle"
#define TR_THROTTLEREVERSE     TR("Invert_Acel", INDENT "Invertir Acel.")
#define TR_TIMER_NAME          INDENT "Name"
#define TR_MINUTEBEEP          TR(INDENT"Minuto", INDENT"Cada Minuto")
#define TR_BEEPCOUNTDOWN       INDENT"Cuentaatras"
#define TR_PERSISTENT          TR(INDENT"Persist.", INDENT"Persistente")
#define TR_BACKLIGHT_LABEL     "Luz Fondo"
#define TR_BLDELAY             INDENT"Duracion"
#define TR_BLONBRIGHTNESS      INDENT"MAS Brillo"
#define TR_BLOFFBRIGHTNESS     INDENT"MENOS Brillo"
#define TR_BLCOLOR             INDENT "Color"
#define TR_SPLASHSCREEN        "Ptalla.inicio"
#define TR_THROTTLEWARNING     TR("Aviso-A", INDENT "Aviso Acelerador")
#define TR_SWITCHWARNING       TR("Aviso-I", INDENT "Aviso Intrptor")
#define TR_POTWARNING          TR("Pot Warn.", INDENT "Pot Warning")
#define TR_TIMEZONE            TR("Zona Hora", "GPS Zona Hora")
#define TR_ADJUST_RTC          INDENT "Adjust RTC"
#define TR_GPS                 "GPS"
#define TR_RXCHANNELORD        TR("Rx Orden canal", "Orden habitual canales")
#define TR_STICKS              "Sticks"
#define TR_POTS                "Pots"
#define TR_SWITCHES            "Switches"
#define TR_SWITCHES_DELAY      "Switches Delay"
#define TR_SLAVE               "Esclavo"
#define TR_MODESRC             "Modo\006% Fuente"
#define TR_MULTIPLIER          "Multiplicar"
#define TR_CAL                 "Cal"
#define TR_VTRIM               "Trim- +"
#define TR_BG                  "BG:"
#define TR_MENUTOSTART         CENTER "\010" TR_ENTER " EMPEZAR"
#define TR_SETMIDPOINT         TR(CENTER "\007STICKS AL CENTRO",CENTER "\010STICKS AL CENTRO")
#define TR_MOVESTICKSPOTS      CENTER "\006MOVER STICKS/POTS"
#define TR_RXBATT              "Rx Batt:"
#define TR_TXnRX               "Tx:\0Rx:"
#define OFS_RX                 4
#define TR_ACCEL               "Acc:"
#define TR_NODATA              CENTER "SIN DATOS"
#define TR_TOTTM1TM2THRTHP     "\037\146SES\036TM1\037\146TM2\036THR\037\146TH%"
#define TR_TMR1LATMAXUS        "Tmr1Lat max\037\124us"
#define STR_US                 (STR_TMR1LATMAXUS+13)
#define TR_TMR1LATMINUS        "Tmr1Lat min\037\124us"
#define TR_TMR1JITTERUS        "Tmr1 Jitter\037\124us"

  #define TR_TMIXMAXMS         "Tmix max\037\124ms"
  #define TR_FREESTACKMINB     "Pila LIbre\037\124b"

#define TR_MENUTORESET         CENTER TR_ENTER "Resetear"
#define TR_PPM_TRAINER         "TR"
#define TR_CH                  "CH"
#define TR_MODEL               "MODELO"
#define TR_FP                  "FM"
#define TR_MIX                 "MIX"
#define TR_EEPROMLOWMEM        "EEPROM mem.baja"
#define TR_ALERT               "\016ALERTA"
#define TR_PRESSANYKEYTOSKIP   "Pulsar tecla omitir"
#define TR_THROTTLENOTIDLE     "Aceler. Activado"
#define TR_ALARMSDISABLED      "Alarmas Desact."
#define TR_PRESSANYKEY         TR("\010Pulsa una Tecla", "Pulsa una Tecla")
#define TR_BADEEPROMDATA       "Datos EEprom mal"
#define TR_EEPROMFORMATTING    "Formateo EEPROM"
#define TR_EEPROMOVERFLOW      "Desborde EEPROM"
#define TR_MENURADIOSETUP      "CONFIGURACION"
#define TR_MENUDATEANDTIME     "FECHA Y HORA"
#define TR_MENUTRAINER         "APRENDIZ"
#define TR_MENUGLOBALFUNCS     "GLOBAL FUNCTIONS"
#define TR_MENUVERSION         "VERSION"
#define TR_MENUDIAG            TR("INTERUPTS", "TEST INTERUP.")
#define TR_MENUANA             TR("ANAS", "ENTRADAS ANALOG")
#define TR_MENUCALIBRATION     "CALIBRACION"
#define TR_TRIMS2OFFSETS       "\006Trims => Offsets"
#define TR_MENUMODELSEL        TR("MODELSEL", "SELECCION MODELO")
#define TR_MENUSETUP           TR("CONF.", "CONF.MODELO")
#define TR_MENUFLIGHTPHASE     "MODO VUELO"
#define TR_MENUFLIGHTPHASES    "MODOS VUELO"
#define TR_MENUHELISETUP       "CONF. HELI"


// Alignment

#if defined(PPM_CENTER_ADJUSTABLE) || defined(PPM_LIMITS_SYMETRICAL) // The right menu titles for the gurus ...
  #define TR_MENUINPUTS        "STICKS"
  #define TR_MENULIMITS        "SERVOS"
#else
  #define TR_MENUINPUTS        "DR/EXPO"
  #define TR_MENULIMITS        "LIMITES"
#endif

#define TR_MENUCURVES          "CURVAS"
#define TR_MENUCURVE           "CURVA"
#define TR_MENULOGICALSWITCH    "AJTE.INTERUP."
#define TR_MENULOGICALSWITCHES  "AJTE.INTERUPTS."
#define TR_MENUCUSTOMFUNC      "AJTE. FUNCIONES"
#define TR_MENUCUSTOMSCRIPTS   "CUSTOM SCRIPTS"
#define TR_MENUCUSTOMSCRIPT    "CUSTOM SCRIPT"
#define TR_MENUTELEMETRY       "TELEMETRIA"
#define TR_MENUTEMPLATES       "PLANTILLAS"
#define TR_MENUSTAT            "STATS"
#define TR_MENUDEBUG           "DEBUG"
#define TR_RXNUM               TR("RxNum", INDENT"Receptor No.")
#define TR_SYNCMENU            "Sync "TR_ENTER
#define TR_LIMIT               INDENT"Limite"
#define TR_MINRSSI             "Min Rssi"
#define TR_LATITUDE            "Latitud"
#define TR_LONGITUDE           "Longitud"
#define TR_GPSCOORD            TR("GPS Coords", "GPS formato coordenadas")
#define TR_VARIO               TR("Vario", "Variometro")
#define TR_PITCH_AT_ZERO       INDENT "Pitch at Zero"
#define TR_PITCH_AT_MAX        INDENT "Pitch at Max"
#define TR_REPEAT_AT_ZERO      INDENT "Repeat at Zero"
#define TR_POWEROFF            "\027Power OFF..."
#define TR_SHUTDOWN            "APAGANDO"
#define TR_SAVEMODEL           "Saving model settings"
#define TR_BATT_CALIB          "Calib.bateria"
#define TR_CURRENT_CALIB       "Calib. actual"
#define TR_VOLTAGE             INDENT"Voltaje"
#define TR_CURRENT             INDENT"Actual"
#define TR_SELECT_MODEL        "Selec Modelo"
#define TR_CREATE_MODEL        "Crear Modelo"
#define TR_COPY_MODEL          "Copiar Modelo"
#define TR_MOVE_MODEL          "Mover Modelo"
#define TR_BACKUP_MODEL        "Copia Sgdad Mod."
#define TR_DELETE_MODEL        "Borrar Modelo"
#define TR_RESTORE_MODEL       "Restaurar Modelo"
#define TR_SDCARD_ERROR        "SDCARD Error"
#define TR_NO_SDCARD           "No SDCARD"
#define TR_SDCARD_FULL         "SD Card Full"
#define TR_INCOMPATIBLE        "Incompatible"
#define TR_WARNING             "AVISO"
#define TR_EEPROMWARN          "EEPROM"
#define TR_EEPROM_CONVERTING   "EEPROM Converting"
#define TR_THROTTLEWARN        "ACELERADOR"
#define TR_ALARMSWARN          "ALARMAS"
#define TR_SWITCHWARN          "INTERPTOR"
#define TR_FAILSAFEWARN        "FAILSAFE"
#define TR_NO_FAILSAFE         "Failsafe not set"
#define TR_KEYSTUCK            "Key stuck"
#define TR_INVERT_THR          TR("Invertir Acel?", "Invertir Acel.?")
#define TR_SPEAKER_VOLUME      INDENT "Volumen"
#define TR_LCD                 "LCD"
#define TR_BRIGHTNESS          INDENT "Brillo"
#define TR_CPU_TEMP            "CPU Temp.\016>"
#define TR_CPU_CURRENT         "Actual\022>"
#define TR_CPU_MAH             "Consumo"
#define TR_COPROC              "CoProc."
#define TR_COPROC_TEMP         "MB Temp. \016>"
#define TR_CAPAWARNING         INDENT "Capacidad Baja"
#define TR_TEMPWARNING         INDENT "Sobrecalent"
#define TR_FUNC                "Func"
#define TR_V1                  "V1"
#define TR_V2                  "V2"
#define TR_DURATION            "Duracion"
#define TR_DELAY               "Atraso"
#define TR_SD_CARD             "SD CARD"
#define TR_SDHC_CARD           "SD-HC CARD"
#define TR_NO_SOUNDS_ON_SD     "Sin sonidos en SD"
#define TR_NO_MODELS_ON_SD     "Sin Modelos en SD"
#define TR_NO_BITMAPS_ON_SD    "Sin imagenes en SD"
#define TR_NO_SCRIPTS_ON_SD    "No Scripts on SD"
#define TR_SCRIPT_SYNTAX_ERROR "Script syntax error"
#define TR_SCRIPT_PANIC        "Script panic"
#define TR_SCRIPT_KILLED       "Script killed"
#define TR_SCRIPT_ERROR        "Unknown error"
#define TR_PLAY_FILE           "Play"
#define TR_DELETE_FILE         "Borrar"
#define TR_COPY_FILE           "Copiar"
#define TR_RENAME_FILE         "Renombrar"
#define TR_ASSIGN_BITMAP       "Asignar Imagen"
#define TR_EXECUTE_FILE        "Execute"
#define TR_REMOVED             "Borrado"
#define TR_SD_INFO             "Informacion"
#define TR_SD_FORMAT           "Formatear"
#define TR_NA                  "N/A"
#define TR_HARDWARE            "COMPONENTES"
#define TR_FORMATTING          "Formateando.."
#define TR_TEMP_CALIB          "Temp. Calib"
#define TR_TIME                "Hora"
#define TR_BAUDRATE            "BT Baudrate"
#define TR_SD_INFO_TITLE       "SD INFO"
#define TR_SD_TYPE             "Tipo:"
#define TR_SD_SPEED            "Velocidad:"
#define TR_SD_SECTORS          "Sectores:"
#define TR_SD_SIZE             "Tama\201o:"
#define TR_TYPE                INDENT "Tipo"
#define TR_GLOBAL_VARS         "Global Variables"
#define TR_GLOBAL_V            "GLOBAL V."
#define TR_GLOBAL_VAR          "Global Variable"
#define TR_MENUGLOBALVARS      "GLOBAL VARIABLES"
#define TR_OWN                 "Propio"
#define TR_DATE                "Fecha"
#define TR_ROTARY_ENCODER      "R.Encs"
#define TR_CHANNELS_MONITOR    "MONITOR CANALES"
#define TR_MIXERS_MONITOR      "MIXERS MONITOR"
#define TR_PATH_TOO_LONG       "Path too long"
#define TR_VIEW_TEXT           "View text"
#define TR_FLASH_BOOTLOADER    "Flash BootLoader"
#define TR_FLASH_EXTERNAL_DEVICE "Flash External Device"
#define TR_FLASH_INTERNAL_MODULE "Flash Internal Module"
#define TR_WRITING             "\032Writing..."
#define TR_CONFIRM_FORMAT      "Confirm Format?"
#define TR_INTERNALRF          "Interna RF"
#define TR_EXTERNALRF          "Externa RF"
#define TR_FAILSAFE            INDENT"Modo sgdad."
#define TR_FAILSAFESET         "AJUSTES SGDAD."
#define TR_MENUSENSOR          "SENSOR"
#define TR_COUNTRYCODE         "Codigo Pais"
#define TR_VOICELANG           "Idioma voces"
#define TR_UNITSSYSTEM         "Unidades"
#define TR_EDIT                "Editar"
#define TR_INSERT_BEFORE       "Insertar antes"
#define TR_INSERT_AFTER        "Insertar despues"
#define TR_COPY                "Copiar"
#define TR_MOVE                "Mover"
#define TR_PASTE               "Pegar"
#define TR_DELETE              "Borrar"
#define TR_INSERT              "Insertar"
#define TR_RESET_FLIGHT        "Reset Vuelo"
#define TR_RESET_TIMER1        "Reset Reloj1"
#define TR_RESET_TIMER2        "Reset Reloj2"
#define TR_RESET_TIMER3        "Reset Reloj3"
#define TR_RESET_TELEMETRY     "Reset Telemetria"
#define TR_STATISTICS          "Estadisticas"
#define TR_ABOUT_US            "Nosotros"
#define TR_AND_SWITCH          "AND Inter."
#define TR_SF                  "CF"
#define TR_GF                  "GF"
#define TR_SPEAKER             INDENT"Altavoz"
#define TR_BUZZER              INDENT"Zumbador"
#define TR_BYTES               "bytes"
#define TR_MODULE_BIND         "[Enlace]"
#define TR_MODULE_RANGE        "[Limites]"
#define TR_RESET_BTN           "[Reset]"
#define TR_SET                 "[Ajuste]"
#define TR_TRAINER             "Aprendiz"
#define TR_ANTENNAPROBLEM      CENTER "¡Problema antena TX!"
#define TR_MODELIDUSED         TR("ID en uso", "ID modelo en uso")
#define TR_MODULE              INDENT "Modulo"
#define TR_TELEMETRY_TYPE      TR("Type", "Telemetry Type")
#define TR_TELEMETRY_SENSORS   "Sensors"
#define TR_VALUE               "Value"
#define TR_TOPLCDTIMER         "Top LCD Timer"
#define TR_UNIT                "Unit"
#define TR_TELEMETRY_NEWSENSOR INDENT "Add a new sensor..."
#define TR_CHANNELRANGE        INDENT "Gama de canales"
#define TR_LOWALARM            INDENT "Alarma baja"
#define TR_CRITICALALARM       INDENT "Alarma Critica"
#define TR_ENABLE_POPUP        "Enable Popup"
#define TR_DISABLE_POPUP       "Disable Popup"
#define TR_CURVE_PRESET        "Preset..."
#define TR_PRESET              "Preset"
#define TR_MIRROR              "Mirror"
#define TR_CLEAR               "Clear"
#define TR_RESET               "Reset"
#define TR_RESET_SUBMENU       "Reset..."
#define TR_COUNT               "Count"
#define TR_PT                  "pt"
#define TR_PTS                 "pts"
#define TR_SMOOTH              "Smooth"
#define TR_COPY_STICKS_TO_OFS  "Copy Sticks To Offset"
#define TR_COPY_TRIMS_TO_OFS   "Copy trims to subtrim"
#define TR_INCDEC              "Inc/Decrement"
#define TR_GLOBALVAR           "Global Var"
#define TR_MIXSOURCE           "Mixer Source"
#define TR_CONSTANT            "Constant"
#define TR_PERSISTENT_MAH      INDENT "Valor mAh"
#define TR_PREFLIGHT           "Preflight Checks"
#define TR_CHECKLIST           INDENT "Display Checklist"
#define TR_FAS_OFFSET          TR(INDENT "FAS Ofs", INDENT "FAS Offset")
#define TR_UART3MODE           "Serial port"
#define TR_SCRIPT              "Script"
#define TR_INPUTS              "Inputs"
#define TR_OUTPUTS             "Outputs"
#define TR_EEBACKUP            "\004[ENTER Long] to backup the EEPROM"
#define TR_FACTORYRESET        "\012[MENU Long]: Factory reset"
#define TR_CONFIRMRESET        "Erase ALL models and settings?"
#define TR_TO_MANY_LUA_SCRIPTS "Too many Lua scripts!"

#if defined(MAVLINK)
  #define TR_MAVLINK_RC_RSSI_SCALE_LABEL  "Max RSSI"
  #define TR_MAVLINK_PC_RSSI_EN_LABEL     "PC RSSI EN"
  #define TR_MAVMENUSETUP_TITLE           "Mavlink Setup"
  #define TR_MAVLINK_BAUD_LABEL           "Baudrate"
  #define TR_MAVLINK_INFOS                "INFOS"
  #define TR_MAVLINK_MODE                 "MODO"
  #define TR_MAVLINK_CUR_MODE             "Modo actual"
  #define TR_MAVLINK_ARMED                "Armad0"
  #define TR_MAVLINK_BAT_MENU_TITLE       "BAT RSSI"
  #define TR_MAVLINK_BATTERY_LABEL        "Estado Bateria de vuelo"
  #define TR_MAVLINK_RC_RSSI_LABEL        "RC RSSI"
  #define TR_MAVLINK_PC_RSSI_LABEL        "PC RSSI"
  #define TR_MAVLINK_NAV_MENU_TITLE       "NAV"
  #define TR_MAVLINK_COURSE               "Carrera"
  #define TR_MAVLINK_HEADING              "Titulo"
  #define TR_MAVLINK_BEARING              "Soporte"
  #define TR_MAVLINK_ALTITUDE             "Altitud"
  #define TR_MAVLINK_GPS                  "GPS"
  #define TR_MAVLINK_NO_FIX               "NO Fix"
  #define TR_MAVLINK_SAT                  "SAT"
  #define TR_MAVLINK_HDOP                 "HDOP"
  #define TR_MAVLINK_LAT                  "LAT"
  #define TR_MAVLINK_LON                  "LON"
#endif

// Taranis column headers
#define TR_PHASES_HEADERS      { " Nombre ", " Interrup.", " Rudder Trim ", " Elevator Trim ", " Throttle Trim ", " Aileron Trim ", " Aparecer ", " Desparecer " }
#define TR_LIMITS_HEADERS      { " Nombre ", " Compensacion", " Min ", " Max ", " Direccion ", " Curve ", " Centrado PPM ", " Simetrica " }
#define TR_CSW_HEADERS         { " Funcion ", " V1 ", " V2 ", " V2 ", " AND Interrup. ", " Duracion ", " Retardo " }

//Taranis About screen
#define TR_ABOUTUS             "Nosotros"

#define TR_ABOUT_nextsteprc_1      "nextsteprc es open source, no-"
#define TR_ABOUT_nextsteprc_2      "comercial y viene sin "
#define TR_ABOUT_nextsteprc_3      "garantias. Fue desarrollado"
#define TR_ABOUT_nextsteprc_4      "libremente. Ayudas a traves"
#define TR_ABOUT_nextsteprc_5      "de donaciones son bienvenidas!"

#define TR_ABOUT_BERTRAND_1    "Bertrand Songis"
#define TR_ABOUT_BERTRAND_2    "Autor principal nextsteprc"
#define TR_ABOUT_BERTRAND_3    "Companion9x codesarrollador"

#define TR_ABOUT_MIKE_1        "Mike Blandford"
#define TR_ABOUT_MIKE_2        "Guru de codigo y drivers"
#define TR_ABOUT_MIKE_3        "Seguramente uno de los"
#define TR_ABOUT_MIKE_4        "mejores inspiradores"

#define TR_ABOUT_ROMOLO_1      "Romolo Manfredini"
#define TR_ABOUT_ROMOLO_2      "Desarrollador principal"
#define TR_ABOUT_ROMOLO_3      "Companion9x"

#define TR_ABOUT_ANDRE_1       "Andre Bernet"
#define TR_ABOUT_ANDRE_2       "Funcionalidad, usabilidad,"
#define TR_ABOUT_ANDRE_3       "depurado, documentacion"

#define TR_ABOUT_ROB_1         "Rob Thomson"
#define TR_ABOUT_ROB_2         "openrcforums webmaster"

#define TR_ABOUT_KJELL_1       "Kjell Kernen"
#define TR_ABOUT_KJELL_2       "www.open-tx.org main author"
#define TR_ABOUT_KJELL_3       "nextsteprc Recorder author"
#define TR_ABOUT_KJELL_4       "Companion contributor"

#define TR_ABOUT_MARTIN_1      "Martin Hotar"
#define TR_ABOUT_MARTIN_2      "Dise\201o grafico"

  #define TR_ABOUT_HARDWARE_1  "Brent Nelson"
  #define TR_ABOUT_HARDWARE_2  "Sky9x dise\201ador/productor"
  #define TR_ABOUT_HARDWARE_3  ""

#define TR_ABOUT_PARENTS_1     "Padres del proyecto"
#define TR_ABOUT_PARENTS_2     "ersky9x (Mike Blandford)"
#define TR_ABOUT_PARENTS_3     "ER9X (Erez Raviv)"
#define TR_ABOUT_PARENTS_4     "TH9X (Thomas Husterer)"

#define TR_CHR_SHORT  's'
#define TR_CHR_LONG   'l'
#define TR_CHR_TOGGLE 't'
#define TR_CHR_HOUR   'h'
#define TR_CHR_INPUT  'I'   // Values between A-I will work

#define TR_BEEP_VOLUME         "Volumen Beep"
#define TR_WAV_VOLUME          "Volumen Wav"
#define TR_VARIO_VOLUME        "Volumen Vario"
#define TR_BG_VOLUME           "Volumen Bg"

#define TR_TOP_BAR             "Top Bar"
#define TR_ALTITUDE            INDENT "Altitude"
#define TR_SCALE               "Scale"
#define TR_VIEW_CHANNELS       "View Channels"
#define TR_VIEW_NOTES          "View Notes"
#define TR_MODS_FORBIDDEN      "Modifications forbidden!"
#define TR_UNLOCKED            "Unlocked"
#define TR_ID                  "ID"
#define TR_PRECISION           "Precision"
#define TR_RATIO               "Ratio"
#define TR_FORMULA             "Formula"
#define TR_CELLINDEX           "Cell index"
#define TR_LOGS                "Logs"
#define TR_OPTIONS             "Options"

#define TR_ALTSENSOR           "Alt sensor"
#define TR_CELLSENSOR          "Cell sensor"
#define TR_GPSSENSOR           "GPS sensor"
#define TR_CURRENTSENSOR       "Sensor"
#define TR_AUTOOFFSET          "Auto Offset"
#define TR_ONLYPOSITIVE        "Positive"
#define TR_FILTER              "Filter"
#define TR_TELEMETRYFULL       "All telemetry slots full!"
#define TR_INVERTED_SERIAL     INDENT "Invert"
#define TR_IGNORE_INSTANCE     INDENT "Ignore instance"
#define TR_DISCOVER_SENSORS    INDENT "Discover new sensors"
#define TR_STOP_DISCOVER_SENSORS INDENT "Stop discovery"
#define TR_DELETE_ALL_SENSORS  INDENT "Delete all sensors"
#define TR_CONFIRMDELETE       "Really delete all?"

#define TR_MENU_INPUTS         "\314Inputs"
#define TR_MENU_LUA            "\322Lua scripts"
#define TR_MENU_STICKS         "\307Sticks"
#define TR_MENU_POTS           "\310Pots"
#define TR_MENU_MAX            "\315MAX"
#define TR_MENU_HELI           "\316Cyclic"
#define TR_MENU_TRIMS          "\313Trims"
#define TR_MENU_SWITCHES       "\312Switches"
#define TR_MENU_LOGICAL_SWITCHES "\312Logical Switches"
#define TR_MENU_TRAINER        "\317Trainer"
#define TR_MENU_CHANNELS       "\320Channels"
#define TR_MENU_GVARS          "\311GVars"
#define TR_MENU_TELEMETRY      "\321Telemetry"
#define TR_MENU_OTHER          "Other"
#define TR_MENU_INVERT         "Invert"

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
