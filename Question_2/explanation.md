# Explanation of Commands

## Command 1

**Command**

```bash
gcc process_manager.c -o process_manager
```

**Explanation**

The `gcc` compiler compiles the C source file into an executable named `process_manager`. No output indicates that the compilation was successful.

---

## Command 2

**Command**

```bash
./process_manager
```

**Explanation**

This command executes the program. The parent process creates two child processes, monitors their execution, terminates the unresponsive child process, and waits for all child processes to finish.

---

## Command 3

**Command**

```bash
ps -ef | grep process_manager
```

**Explanation**

The `ps` command lists all running processes, while `grep` filters the output to display only the `process_manager` process. This helps verify that the child processes were created during execution.

---

## Command 4

**Command**

```bash
./process_manager > output.txt
```

**Explanation**

This command executes the program and redirects its output to `output.txt`. It allows the program's execution results to be stored for future reference.

---

## Command 5

**Command**

```bash
cat output.txt
```

**Explanation**

The `cat` command displays the contents of the output file. It verifies that the program executed correctly and the output was successfully saved.