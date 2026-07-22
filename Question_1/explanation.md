# Explanation of Commands

## Command 1

**Command**
```bash
chmod +x duplicate_backup.sh
```

**Explanation**

This command gives execute permission to the shell script. After running it, the script can be executed directly from the terminal.

---

## Command 2

**Command**

```bash
./duplicate_backup.sh
```

**Explanation**

This command executes the shell script. The script scans all submission files, detects duplicate files using SHA-256 hashes, backs up only unique files, generates a report, and stores any errors in a separate log file.

---

## Command 3

**Command**

```bash
ls backup
```

**Explanation**

This command lists the contents of the backup directory. It confirms that only unique submission files were copied successfully.

---

## Command 4

**Command**

```bash
cat report.txt
```

**Explanation**

This command displays the generated report. The report contains the total number of processed files, duplicate files, and files backed up.

---

## Command 5

**Command**

```bash
cat errors.log
```

**Explanation**

This command displays the error log file. Since the script completed successfully, the log is empty or contains only error messages if any occurred during execution.

---

## Command 6

**Command**

```bash
sha256sum submissions/*
```

**Explanation**

This command generates a SHA-256 hash for every submission file. Files with identical hashes have the same content, allowing duplicate submissions to be identified accurately.