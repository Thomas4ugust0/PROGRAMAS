class Pessoa:
    total_pessoas = 0

def init (self, nome, idade):
    self.nome = nome
    self.idade = idade
    Pessoa.total_pessoas += 1
@classmethod
def total(cls):
    return cls.total_pessoas


def testbanch():
# Criando instâncias da classe Pessoa
    pessoa1 = Pessoa("Ana", 30)
    pessoa2 = Pessoa("João", 25)
    # Chamando o método de classe total()
    print(f"Total de pessoas: {Pessoa.total()}") # Saída: Total de pessoas: 2
    # Chamando o método de instância apresentar()
    print(pessoa1.apresentar()) # Saída: Olá, meu nome é Ana e tenho 30 anos.
    print(pessoa2.apresentar()) # Saída: Olá, meu nome é João e tenho 25 anos.
    def apresentar(self): return f"Olá, meu nome é {self.nome} e tenho {self.idade} anos."

if __name__ == "__main__":

    testbanch()