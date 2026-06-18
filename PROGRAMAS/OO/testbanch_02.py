from package.pessoa import Pessoa
pessoa_1 = Pessoa(1.75, 19, 70) #altura, idade, peso

saida = pessoa_1.calculoimc()

print(f"O seu IMC é:{saida:.2f}")
