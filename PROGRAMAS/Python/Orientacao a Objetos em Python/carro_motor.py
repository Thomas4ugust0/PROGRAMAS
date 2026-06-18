'''crie duas classes em python: carro e motor. o carro deve possuir 
motor como atributo . implemente um metodo que exiba uma mensagem 
indicando que o carro esta funcionando com seu motor'''

class Motor:
    def __init__(self, tipo, potencia):
        self.tipo = tipo
        self.potencia = potencia
    
    def descrever(self):
        return f"{self.tipo} de {self.potencia} cavalos"

class Carro:
    def __init__(self, marca, modelo, motor):
        self.marca = marca
        self.modelo = modelo
        self.motor = motor

    def funcionar(self):    
        descricao_motor = self.motor.descrever()
        print(f"O carro {self.marca} {self.modelo} está funcionando com seu motor {descricao_motor}")


motor1 = Motor(tipo="200 TSI", potencia=128)
carro1 = Carro(marca="Volkswagen", modelo="Nivus", motor = motor1 )

carro1.funcionar()