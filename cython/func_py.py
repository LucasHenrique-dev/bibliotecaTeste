def soma(a, b):
    return a + b


def fib(n):
    a = 0
    b = 1

    for i in range(n):
        a, b = a + b, a

    return a
