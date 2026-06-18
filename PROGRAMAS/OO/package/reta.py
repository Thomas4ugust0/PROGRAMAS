class Reta:
    
    def __init__(self,a , b):
        self.a = a
        self.b = b

    def interpolar(self, x):

        y = self.a*x + self.b

        return y
    
    def inverter(self, y):
        if self.a != 0:
            
            x = (y-self.b)/self.a

        else:
            print("divisão por zero, editar o parâmetro 'a'")

        return x    
    
    def sair(self):
        return 0
    
    def menu(self):
        entrada = input("Escolha uma opção:\n Para interpolar (obter y), digite 1. \n Para inverter (obter x), digite 2. \n Para sair, digite 3.\n")
        entrada = int(entrada)
        if entrada == 1:
            x = input("Insira o valor de x:")
            print(f"{self.interpolar(float(x))}")
            self.menu()
        elif entrada == 2:
            y = input("Insira o valor de y:")
            print(f"{self.interpolar(float(y))}")
            self.menu()
        else:
            self.sair()
    
def testbanch():
    reta_2 = Reta(2.0, 3.0)
    print("testando a interpolação com x=5")
    saida = reta_2.interpolar(5.0)
    print(saida)
    reta_2.menu()

if __name__ == "__main__":

    testbanch()

