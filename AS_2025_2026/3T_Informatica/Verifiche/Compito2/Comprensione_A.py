# Comprensione del codice e output dei valori richiesti

x = 10
y = 5
z = x + y

for i in range(1,x):
    if i % 2 == 0 and i % 6 == 0:
        x += i
    else:
        y += i

print(f"x: {x}, y: {y}, z: {z}")

