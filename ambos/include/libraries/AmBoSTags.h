
#define DATATYPE_User (0)
#define DATATYPE_Gruppe (1)
#define DATATYPE_Global (2)
#define DATATYPE_Brett (3)

#define DATATYPE_Member (50)
#define DATATYPE_BrettInhalt (51)

#define DATASET_Next (100)
#define DATASET_Prev (101)
#define DATASET_Free (102)
#define DATASET_Name (103)
#define DATASET_First (104)
#define DATASET_Last (105)
#define DATASET_Sub (106)
#define DATASET_Parent (107)
#define DATASET_New (108)
#define DATASET_NewSub (109)
#define DATASET_Delete (110)

#define AMBOS_TB (TAG_USER + 0xE0000)

#define USER_DownloadVerboten (AMBOS_TB + 1)  // TRUE/FALSE
#define USER_UploadVerboten (AMBOS_TB + 2)    // TRUE/FALSE
#define USER_LoginVerboten (AMBOS_TB + 3)     // TRUE/FALSE
#define USER_ANSIAus (AMBOS_TB + 4)           // TRUE/FALSE
#define USER_NetzPMVerboten (AMBOS_TB + 5)    // TRUE/FALSE
#define USER_Geschuetzt (AMBOS_TB + 6)        // TRUE/FALSE
#define USER_Hintergruende (AMBOS_TB + 7)     // TRUE/FALSE
#define USER_DownloadInfo (AMBOS_TB + 8)      // TRUE/FALSE
#define USER_Freiraum (AMBOS_TB + 9)          // Minuten seit 1.1.1978
#define USER_BezugsDatum (AMBOS_TB + 10)      // Minuten seit 1.1.1978
#define USER_ErstesLogin (AMBOS_TB + 11)      // Minuten seit 1.1.1978
#define USER_Uploads (AMBOS_TB + 12)          // ULONG
#define USER_Downloads (AMBOS_TB + 13)        // ULONG
#define USER_Konto (AMBOS_TB + 14)            // LONG
#define USER_LetzterAnruf (AMBOS_TB + 15)     // ULONG
#define USER_Anrufe (AMBOS_TB + 16)           // ULONG
#define USER_OnlineZeit (AMBOS_TB + 17)       // ULONG
#define USER_Zeilen (AMBOS_TB + 18)           // ULONG
#define USER_Tarifzone (AMBOS_TB + 19)        // ULONG
#define USER_Ratio (AMBOS_TB + 20)            // ULONG
#define USER_MaxPMs (AMBOS_TB + 21)           // ULONG
#define USER_Crashes (AMBOS_TB + 22)          // ULONG
#define USER_Sprache (AMBOS_TB + 23)          // ULONG 0-deutsch 1-englisch
#define USER_DatumsFormat (AMBOS_TB + 24)     // ULONG 0-Tag:Monat:Jahr  1-Monat:Tag:Jahr
#define USER_UserName (AMBOS_TB + 25)         // String max 40
#define USER_Passwort (AMBOS_TB + 26)         // String write Only ;-)
#define USER_Vorname (AMBOS_TB + 27)          // String max 128
#define USER_Nachname (AMBOS_TB + 28)         // String max 128
#define USER_Wohnort (AMBOS_TB + 29)          // String max 128
#define USER_Strasse (AMBOS_TB + 30)          // String max 128
#define USER_Telefon (AMBOS_TB + 31)          // String max 128
#define USER_Fax (AMBOS_TB + 32)              // String max 128
#define USER_Modem (AMBOS_TB + 33)            // String max 128
#define USER_Computer (AMBOS_TB + 34)         // String max 128
#define USER_Vertreter (AMBOS_TB + 35)        // String max 40
#define USER_XPRProtokoll (AMBOS_TB + 36)     // String max 40
#define USER_Packer (AMBOS_TB + 37)           // String max 40
#define USER_Menu (AMBOS_TB + 38)             // String max 60
#define USER_NetzVertreter (AMBOS_TB + 39)    // String max 128
#define USER_Farbanzahl (AMBOS_TB + 40)       // ULONG
#define USER_Online (AMBOS_TB + 41)           // TRUE/FALSE
#define USER_Neu (AMBOS_TB + 43)              // TRUE/FALSE
#define USER_GeburtsTag (AMBOS_TB + 44)       // ULONG
#define USER_GeburtsMonat (AMBOS_TB + 45)     // ULONG
#define USER_GeburtsJahr (AMBOS_TB + 46)      // ULONG

