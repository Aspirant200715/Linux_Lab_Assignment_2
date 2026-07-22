# Explanation of Commands

## Command 1

**Command**

```bash
echo "server_port=8080" > config.txt
```

**Explanation**

This command creates a sample configuration file named `config.txt`. It provides a file that can be edited and later recovered using vi.

---

## Command 2

**Command**

```bash
vi config.txt
```

**Explanation**

This command opens the configuration file in the vi editor. Changes can be made to the file, and vi automatically creates a swap file to support crash recovery.

---

## Command 3

**Command**

```bash
vi -r config.txt
```

**Explanation**

The `-r` option tells vi to recover the file using the available swap file. It restores unsaved changes after an unexpected crash.

---

## Command 4

**Command**

```bash
cat config.txt
```

**Explanation**

This command displays the recovered configuration file. It confirms that the recovered data has been successfully saved.