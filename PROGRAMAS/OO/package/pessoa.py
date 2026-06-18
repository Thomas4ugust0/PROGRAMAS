class Pessoa:
    def __init__(self, altura, idade, peso):
        self.altura = altura
        self.idade = idade
        self.peso = peso
 

    def calculoimc(self):
        
        x = self.peso/(self.altura*self.altura)
        return x
    
    


        
        