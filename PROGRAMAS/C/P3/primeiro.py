batata=0
entrada = input("qual sua idade, qual o ano atual e qual é seu nome?").split()
batata = int(entrada[0])
ano = int(entrada[1])
nome = str(entrada[2])
idade=batata

while batata <batata+1 and batata != 0:
    if batata==idade:
        print("o",nome,"tem",batata,"anos")
    if(batata<idade and batata != 1):
        print("o",nome,"tinha",batata,"anos em", ano-1)
    if(batata==1):
        print("o",nome,"tinha",batata,"ano em", ano-1)
    batata -= 1
    ano -= 1



    