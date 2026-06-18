entrada1 = input("Qual variável você quer descobrir? x OU y?\n") 
if entrada1 == 'x':
    y = float(input("Digite o valor de y:\n"))
elif entrada1 == 'y':
    x = float(input("Digite o valor de x:\n"))
else:
    print("variável não válida")
entrada2 = input("Quais sao os valores de a e b?\n").split()

a = float(entrada2[0])
b = float(entrada2[1])

if(a == 0):
    print(f"a função é constante em {b:.2f}")
else:
    if entrada1 == 'x':
        x = (y-b)/a
        print(f"o valor de x é:{x:.2f}")
    elif entrada1 == 'y':
        y = a*x + b
        print(f"o valor de y é:{y:.2f}")
