# Explanation of Commands

## Command 1

**Command**

```bash
gcc employee_records.c -o employee_records
```

**Explanation**

The `gcc` compiler converts the C source code into an executable named `employee_records`. Successful compilation produces no output.

---

## Command 2

**Command**

```bash
./employee_records
```

**Explanation**

This command executes the program. It creates a file, writes employee records, updates one specific record, retrieves another record using file positioning, and closes the file.

---

## Command 3

**Command**

```bash
ls -l employee_records.txt
```

**Explanation**

This command displays the details of the created file. It confirms that the employee records file was successfully created.

---

## Command 4

**Command**

```bash
./employee_records > output.txt
```

**Explanation**

This command executes the program and redirects its output into `output.txt`, making it easier to preserve the program results.

---

## Command 5

**Command**

```bash
cat output.txt
```

**Explanation**

The `cat` command displays the saved program output, confirming that all file operations were completed successfully.