# Übung 6: Modularisierung

## Vergessen Sie, eine der Funktionen in stack.cpp zu implementieren:

push(char c) auskommentiert:

```bash
Undefined symbols for architecture arm64:
  "Stack::push(char)", referenced from:
      klammerungAusgewogen(char const*, Stack&) in klammerung.cpp.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
ninja: build stopped: subcommand failed.
```

## Duplizieren Sie eine der Funktionen aus stack.cpp in klammerung.cpp

push(char c) dupliziert:

```bash
error: redefinition of 'push'
```

## Entfernen Sie die Datei klammerung.cpp aus dem Projekt

```bash
ninja: error: '.../klammerung.cpp', needed by 'CMakeFiles/.../klammerung.cpp.o', missing and no known rule to make it
```

## Entfernen Sie die #include-Anweisung für stach.h aus stack.cpp oder klammerung.cpp.

```bash
error: use of undeclared identifier 'Stack'
```

## Geben Sie bei einem Prototypen in stack.hpp einen anderen Rückgabetyp, mehr oder weniger Parameter oder andere Parametertypen als in der Im- plementierung in stack.cpp an.

push(char c) -> push(int i);
```bash
error: out-of-line definition of 'push' does not match any declaration in 'Stack'
```

push(char c) -> push(char c, char s)
```bash
error: too few arguments to function call, expected 2, have 1
```

## Entfernen Sie den Prototypen von pop aus stack.hpp.

```bash
error: no member named 'pop' in 'Stack'; did you mean 'top'?
```