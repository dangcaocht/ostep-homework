# Simulator

### Q1

| Action | Process tree |
| ------ | ------------ |
| | `a` |
| a forks b | `a` → `b` |
| a forks c | `a` → `b`, `c` |
| c EXITS | `a` → `b` |
| a forks d | `a` → `b`, `d` |
| a forks e | `a` → `b`, `d`, `e` |

```text
a
├── b
├── d
└── e
```

---

### Q2

The higher the `fork_percentage` are, the bigger the process tree

---

### Q3

```text
a forks b
a forks c
c forks d
a forks e
a forks f
```

---

### Q4

the child processes keep running until finish then exit?

okay in the simulator it'll find local parent (-R) or the parent of parent. But in read UNIX system it's a bit more complicated

---

### Q5

```bash
./fork.py -F -s 7
```

```text
Action: a forks b
Action: a forks c
Action: b forks d
Action: c forks e
Action: c forks f
```

```text
a
├── b
│   └── d
└── c
    ├── e
    └── f
```

---

### Q6

```bash
./fork.py -F -t -s 8
```

```text
Final Process Tree:
        a
        ├── b
        │   ├── c
        │   │   └── f
        │   └── e
        └── d
```

```text
a forks b
a forks d
b forks c
c forks f
b forks e
```

---

# Code

### Q1
the variable `x` is updated independently in each process

```text
hello world 100
hello world from parent 102
hello world from child 101
```
