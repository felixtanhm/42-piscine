## 🚨 Instructions

Create a file called testShell00. For this assignment, you're required to modify 3 different aspects of the file directly through the shell.

1. File permissions (`chmod`)
2. Size of the file (`truncate`)
3. Date / Time of the file (`touch`)

### File Permissions

Using the `chmod` command, you can change the permissions of the `User`, `Group` and `Other` categories.

The anatomy to change the permissions can be done as per below:

To change the the permissions for all the categories:
```bash
chmod +r +w +x 'filename'
```
Where `r` stands for `Read`, `w` stands for `Write` and `x` stands for Execute.

To change it only for specific categories, configure the categories as follows:
```bash
chmod u=rx,g=rw,o=r 'filename'
```

### Size of the File

Using the `truncate` command, you can extend or shrink the size of the file. The `-s` flag signifies size.
```bash
truncate -s 40 'filename'
```

### Date / Time of the File

Using the touch command, you can modify the last access time of the file.
```bash
touch -t YYYYMMDDhhmm.SS 'filename'
```
Note that the date cannot be in the future or Moulinette will throw an error and fail you. However, you need to adhere to the month and date specified in your assignment.
