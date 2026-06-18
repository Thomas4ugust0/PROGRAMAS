class Curso:
    def __init__(self, nome:str, duracao: int):
        self.nome = nome
        self.duracao = duracao  

    def descricao(self):
        return f"curso de {self.nome}, que tem duração de {self.duracao} horas/aula"
    

class Professor:
    def __init__(self, nome: str):
        self.nome = nome
        self.curso_atual = None
        

    def dar_aula(self):
        if(self.curso_atual):
            return f"O professor {self.nome} está lecionando o {self.curso_atual.descricao()}"
        else:
            return f"O professor {self.nome} não está dando aula no momento"



professor = Professor("Henrique")
curso1 = Curso("Orientação a Objetos", 60)

professor.curso_atual= curso1 
print(professor.dar_aula())
