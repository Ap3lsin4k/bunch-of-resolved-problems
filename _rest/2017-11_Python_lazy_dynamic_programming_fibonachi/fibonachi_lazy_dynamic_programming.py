fib = {}
for i in range(2, 100 + 1):
    fib[i] = fib[i - 1] + fib[i - 2]  # Recount state i
    print (fib[i])
