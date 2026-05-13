# Comprensione del codice e output dei valori dell'array
import array as arr

n = 10
array1 = arr.array('i')

for i in range(1, n):
    array1.append(i*3 - 4)

print(f"Array1: {array1}")

for i in range(1, n-1):
    if i % 2 == 0 and i % 3 == 0:
        array1[i] += i
    else:
        array1[i] -= i

print(f"Array1: {array1}")

