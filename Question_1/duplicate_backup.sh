#!/bin/bash

SOURCE_DIR="submissions"
BACKUP_DIR="backup"
REPORT_FILE="report.txt"
ERROR_FILE="errors.log"

mkdir -p "$BACKUP_DIR"

processed=0
duplicates=0
backedup=0

declare -A hashes

> "$REPORT_FILE"
> "$ERROR_FILE"

for file in "$SOURCE_DIR"/*
do
    if [ -f "$file" ]; then
        ((processed++))

        hash=$(sha256sum "$file" 2>>"$ERROR_FILE" | awk '{print $1}')

        if [[ -z "${hashes[$hash]}" ]]; then
            hashes[$hash]=1
            cp "$file" "$BACKUP_DIR/" 2>>"$ERROR_FILE"
            ((backedup++))
        else
            ((duplicates++))
        fi
    fi
done

echo "Files Processed : $processed" > "$REPORT_FILE"
echo "Duplicate Files : $duplicates" >> "$REPORT_FILE"
echo "Files Backed Up : $backedup" >> "$REPORT_FILE"

echo "Task Completed."