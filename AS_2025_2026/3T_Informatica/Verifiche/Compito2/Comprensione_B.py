# Comprensione del codice e output dei valori richiesti

a = 2
b = 3
c = a * b

for j in range(1, c*2):
    if j % 3 == 0 and j % 4 == 0:
        a += j
    else:
        b += j 

print(f"a: {a}, b: {b}, c: {c}")

