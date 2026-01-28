# Comprensione del codice e output dei valori richiesti

n = 4
m = 6
x = n * m

for k in range(1, x):
    if k % 2 != 0 and k % 5 == 0:
        n += k
    elif k % 3 == 0:
        m += k
    else:
        n = n + 1
        m = m - 1
    
print(f"n: {n}, m: {m}, x: {x}")