#define GRUPPE_GruppenName (AMBOS_TB + 100)  // String max 40
#define GRUPPE_Invers (AMBOS_TB + 101)       // TRUE/FALSE
#define GRUPPE_Sichtbar (AMBOS_TB + 102)     // ULONG 0-Niemanden  1-Jeden  2-Mitglieder
#define GRUPPE_InfoText (AMBOS_TB + 103)     // String max 128

#define MEMBER_MitliedName (AMBOS_TB + 104)  // String max 128
#define MEMBER_NetzMitlied (AMBOS_TB + 105)  // TRUE/FALSE

#define GLOBAL_BoxName (AMBOS_TB + 200)               // String max 128
#define GLOBAL_SysopName (AMBOS_TB + 201)             // String max 40
#define GLOBAL_DownloadPfad (AMBOS_TB + 202)          // String max 256
#define GLOBAL_UploadPfad (AMBOS_TB + 203)            // String max 256
#define GLOBAL_TextEditor (AMBOS_TB + 204)            // String max 80
#define GLOBAL_TextEditorParameter (AMBOS_TB + 205)   // String max 40
#define GLOBAL_TextEditorWB (AMBOS_TB + 206)          // TRUE/FALSE
#define GLOBAL_DosPasswort (AMBOS_TB + 207)           // String max 40 Write Only
#define GLOBAL_DefaultXPR (AMBOS_TB + 208)            // String max 40
#define GLOBAL_QuoteString (AMBOS_TB + 209)           // String max 12
#define GLOBAL_CDPattern (AMBOS_TB + 210)             // String max 128
#define GLOBAL_AuslagernPfad (AMBOS_TB + 211)         // String max 256
#define GLOBAL_SplitPfad (AMBOS_TB + 212)             // String max 128
#define GLOBAL_MSGIDHaltezeit (AMBOS_TB + 213)        // ULONG
#define GLOBAL_MB_Uploads (AMBOS_TB + 214)            // ULONG
#define GLOBAL_MB_News (AMBOS_TB + 215)               // ULONG
#define GLOBAL_MB_Mail (AMBOS_TB + 216)               // ULONG
#define GLOBAL_MB_PMUpload (AMBOS_TB + 217)           // ULONG
#define GLOBAL_MB_NetLogin (AMBOS_TB + 218)           // ULONG
#define GLOBAL_MB_NetCall (AMBOS_TB + 219)            // ULONG
#define GLOBAL_MB_Split (AMBOS_TB + 220)              // ULONG
#define GLOBAL_SysInfo_Uploads (AMBOS_TB + 221)       // TRUE/FALSE
#define GLOBAL_SysInfo_Downloads (AMBOS_TB + 222)     // TRUE/FALSE
#define GLOBAL_SysInfo_Auslastung (AMBOS_TB + 223)    // TRUE/FALSE
#define GLOBAL_SysInfo_Login (AMBOS_TB + 224)         // TRUE/FALSE
#define GLOBAL_SysInfo_Logoff (AMBOS_TB + 225)        // TRUE/FALSE
#define GLOBAL_SysInfo_Neustart (AMBOS_TB + 226)      // TRUE/FALSE
#define GLOBAL_SysopPM_Kopie (AMBOS_TB + 227)         // TRUE/FALSE
#define GLOBAL_SysopPM_IDVerkettung (AMBOS_TB + 228)  // TRUE/FALSE
#define GLOBAL_Senden_Cookie (AMBOS_TB + 229)         // TRUE/FALSE
#define GLOBAL_Senden_Sig (AMBOS_TB + 230)            // TRUE/FALSE
#define GLOBAL_NurAMenu (AMBOS_TB + 231)              // Nicht mehr aktuel
#define GLOBAL_EntpackFaktor (AMBOS_TB + 232)         // ULONG
#define GLOBAL_PortAnzahl (AMBOS_TB + 233)            // ULONG
#define GLOBAL_Screen_DisplayID (AMBOS_TB + 234)      // ULONG
#define GLOBAL_Screen_Font (AMBOS_TB + 235)           // *TextFont
#define GLOBAL_Screen_IBMFont (AMBOS_TB + 236)        // *TextFont
#define GLOBAL_Screen_WB (AMBOS_TB + 237)             // TRUE/FALSE
#define GLOBAL_AnrufeGesammt (AMBOS_TB + 238)         // ULONG
#define GLOBAL_AnrufeHeute (AMBOS_TB + 239)           // ULONG
#define GLOBAL_PortMinuten (AMBOS_TB + 240)           // ULONG
#define GLOBAL_OnlineMinuten (AMBOS_TB + 241)         // ULONG
#define GLOBAL_SerienNummer (AMBOS_TB + 242)          // ULONG

