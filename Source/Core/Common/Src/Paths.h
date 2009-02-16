#ifndef PATHS_H
#define PATHS_H

#ifdef _WIN32
#define PLUGIN_PREFIX ""
#define PLUGIN_SUFFIX ".dll"
#else
#ifdef __APPLE__
#define PLUGIN_PREFIX "lib"
#define PLUGIN_SUFFIX ".dylib"
#else
#define PLUGIN_PREFIX "lib"
#define PLUGIN_SUFFIX ".so"
#endif
#endif

#define DIR_SEP "/"
#define DIR_SEP_CHR '/'

#define PLUGINS_DIR "Plugins"
#define ROOT_DIR "."
#define USERDATA_DIR "User"
#define SYSDATA_DIR "Sys"

// Dirs in both User and Sys
#define EUR_DIR "EUR"
#define USA_DIR "USA"
#define JAP_DIR "JAP"

// Dirs in User
#define GC_USER_DIR "GC"
#define WII_USER_DIR "Wii"
#define CONFIG_DIR "Config"
#define GAMECONFIG_DIR "GameConfig"
#define MAPS_DIR "Maps"
#define CACHE_DIR "Cache"
#define STATESAVES_DIR "StateSaves"
#define SCREENSHOTS_DIR "ScreenShots"
#define DUMP_DIR "Dump"
#define LOGS_DIR "Logs"
#define MAIL_LOGS_DIR "Mail"

// Dirs in Sys
#define GC_SYS_DIR "GC"
#define WII_SYS_DIR "Wii"

// Filenames
#define DOLPHIN_CONFIG "Dolphin.ini"
#define DEBUGGER_CONFIG "Debugger.ini"
#define TOTALDB "totaldb.dsy"

#define DEFAULT_GFX_PLUGIN	PLUGIN_PREFIX "Plugin_VideoOGL" PLUGIN_SUFFIX
#define DEFAULT_DSP_PLUGIN	PLUGIN_PREFIX "Plugin_DSP_HLE" PLUGIN_SUFFIX
#define DEFAULT_PAD_PLUGIN	PLUGIN_PREFIX "Plugin_PadSimple" PLUGIN_SUFFIX
#define DEFAULT_WIIMOTE_PLUGIN	PLUGIN_PREFIX "Plugin_Wiimote" PLUGIN_SUFFIX

#define FONT_ANSI "font_ansi.bin"
#define FONT_SJIS "font_sjis.bin"

#define DSP_ROM "dsp_rom.bin"
#define DSP_COEF "dsp_coef.bin"

#define GC_IPL "IPL.bin"
#define GC_SRAM "SRAM.raw"
#define GC_MEMCARDA "MemoryCardA"
#define GC_MEMCARDB "MemoryCardB"

#define WII_MASTERKEY "masterkey.bin"
#define WII_MASTERKEY_HEX "masterkey.txt"
#define WII_MASTERKEY1 "masterkey1.bin"
#define WII_MASTERKEY1_HEX "masterkey1.txt"
#define WII_EUR_SETTING "setting-eur.txt"
#define WII_USA_SETTING "setting-usa.txt"
#define WII_JAP_SETTING "setting-jpn.txt"

#define MEMORY_DUMP_FILE "mainram.dump"

// Shorts - dirs
// User dirs
#define FULL_USERDATA_DIR	ROOT_DIR DIR_SEP USERDATA_DIR DIR_SEP

#define FULL_GC_USER_DIR	FULL_USERDATA_DIR GC_USER_DIR DIR_SEP
//#define GC_USER_EUR_DIR FULL_GC_USER_DIR EUR_DIR
//#define GC_USER_USA_DIR FULL_GC_USER_DIR USA_DIR
//#define GC_USER_JAP_DIR FULL_GC_USER_DIR JAP_DIR

#define FULL_WII_USER_DIR	FULL_USERDATA_DIR WII_USER_DIR DIR_SEP
#define FULL_WII_ROOT_DIR	FULL_USERDATA_DIR WII_USER_DIR // This is the "root" for Wii fs, so that it may be used with created devices

#define FULL_GAMECONFIG_DIR	FULL_USERDATA_DIR GAMECONFIG_DIR DIR_SEP
#define FULL_CONFIG_DIR		FULL_USERDATA_DIR CONFIG_DIR DIR_SEP
#define FULL_CACHE_DIR		FULL_USERDATA_DIR CACHE_DIR DIR_SEP 
#define FULL_STATESAVES_DIR	FULL_USERDATA_DIR STATESAVES_DIR DIR_SEP
#define FULL_SCREENSHOTS_DIR FULL_USERDATA_DIR SCREENSHOTS_DIR DIR_SEP 
#define FULL_DUMP_DIR		FULL_USERDATA_DIR DUMP_DIR DIR_SEP
#define FULL_LOGS_DIR		FULL_USERDATA_DIR LOGS_DIR DIR_SEP
#define FULL_MAIL_LOGS_DIR	FULL_LOGS_DIR MAIL_LOGS_DIR DIR_SEP
#define FULL_MAPS_DIR		FULL_USERDATA_DIR MAPS_DIR DIR_SEP

// Sys dirs
#define FULL_SYSDATA_DIR	ROOT_DIR DIR_SEP SYSDATA_DIR DIR_SEP

#define FULL_GC_SYS_DIR	FULL_SYSDATA_DIR GC_SYS_DIR DIR_SEP
//#define GC_SYS_EUR_DIR FULL_GC_SYS_DIR EUR_DIR
//#define GC_SYS_USA_DIR FULL_GC_SYS_DIR USA_DIR
//#define GC_SYS_JAP_DIR FULL_GC_SYS_DIR JAP_DIR

#define FULL_WII_SYS_DIR	FULL_SYSDATA_DIR WII_SYS_DIR DIR_SEP

// Shorts - files
// User files
#define CONFIG_FILE				FULL_CONFIG_DIR DOLPHIN_CONFIG
#define DEBUGGER_CONFIG_FILE	FULL_CONFIG_DIR DEBUGGER_CONFIG

#define TOTALDB_FILE			FULL_SYSDATA_DIR TOTALDB
#define MAINRAM_DUMP_FILE		FULL_DUMP_DIR MEMORY_DUMP_FILE
#define GC_SRAM_FILE	FULL_USERDATA_DIR GC_USER_DIR DIR_SEP GC_SRAM

// Sys files
#define FONT_ANSI_FILE	FULL_GC_SYS_DIR FONT_ANSI
#define FONT_SJIS_FILE	FULL_GC_SYS_DIR FONT_SJIS

#define DSP_ROM_FILE	FULL_GC_SYS_DIR DSP_ROM
#define DSP_COEF_FILE	FULL_GC_SYS_DIR DSP_COEF

#define WII_MASTERKEY_FILE		FULL_WII_SYS_DIR WII_MASTERKEY
#define WII_MASTERKEY_FILE_HEX	FULL_WII_SYS_DIR WII_MASTERKEY_HEX
#define WII_MASTERKEY1_FILE		FULL_WII_SYS_DIR WII_MASTERKEY1
#define WII_MASTERKEY1_FILE_HEX	FULL_WII_SYS_DIR WII_MASTERKEY1_HEX
#define WII_EUR_SETTING_FILE	FULL_WII_SYS_DIR WII_EUR_SETTING
#define WII_USA_SETTING_FILE	FULL_WII_SYS_DIR WII_USA_SETTING
#define WII_JAP_SETTING_FILE	FULL_WII_SYS_DIR WII_JAP_SETTING

#endif // PATHS_H
