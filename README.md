> In this first class, we'll dive into the mesmerizing world of **binary language**, where 0s and 1s rule the roost! Get ready to unleash the power of 'on' and 'off' as we unravel the secrets of the digital universe!
Hold on tight, because that's not all! We'll take a detour to **Linux file permissions**,**logic gates** (AND/OR), **git** and All of this supported by the **Python**🐍 and **C**🦾 programming languages.

> may the 0s and 1s be with you! 🚀😄

## Table of Contents.
1. [Binary Bases](#binary-bases)
2. [Linux File Permissions](#linux-file-permissions)
3. [Logic Gates](#logic-gates)
4. [Git and Its Use](#git-and-its-use)
5. [Further Reading](#further-reading)

## Binary Bases.

### Decimal Base (Base 10): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*General Use*: Everyday mathematics, finance, education, science.

### Binary Base (Base 2): 0, 1
*Computing*: Digital electronics, data representation in computers.

### Hexadecimal Base (Base 16): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A(10), B(11), C(12), D(13), E(14), F(15)
*Computer Programming*: Compact representation of binary data, colors in web design.

### Octal Base (Base 8): 0, 1, 2, 3, 4, 5, 6, 7

*Unix/Linux Systems*: Representation of file permissions in older systems.

## How to convert decimal to binary.

Find the largest power of 2 that is less than or equal to the decimal number. This will be the highest exponent in the binary representation.

Write down a "1" in the position of the found exponent, and subtract that power of 2 from the original number.

Repeat steps 2 and 3 with the remaining decimal number (after subtraction) until you reach the smallest power of 2.

If there are any powers of 2 missing in the binary representation, write "0" in those positions.

## Practical Example of Decimal to Binary Conversion.

| 2^9 | 2^8 | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 | Decimal Num   |
|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|---------------|
| 512 | 256 | 128 | 64  | 32  | 16  | 8   | 4   | 2   | 1   |               |
|     |     |     |     |     |     | 0   | 0   | 0   | 0   |      0        |
|     |     |     |     |     |     | 0   | 0   | 0   | 1   |      1        |
|     |     |     |     |     |     | 0   | 0   | 1   | 0   |      2        |
|     |     |     |     |     |     | 0   | 0   | 1   | 1   |      3        |
|     |     |     |     |     |     | 0   | 1   | 0   | 0   |      4        |
|     |     |     |     |     |     | 0   | 1   | 0   | 1   |      5        |
|     |     |     |     |     |     | 0   | 1   | 1   | 0   |      6        |
|     |     |     |     |     |     | 0   | 1   | 1   | 1   |      7        |
|     |     |     |     |     |     | 1   | 0   | 0   | 0   |      8        |
|     |     |     |     |     |     | 1   | 0   | 0   | 1   |      9        |
|     |     |     |     |     |     | 1   | 0   | 1   | 0   |      10       |
|     |     |     |     |     |     | 1   | 0   | 1   | 1   |      11       |
|     |     |     |     |     |     | 1   | 1   | 0   | 0   |      12       |
|     |     |     |     |     |     | 1   | 1   | 0   | 1   |      13       |
|     |     |     |     |     |     | 1   | 1   | 1   | 0   |      14       |
|     |     |     |     |     |     | 1   | 1   | 1   | 1   |      15       |

## How to convert a decimal numeber in binary number with python.

[link]

## How to convert a decimal numeber in binary number with C.

[link]


## Linux file permissions.

The file permission format is structured as follows: -rwxrwxrwx. The first character indicates the file type (e.g., - for regular files, d for directories, etc.), and the next three sets of three characters each represent the permissions for the owner, group, and others, respectively.

Here are some examples of how to work with file permissions in the terminal:

Display File Permissions:
To see the permissions of a file, you can use the ls -l command in the terminal.

```
$ ls -l myfile.txt
-rw-r--r-- 1 user group 1234 Aug 2 10:15 myfile.txt
```
In this example, the file myfile.txt has the following permissions:

Owner (user): read and write (rw-)
Group (group): read-only (r--)
Others: read-only (r--)

Changing File Permissions:
To change file permissions, you can use the chmod command. For instance:
```
$ chmod u+x myfile.txt
```

Changing Permissions Using Numeric Notation:
You can also use numeric notation to set permissions. Each permission is represented by a number: 4 for read, 2 for write, and 1 for execute. The sum of these numbers gives the desired permission. For example:

```
$ chmod 647 myfile.txt
```

In this case, the permissions are set as follows:

Owner: read and write (6 = 4 + 2)
Group: read-only (4)
Others: read, write and execute (7 = 4 + 2 + 1)

## Logic Gates.

### 1.Logic Gates: AND

Description: The AND gate is a fundamental digital logic gate that takes two binary inputs and produces an output of 1 (true) only if both inputs are 1; otherwise, the output is 0 (false).
Usage: The AND gate is commonly used to combine multiple conditions or signals in digital circuits and programming to control the flow of data or perform conditional operations.
Abstraction with Programming: In programming, we can represent the AND gate's behavior using the logical AND operator (&&). It returns true only if both operands are true; otherwise, it returns false.

### 2. Logic Gates: OR

Description: The OR gate is another crucial digital logic gate that takes two binary inputs and produces an output of 1 (true) if at least one input is 1; otherwise, the output is 0 (false).
Usage: The OR gate is extensively used to merge multiple conditions or signals in digital circuits and programming, providing flexibility in decision-making processes.
Abstraction with Programming: In programming, we can represent the OR gate's behavior using the logical OR operator (||). It returns true if at least one operand is true; otherwise, it returns false.

### Python Example
[link]
### C Example
[link]

The concept we've just explored focuses on understanding logic gates and their application in software development. These fundamental building blocks are crucial for making binary decisions and controlling data flow in our applications. By using interactive examples of logic gates, like the AND and OR gates, we gain a hands-on understanding of their behavior and practical usage in creating efficient and powerful software. Through this journey, we've unlocked the secrets of binary decision-making and developed the skills to create intelligent and dynamic applications.

## Git and Its Use:

Git is designed to keep track of changes to code files over time. It allows developers to create multiple branches, work on features independently, and merge changes back into the main codebase.

### GitHub:

GitHub, founded in 2008, is a web-based hosting service for Git repositories. It provides a collaborative platform where developers can store, share, and contribute to open-source projects. GitHub offers issue tracking, pull requests, and a user-friendly interface that makes collaborating with others more accessible.

### Github Main Competitors:

Some of the main competitors to GitHub are GitLab, Bitbucket, and Azure DevOps.

### Main Functions of Git with Examples:

*Initialize a Git Repository:*
This command is used to create a new Git repository in a directory. It initializes the directory to be tracked by Git, setting up the necessary data structures for version control.
```
$ git init
```
*Clone a Remote Repository:*
The git clone command is used to create a local copy of a remote repository. It allows developers to work on their machines while keeping the project history intact.
```
$ git clone https://github.com/username/repo.git
```
*Check Status of Repository:*
The `git status` command provides an overview of the current state of the repository. It shows which files have been modified, staged, or untracked.
```
$ git status
```
*Stage Changes for Commit:*
Before making a commit, changes need to be staged using `git add`. This command adds modified files to the staging area, preparing them to be included in the next commit.
```
$ git add filename
```
*Commit Changes:*
The git commit command records the changes made in the staging area to the repository's history. It requires a commit message that describes the changes made.
```
$ git commit -s -m "Fix issue #123"
```

*Push Changes to Remote Repository:*
Once the changes are committed to a local branch, git push is used to send those changes to a remote repository, making them available to others.

```
$ git push origin branch_name
```

### Good Practices

**Meaningful Commits**: Make atomic commits with clear and descriptive messages. This helps to understand the changes made in the code.

**Sign your Commits**: Signing your commits is a valuable practice to enhance the integrity and authenticity of your code changes in Git.

When creating commits in Git, it is recommended to use the **imperative** mood in your commit messages. The imperative mood is a grammatical mood used for commands, requests, or instructions. By using this style, your commit messages will sound like concise instructions to apply the changes in the commit.

Here are some examples of commit messages in the imperative mood:

"Update the homepage styles"
"Fix the login validation bug"
"Implement user profile functionality"
"Refactor the database connection code"

**Branches**: Use branches to work on features or fixes separately. Avoid making changes directly on the main branch (usually named "master" or "main").

**Pull Requests (PRs)**: When completing a task on a branch, open a PR for code review before merging it into the main branch. This promotes collaboration and ensures code quality.

**Code Review**: Participate in code reviews and provide constructive feedback to other team members. This helps improve code quality and shares knowledge.

**.gitignore**: Use .gitignore files to prevent unnecessary or sensitive files from being added to the repository.

**Readme**: Maintain an updated README.md file, describing the project's purpose, installation and usage instructions, and other relevant information.

**Tags and Releases**: Use tags and releases to mark stable and important versions of your project, making it easy for users to access specific versions.

**Avoid Messy Merge History**: Avoid merging the main branch into your feature branch to keep the commit history clean and easier to understand.

**Avoid Large Commits**: Try to make small, focused commits for a single task to facilitate review and bug identification.

