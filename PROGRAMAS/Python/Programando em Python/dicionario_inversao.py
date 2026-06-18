dicionario = {"a":1, "b":2, "c":3, "d":4, "e":5}
print(dicionario)
dicionario = {key: value for value, key in dicionario.items()}
print(dicionario)


  