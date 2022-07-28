import random

def Notas():
    x = list(range(1, 102))
    for i in range(0, 100):
        x[i] = random.randint(1, 10)
        print("La nota del estudiante", (i + 1), "es", x[i])
    
    Sumatoria = 0
    for k in range(1, 100):
        nactual = x[k]
        Sumatoria += nactual
    p = Sumatoria / 10
    print("La sumatoria total es: ", Sumatoria)
    print("El promedio es: ", p)
Notas()