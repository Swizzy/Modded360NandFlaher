﻿#ifndef __GERMAN_TRANSLATION
#define __GERMAN_TRANSLATION

#define TRANSLATION_BY "Übersetzung von Dr.Gonzo\n\n"
#define MSG_SIMPLEFLASHER_CMD_FOUND_ENTERING_AUTO "game:\\simpleflasher.cmd gefunden!\n * Gehe in den Automatik Modus!\n"
#define MSG_GETTING_NAND_SIZE "Überprüfe Nand Größe...\n"
#define MSG_SIZE " * Größe: 0x%X (%s)\n"
#define MSG_ERROR "\n ! Fehler: "
#define MSG_ERROR_READING_BYTES "\rLesefehler 0x%X bytes bei offset 0x%X (gelesen: 0x%X bytes)!\n"
#define MSG_ERROR_WRITING_BYTES "\rSchreibfehler 0x%X bytes bei offset 0x%X (geschrieben: 0x%X bytes)!\n"
#define MSG_ERROR_FAILED_TO_READ_BYTES_FROM_FILE "\rFehler: Lesefehler %d bytes vom file\n\n"
#define MSG_ERROR_FAILED_TO_WRITE_BYTES_TO_FILE "\rERROR: Schreibfehler %d bytes vom file\n\n"
#define MSG_ERROR_INVALID_FILE_SIZE "Fehler: %s - Größe %d keine gültige Image Größe!\n"
#define MSG_ERROR_SIZE_NOT_SUPPORTED "Fehler: Größe %d wird nicht unterstützt!\n"
#define MSG_FILE_NOT_FOUND "File %s nicht gefunden\n"
#define MSG_UNABLE_TO_MOUNT_FLASH "Kann den Flash nicht mounten!"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_READING "nicht in der Lage das Flash zu öffnen: zum lesen\n"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_WRITING "nicht in der Lage das Flash zu öffnen: zum schreiben\n"
#define MSG_UNABLE_TO_OPEN_FOR_WRITING "nicht in der Lage das Flash zu öffnen %s zum schreiben\n"
#define MSG_UNABLE_TO_OPEN_FOR_READING "nicht in der Lage das Flash zu öffnen %s zum lesen, Fehler: 0x%X\n"
#define MSG_UNABLE_TO_GET_SIZE_OF_FLASH "Nicht imstande die Flash Größe zu bestimmen!\n"
#define MSG_UNABLE_TO_WRITE_BYTES_TO_FLASH "Nicht in der Lage zu schreiben 0x%X bytes zum flash, Fehler: 0x%X Offset: 0x%X"
#define MSG_UNABLE_TO_READ_FROM "Nicht in der Lage zu lesen 0x%X bytes von %s (read: 0x%X bytes)\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER_FOR "Fehler beim zuweisen 0x%X bytes buffer für %s\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER "Fehler beim zuweisen 0x%X bytes für den buffer!\n"
#define MSG_UNABLE_TO_READ_0X630_BYTES_FROM "Lesefehler 0x630 bytes von %s!\n"
#define MSG_PROCESSING_BLOCK "\rprocessing block 0x%X of 0x%X (%3.2f %%)"
#define MSG_PROCESSED_OF_BYTES "\rProcessed 0x%X of 0x%X bytes (%3.2f %%)"
#define MSG_PROCESSING_START "\rprocessing block"
#define MSG_PROCESSED_START "\rProcessed"
#define MSG_DONE_SUCCESS_DUMPED_BYTES "\rFertig! Erfolgreich ausgelesene 0x%X bytes nach %s\n"
#define MSG_DONE_READ_BYTES_FROM_NAND_WROTE "\rFertig! gelesen 0x%X bytes vom NAND, geschrieben 0x%X bytes von %s\n"
#define MSG_DONE_SUCCESS_WROTE_BYTES "Erfolgreich geschrieben 0x%X bytes von %s zum Flash!\n"
#define MSG_DONE_FAILED_WRITE_BYTES "Schreibfehler 0x%X bytes vom %s zum Flash!\n"
#define MSG_IMAGE_WRITTEN "image geschrieben ! :D\n"
#define MSG_IMAGE_DUMPED "NAND gelesen! :D\n"
#define MSG_FAILED_TO_WRITE_IMAGE "Schreibfehler beim schreiben des Image :(\n"
#define MSG_FAILED_TO_DUMP_NAND "Fehler beim lesen des Nand :(\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH "%s geöffnet OK, versuche zu lesen 0x%X bytes vom flash...\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH_READABLE "%s geöffnet OK, versuche zu lesen 0x%X bytes (%s) vom flash...\n"
#define MSG_OPENED_OK_ATTEMPTING_WRITE_TO_FLASH "%s geöffnet OK, versuche zu schreiben 0x%X bytes zum Flash...\n"
#define MSG_READING_TO_MEMORY " * Einlesen des Images in den Speicher...\n"
#define MSG_IS_BIGGER_THEN_FLASH "%s ist größer als Flash! Abbruch!\n"
#define MSG_IS_SMALLER_THEN_FLASH "%s ist kleiner als Flash! Abbruch!\n"
#define MSG_WRITING_TO_FLASH " * Schreibe Image in den Flashspeicher...\n"
#define MSG_SFCX_ERROR "\r ! SFCX: "
#define MSG_BAD_BLOCK_FOUND_AT "Bad block gefunden bei 0x%X\n"
#define MSG_ILLEGAL_LOGICAL_BLOCK "Illegal logical Block bei 0x%X (status: 0x%X)\n"
#define MSG_UNKNOWN_ERROR_AT_ADDRESS "Unbekannter Fehler bei Adresse 0x%X: 0x%X. Please worry.\n"
#define MSG_UNEXPECTED_SFCX_WRITE_PAGE_STATUS "Unerwarteter sfcx_write_page status 0x%X\n"
#define MSG_BLOCK_SEEMS_BAD "\rblock 0x%X sieht schlecht aus, status 0x%X\n"
#define MSG_ATTEMPTING_BLOCK_RECOVERY "Versuche den Block wiederherzustellen ...\n"
#define MSG_BLOCK_RECOVERED_SUCCESSFULLY "Block wiederhergestellt! (A.K.A Der Block war nicht fehlerhaft, an seinem ersten Platz...)\n"
#define MSG_BLOCK_CANNOT_BE_RECOVERED "Block kann nicht wiederhergestellt werden! (A.K.A it's really bad)\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_A0 "nicht unterstützt Type A-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_B0 "nicht unterstützt B-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE "nicht unterstützt\n"
#define MSG_RAW_NAND_DETECTED " *  RAW NAND gefunden!\n * Gehe in NAND Modus...\n\n"
#define MSG_MMC_NAND_DETECTED " *  MMC NAND gefunden!\n * Gehe in MMC/Corona v2 [4GB] Modus...\n\n"
#define MSG_CALCULATED_VALUE "\nBerechneter Wert: %08X"
#define MSG_EXPECTED_VALUE "\nErwarteter Wert: %08X"
#define MSG_CHECKING_CRC32 " * Überprüfe %s Crc32: "
#define MSG_CALCULATING_CRC32_FOR "Berechnung CRC32 für: %s\n"
#define MSG_ATTEMPTING_TO_SAVE_CRC32_TO " * Versuche CRC32 Wert zu speichern nach %s...\n"
#define MSG_SUCCESSFULLY_SAVED_CRC32 " * Erfolgreich CRC32 Wert gespeichert!\n"
#define MSG_LOOKING_FOR " * Schaue nach %s... "
#define MSG_FOUND_CHECKING_CRC32 "gefunden!\n * Überprüfe CRC32...\n"
#define MSG_NOT_FOUND "nicht gefunden!\n"
#define MSG_CURRENT_DASHBOARD "Derzeitiges Dashboard: %d.%d.%d.%d\n"
#define MSG_CURRENT_DASHLAUNCH "Derzeitige DashLaunch Version: %hu.%02hu (%hu)\n"
#define MSG_DASHLAUNCH_NOT_RUNNING "Derzeitiges DashLaunch Version: Nicht aktiv\n"
#define MSG_SYSCALL_RETURN_VALUE "SysCall Rückgabe Wert: 0x%llX\n" // Sollte man die Finger von lassen, da es nicht für jeden Nutzer von Bedeutung ist, der kein Entwickler ist !
#define MSG_YOUR_CPUKEY_IS "Dein CPU Key ist: "
#define MSG_CPUKEY_SUCCESSFULLY_SAVED " * CPU-Key erfolgreich gespeichert nach: %s\n"
#define MSG_CHECKING_FOR_SPARE "Überprüfe %s wegen Spare Data... "
#define MSG_BAD_MAGIC "%s Enthält nicht die Magic Bytes, die für ein Xbox 360 NAND image erwartet werden, Abbruch!\n"
#define MSG_SPARE_DETECTED "Spare Data entdeckt!\n"
#define MSG_SPARE_NOT_DETECTED "Keine Spare Data entdeckt!\n"
#define MSG_YOU_HAVE_SECONDS_BEFORE_CONTINUE "\rDu hast %d Sekunden, um die Konsole auszuschalten, bevor es weitergeht..."
#define MSG_TIMES_UP "Zeit ist abgelaufen! Ich hoffe für Dich, das Du keinen Fehler gemacht hast! ;)\n"
#define MSG_PRESS_START_TO_FLASH "Drücke Start, zum flashen Deines Nand, oder etwas anderes zum abbrechen!\n\n"
#define MSG_PRESS_START_TO_OVERWRITE_EXISTING_FILE " **** Warnung: %s Bereits vorhanden! ****\nDrücke auf Start um das File zu überschreiben!"
#define MSG_PRESS_A_TO_DUMP_SYSTEM_ONLY "Drücke A um die Systempartition zu dumpen (64MB, empfohlen!)\n"
#define MSG_PRESS_B_TO_DUMP_FULL_NAND "Drücke B, um einen vollen Dump auszuführen (256MB/512MB, das dauert etwas...)\n"
#define MSG_PRESS_BACK_TO_ABORT_DUMP "Drücke B, um den Dump Prozess zu unterbrechen...\n"
#define MSG_WARNING_DO_NOT_TOUCH_CONSOLE_OR_CONTROLLER "Warnung ! Lasse die Finger wähend des Flash Prozesses, von Deiner Konsole und dem Controller!!\nDie Konsole wird neu starten, wenn sie fertig ist!\n\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE "\n\nWarnung! Du bist dabei ein Image auf eine Konsole zu flashen, das keine Spare Data enthält, diese aber benötigt!\nWenn Du weist was Du tust, drücke auf Start zum weitermachen, oder etwas anderes zum abbrechen!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE "\n\nWarnung! Du bist dabei ein Image zu flashen, das Spare Data enthält, die von der Konsole aber nicht benötigt werden!\nWenn Du weist was Du tust, drücke auf Start zum weitermachen, oder etwas anderes zum abbrechen!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE_AUTO "\n\nWarnung! Du bist dabei ein Image auf eine Konsole zu flashen, das keine Spare Data enthält, diese aber benötigt!\nSchalte Deine Konsole aus, um abzubrechen!"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE_AUTO "\n\nWarnung! Du bist dabei ein Image zu flashen, das Spare Data enthält, die von der Konsole aber nicht benötigt werden!\nSchalte Deine Konsole aus, um abzubrechen!"
#define MSG_COMPLETED_AFTER_SECONDS "Abgeschlossen nach %4.2f Sekunden\n"
#define MSG_REBOOTING_IN "Neustart in "
#define MSG_BYE "Bis bald!"
#define MSG_TRY_AGAIN "Versuch es noch einmal:\n"
#define MSG_BB_DETECTED_SETTING_64MB " * %d MB NAND gefunden! Setze Dump Größe auf 64MB!"
#define MSG_EXECUTING_COMMAND_IN_SECONDS "\rAusführendes Kommando in %d Sekunden"
#define MSG_EXECUTING_COMMAND "\rAusführendes Kommando!\n"
#define MSG_LOOKING_FOR_CMD_FILE_FOR_AUTO_MODE " * Suche nach simpleflasher.cmd für automatische Funktionalitäten ...\n"
#define MSG_AUTO_DUMP_FOUND " * AutoDump Kommando gefunden!\n * ausführenden Befehl!\n\n"
#define MSG_AUTO_FLASH_FOUND " * AutoFlash Kommando gefunden!\n\n"
#define MSG_AUTO_SAFE_FLASH_FOUND " * AutoSafeFlash Befel gefunden!\n\n"
#define MSG_AUTO_EXIT_FOUND " * AutoExit Befehl gefunden!\n\n"
#define MSG_AUTO_REBOOT_FOUND " * Neustart Befehl gefunden!\n\n"
#define MSG_HASH_DONT_MATCH "Hash stimmt nicht überein, oder File existiert nicht... Abbruch!\n"
#define MSG_BAD_COMMAND_FILE_RETURNING_TO_MANUAL_MODE "! Fehler: Bad command file, bitte lese die Readme!\nGehe zurück in Manual Modus!\n"
#define MSG_COMMAND_FILE_NOT_FOUND_ENTERING_MANUAL_MODE "game:\\simpleflasher.cmd nicht gefunden!\n * Schalte in Manual Modus!\n\n"
#define MSG_CONSOLE_INFO_LINE "\n============= Konsolen Information: =============\n\n"
#define MSG_CONSOLE_INFO_BOTTOM "\n================================================\n\n"
#define MSG_DETECTING_NAND_TYPE " * Erkennung NAND Typ...\n"
#define MSG_ATTEMTPING_TO_GRAB_CPUKEY " * Versuche den CPU Key zu finden...\n"
#define MSG_INCOMPATIBLE_DASHLAUNCH "Deine DashLaunch Version ist inkompatibel, benutze Xell!\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH "Drücke auf A, wenn Du Dein Nand mit Rawflash v5 flashen willst\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH4G "Drücke auf A, wenn Du Dein Nand mit Rawflash4G v1 flashen willst.\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH "Drücke auf B, wenn Du einen Safeflash mit Rawflash v5 ausführen willst (lesen + schreiben)\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH4G "Drücke auf B, wenn Du einen Safeflash mit Rawflash Rawflash4G v1 (lesen + schreiben)\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH "Drücke X, wenn Du Dein Nand mit Rawdump v1, auslesen willst\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH4G "Drücke X, wenn Du Dein Nand mit Rawdump4G v1, auslesen willst\n"
#define MSG_PRESS_ANY_OTHER_BUTTON_TO_EXIT "Wenn Du irgendetwas anderes drückst, wird die Anwendung geschlossen ! ...\n"
#define MSG_PRESS_ANY_BUTTON_TO_EXIT "Drücke irgendeinen Knopf zum verlassen !\n"

#define MSG_PRESS_B_TO_OVERWRITE_EXISTING_FILE_SERIAL "Or press B to save/overwrite as %s_%s.bin\n"
#define MSG_ATTEMPTING_TO_GET_CONSOLE_SERIAL " * Attempting to get Console Serial...\n"
#define MSG_CONSOLE_SERIAL "Console Serial: %s\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_USB "game:\\ isn't mounted, checking if a usb device is available...\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_HDD "game:\\ isn't mounted, checking if a hdd is available...\n"
#define MSG_GAME_NOT_MOUNTED "game:\\ isn't mounted, unable to continue!\n"

#endif