#define BRETTART_Asc 0
#define BRETTART_Bin 1
#define BRETTART_AscBin 2
#define BRETTART_Head 3
#define BRETTART_ExternHead 4
#define BRETTART_ExternBin 5
#define BRETTART_PM 255

#define BRETT_BrettName (AMBOS_TB + 300)           // String
#define BRETT_SchreibGruppe (AMBOS_TB + 301)       // String
#define BRETT_ZugangsGruppe (AMBOS_TB + 302)       // String
#define BRETT_LeseGruppe (AMBOS_TB + 303)          // String
#define BRETT_Verwalter (AMBOS_TB + 304)           // String
#define BRETT_Passwort (AMBOS_TB + 305)            // String
#define BRETT_Laufwerk (AMBOS_TB + 306)            // String
#define BRETT_BrettArt (AMBOS_TB + 307)            // ULONG
#define BRETT_LetzterEintrag (AMBOS_TB + 308)      // ULONG
#define BRETT_MaxEintrage (AMBOS_TB + 309)         // ULONG
#define BRETT_MaxAlter (AMBOS_TB + 310)            // ULONG
#define BRETT_MaxKB (AMBOS_TB + 311)               // ULONG
#define BRETT_LoeschenNachAlter (AMBOS_TB + 312)   // TRUE/FALSE
#define BRETT_LoeschenNachAnzahl (AMBOS_TB + 313)  // TRUE/FALSE
#define BRETT_LoeschenNachKB (AMBOS_TB + 314)      // TRUE/FALSE
#define BRETT_Area (AMBOS_TB + 315)                // TRUE/FALSE
#define BRETT_RatioBefreit (AMBOS_TB + 316)        // TRUE/FALSE
#define BRETT_Gesperrt (AMBOS_TB + 317)            // TRUE/FALSE
#define BRETT_NurNetz (AMBOS_TB + 318)             // TRUE/FALSE
#define BRETT_BoxPfad (AMBOS_TB + 319)             // String
#define BRETT_NetzPfad (AMBOS_TB + 320)            // String
#define BRETT_DosPfad (AMBOS_TB + 321)             // String

#define BRETTINHALT_Name (AMBOS_TB + 400)
#define BRETTINHALT_DosName (AMBOS_TB + 401)
#define BRETTINHALT_Uploader (AMBOS_TB + 402)
#define BRETTINHALT_ReadMeFile (AMBOS_TB + 403)
#define BRETTINHALT_Kommentar1 (AMBOS_TB + 404)
#define BRETTINHALT_Kommentar2 (AMBOS_TB + 405)
#define BRETTINHALT_Kommentar3 (AMBOS_TB + 406)
#define BRETTINHALT_Kommentar4 (AMBOS_TB + 407)
#define BRETTINHALT_Kommentar5 (AMBOS_TB + 408)
#define BRETTINHALT_Kommentar6 (AMBOS_TB + 409)
#define BRETTINHALT_Kommentar7 (AMBOS_TB + 410)
#define BRETTINHALT_Kommentar8 (AMBOS_TB + 411)
#define BRETTINHALT_Number (AMBOS_TB + 412)
#define BRETTINHALT_Art (AMBOS_TB + 413)
#define BRETTINHALT_UploadDate (AMBOS_TB + 414)
#define BRETTINHALT_CreateDate (AMBOS_TB + 415)
#define BRETTINHALT_Zugriffe (AMBOS_TB + 416)
#define BRETTINHALT_Size (AMBOS_TB + 417)
