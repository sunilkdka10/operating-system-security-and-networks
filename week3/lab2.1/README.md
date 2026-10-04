# Lab 2: C Libraries, Linking, and ELF

## Objective

To understand C libraries, static and dynamic linking, and the ELF structure of Linux executables.

## Topics Covered

* C header files and Standard Library
* Static and shared libraries
* Static vs dynamic linking
* ELF executable structure
* Program and dynamic headers
* Library dependencies using `ldd`

## Main Program

`procinfo.c` demonstrates the use of functions such as:

* `getpid()`
* `getppid()`
* `time()`
* `localtime()`
* `printf()`

## Important Commands

```bash
gcc procinfo.c -o procinfo
gcc -static procinfo.c -o procinfo_static
gcc procinfo.c -o procinfo_dynamic

readelf -h procinfo_dynamic
readelf -l procinfo_dynamic
readelf -d procinfo_dynamic

ldd procinfo_dynamic
ldd procinfo_static
```

## Result

The lab helped demonstrate how C programs use libraries, how static and dynamic linking work, and how ELF executables store information about program structure and dependencies.
