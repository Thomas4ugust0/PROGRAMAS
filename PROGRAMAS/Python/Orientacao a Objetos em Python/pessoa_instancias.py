class Pessoa:
    total_pessoas = 0

    def __init__(self, nome: str, idade: int, profissao: str):
        self.nome = nome
        self.idade = idade
        self.profissao = profissao
        Pessoa.total_pessoas += 1

    def apresentar(self):
        return f"Olá meu nome é {self.nome}, tenho {self.idade} anos e faço {self.profissao} "

    @classmethod
    def total(cls):
        return cls.total_pessoas   
    
def testbanch():
    pessoa1 = Pessoa("Thomas", 19, "Engenharia")
    pessoa2 = Pessoa("Beatriz", 31, "Medicina")
    pessoa3 = Pessoa("João", 22, "Direito")

    print(f"Total pessoas: {Pessoa.total()}")
    print(pessoa1.apresentar())
    print(pessoa2.apresentar())    
    print(pessoa3.apresentar())

if __name__ == "__main__":
    testbanch()