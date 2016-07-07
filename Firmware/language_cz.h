/**
 * English
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_CZ_H
#define LANGUAGE_CZ_H

#define WELCOME_MSG                         CUSTOM_MENDEL_NAME " ok"
#define MSG_SD_INSERTED                     "Karta vlozena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_MAIN                            "Hlavni nabidka"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Vypnout motory"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_SET_HOME_OFFSETS                "Nastav pocatek home"
#define MSG_SET_ORIGIN                      "Nastav pocatek"
#define MSG_PREHEAT_PLA                     "Predehrev PLA"
#define MSG_PREHEAT_PLA0                    "Predehrev PLA 1"
#define MSG_PREHEAT_PLA1                    "Predehrev PLA 2"
#define MSG_PREHEAT_PLA2                    "Predehrev PLA 3"
#define MSG_PREHEAT_PLA012                  "Predehrev PLA All"
#define MSG_PREHEAT_PLA_BEDONLY             "Predehrev PLA Bed"
#define MSG_PREHEAT_PLA_SETTINGS            "Predehrev PLA conf"
#define MSG_PREHEAT_ABS                     "Predehrev ABS"
#define MSG_PREHEAT_ABS0                    "Predehrev ABS 1"
#define MSG_PREHEAT_ABS1                    "Predehrev ABS 2"
#define MSG_PREHEAT_ABS2                    "Predehrev ABS 3"
#define MSG_PREHEAT_ABS012                  "Predehrev ABS All"
#define MSG_PREHEAT_ABS_BEDONLY             "Predehrev ABS Bed"
#define MSG_PREHEAT_ABS_SETTINGS            "Predehrev ABS conf"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Vypnout zdroj"
#define MSG_SWITCH_PS_OFF                   "Zapnout zdroj"
#define MSG_EXTRUDE                         "Extrudovat"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Posunout osu"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "Posunout o 0.1mm"
#define MSG_MOVE_1MM                        "Posunout o 1mm"
#define MSG_MOVE_10MM                       "Posunout o 10mm"
#define MSG_SPEED                           "Rychlost"
#define MSG_NOZZLE                          "Tryska"
#define MSG_NOZZLE1                         "Tryska2"
#define MSG_NOZZLE2                         "Tryska3"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Prutok"
#define MSG_FLOW0                           "Prutok 0"
#define MSG_FLOW1                           "Prutok 1"
#define MSG_FLOW2                           "Prutok 2"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Ulozit pamet"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_REFRESH                         "\xF8" "Obnovit"
#define MSG_WATCH                           "Informace"
#define MSG_PREPARE                         "Priprava"
#define MSG_TUNE                            "Ladit"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Pokracovat"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisk z SD"
#define MSG_NO_CARD                         "Zadna SD karta"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Obnoveni tisku"
#define MSG_PRINT_ABORTED                   "Tisk prerusen"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vymenit filament"
#define MSG_INIT_SDCARD                     "Inic. SD"
#define MSG_CNG_SDCARD                      "Vymenit SD"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Doladeni osy Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_ADJUSTZ							"Auto doladit Z ?"
#define MSG_PICK_Z							"Vyberte vytisk"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SETTINGS                         "Nastaveni"
#define MSG_PREHEAT                         "Predehrev"
#define MSG_UNLOAD_FILAMENT                 "Vyjmout filament"
#define MSG_LOAD_FILAMENT                 "Zavest filament"

#define MSG_RECTRACT                        "Rectract"
#define MSG_ERROR                       "CHYBA:"
#define MSG_PREHEAT_NOZZLE              "Predehrejte trysku!"
#define MSG_SUPPORT                     "Podpora"
#define MSG_CORRECTLY			"Vymena ok?"
#define MSG_YES					"Ano"
#define MSG_NO					"Ne"
#define MSG_NOT_LOADED 			"Filament nezaveden"
#define MSG_NOT_COLOR 			"Barva neni cista"
#define MSG_LOADING_FILAMENT	        "Zavadeni filamentu"
#define MSG_PLEASE_WAIT			"Prosim cekejte"
#define MSG_LOADING_COLOR		"Cisteni barvy"
#define MSG_CHANGE_SUCCESS		"Zmena uspesna!"
#define MSG_PRESS				"A stisknete tlacitko"
#define MSG_INSERT_FILAMENT		"Vlozte filament"
#define MSG_CHANGING_FILAMENT	"Vymena filamentu!"

#define MSG_SILENT_MODE_ON					"Mod       [tichy]"
#define MSG_SILENT_MODE_OFF					"Mod  [vys. vykon]" 
#define MSG_REBOOT							"Restartujte tiskarnu"
#define MSG_TAKE_EFFECT						" pro projeveni zmen"	

#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_EXTERNAL_RESET                  " External Reset"
#define MSG_BROWNOUT_RESET                  " Brown out Reset"
#define MSG_WATCHDOG_RESET                  " Watchdog Reset"
#define MSG_SOFTWARE_RESET                  " Software Reset"
#define MSG_AUTHOR                          " | Author: "
#define MSG_CONFIGURATION_VER               " Last Updated: "
#define MSG_FREE_MEMORY                     " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_FILE_SAVED                      "Done saving file."
#define MSG_ERR_LINE_NO                     "Line Number is not Last Line Number+1, Last Line: "
#define MSG_ERR_CHECKSUM_MISMATCH           "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM                 "No Checksum with line number, Last Line: "
#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
#define MSG_FILE_PRINTED                    "Done printing file"
#define MSG_BEGIN_FILE_LIST                 "Begin file list"
#define MSG_END_FILE_LIST                   "End file list"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS              "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_HEATING                         "Zahrivani"
#define MSG_HEATING_COMPLETE                "Zahrivani OK."
#define MSG_BED_HEATING                     "Zahrivani bed"
#define MSG_BED_DONE                        "Bed OK."
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_COUNT_X                         " Count X: "
#define MSG_ERR_KILLED                      "Printer halted. kill() called!"
#define MSG_ERR_STOPPED                     "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND                          "Resend: "
#define MSG_UNKNOWN_COMMAND                 "Unknown command: \""
#define MSG_ACTIVE_EXTRUDER                 "Active Extruder: "
#define MSG_INVALID_EXTRUDER                "Invalid extruder"
#define MSG_X_MIN                           "x_min: "
#define MSG_X_MAX                           "x_max: "
#define MSG_Y_MIN                           "y_min: "
#define MSG_Y_MAX                           "y_max: "
#define MSG_Z_MIN                           "z_min: "
#define MSG_Z_MAX                           "z_max: "
#define MSG_M119_REPORT                     "Reporting endstop status"
#define MSG_ENDSTOP_HIT                     "TRIGGERED"
#define MSG_ENDSTOP_OPEN                    "open"
#define MSG_HOTEND_OFFSET                   "Hotend offsets:"

#define MSG_SD_CANT_OPEN_SUBDIR             "Cannot open subdir"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "File opened: "
#define MSG_SD_SIZE                         " Size: "
#define MSG_SD_FILE_SELECTED                "File selected"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE            "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR            "Cannot enter subdir: "

#define MSG_STEPPER_TOO_HIGH                "Steprate too high: "
#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP           " cold extrusion prevented"
#define MSG_ERR_LONG_EXTRUDE_STOP           " too long extrusion prevented"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Dostavovani Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"

#define MSG_LANGUAGE_NAME					"Cestina"
#define MSG_LANGUAGE_SELECT					"Vyber jazyka        "
 #define MSG_PRUSA3D						"prusa3d.cz"
 #define MSG_PRUSA3D_FORUM					"forum.prusa3d.cz"
 #define MSG_PRUSA3D_HOWTO					"howto.prusa3d.cz"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SELFTEST_ERROR					"Selftest error !"
#define MSG_SELFTEST_PLEASECHECK			"Zkontrolujte :"	
#define MSG_SELFTEST_NOTCONNECTED			"Nezapojeno    "
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Chyba zapojeni"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Endstop not hit"
#define MSG_SELFTEST_OK						"Self test OK"

#define MSG_STATS_TOTALFILAMENT				"Filament celkem :"
#define MSG_STATS_TOTALPRINTTIME			"Celkovy cas :"
#define MSG_STATS_FILAMENTUSED				"Filament :  "
#define MSG_STATS_PRINTTIME					"Cas tisku :  "

#define MSG_SELFTEST_START					"Self test start  "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Kontrola endstops"
#define MSG_SELFTEST_CHECK_HOTEND			"Kontrola hotend  "  
#define MSG_SELFTEST_CHECK_X				"Kontrola X axis  "
#define MSG_SELFTEST_CHECK_Y				"Kontrola Y axis  "
#define MSG_SELFTEST_CHECK_Z				"Kontrola Z axis  "
#define MSG_SELFTEST_CHECK_BED				"Kontrola bed     "
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Vse OK           "
#define MSG_SELFTEST						"Selftest         "
#define MSG_SELFTEST_FAILED					"Selftest selhal  "

#define MSG_STATISTICS						"Statistika  "
#define MSG_USB_PRINTING					"Tisk z USB  "

#define MSG_SHOW_END_STOPS					"Zobraz konc. spinace"
#define MSG_CALIBRATE_BED					"Kalibrace X/Y"
#define MSG_CALIBRATE_BED_RESET				"Reset X/Y kalibr."

#define MSG_MOVE_CARRIAGE_TO_THE_TOP		"Kalibrace X/Y. Posunte prosim Z osu az k~hornimu dorazu. Potvrdte tlacitkem."
#define MSG_CONFIRM_NOZZLE_CLEAN			"Pro uspesnou kalibraci ocistete prosim tiskovou trysku. Potvrdte tlacitkem."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Dojely oba Z voziky k~hornimu dorazu?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1	"Hledam kalibracni"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2	"bod podlozky"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE3	" z 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Zlepsuji presnost"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	"kalibracniho bodu"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE3	" z 9"

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"Kalibrace X/Y selhala. Kalibracni bod podlozky nenalezen."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"Kalibrace X/Y selhala. Nahlednete do manualu."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"X/Y calibration ok. X/Y axes are perpendicular."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"Kalibrace X/Y v poradku. X/Y osy mirne zkosene."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"X/Y osy jsou silne zkosene. Zkoseni bude automaticky vyrovnano pri tisku."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"Kalibrace X/Y selhala. Levy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"Kalibrace X/Y selhala. Pravy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"Kalibrace X/Y selhala. Predni kalibracni body moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"Kalibrace X/Y nepresna. Levy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"Kalibrace X/Y nepresna. Pravy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"Kalibrace X/Y nepresna. Predni kalibracni body moc vpredu."

#define MSG_BED_LEVELING_FAILED_POINT_LOW				"Kalibrace Z selhala. Sensor nesepnul. Znecistena tryska? Cekam na reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH				"Kalibrace Z selhala. Sensor sepnul prilis vysoko. Cekam na reset."

#endif // LANGUAGE_EN_H
