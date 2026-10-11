for line in range(1, 6):
    for _ in range(5 - line):
        print(" ", end="")
    for _ in range(line):
        print("*", end="")
    print()
