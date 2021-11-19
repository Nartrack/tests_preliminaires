import python_example as m


assert m.__version__ == '0.0.1'
assert m.add(1, 2) == 3
assert m.subtract(1, 2) == -1

print(m.add(0, 0))

#name = input("Bonjour, quel est votre prénom ?")

print(m.hello(""))

#test des keywords arguments

print(m.add(i=3, j=5)) 
print(m.add(i=3, j=5)==8) #résultat attendu : 8 ; OK

#test des keywords arguments avec un dictionnaire
kwargs = {"i":3, "j":5}

print(m.add(**kwargs)) 
print(m.add(**kwargs)==8) #résultat attendu : 8 ; OK

#test des keywords arguments avec la notation simplifiée
kwargs = {"i":3, "j":5}

print(m.subtract(**kwargs))
print(m.subtract(**kwargs)==-2) #résultat attendu : -2 ; OK

#-------------------------------------
#----Test des arguments par défaut----

print("\nTest des arguments par défaut\n")

kwargs = {"i":3, "j":5}

print(m.add(**kwargs)) 
print(m.add(**kwargs)==8) #résultat attendu : 8 ; OK

print(m.add())
print(m.add()==3) #résultat attendu : 3 (c'est ce qui a été noté dans le code c++)

#test avec un seul des deux arguments :
kwargs = {"j":5}

print(m.add(**kwargs))
print(m.add(**kwargs)==6) #résultat attendu : 6, car la valeur par défaut de i est 1.

#--------------------------------------
#----Test de l'export des variables----

print("\nTest de l'export des variables\n")

print("m.la_reponse : ", m.la_reponse)

print("m.quoi : ", m.quoi)

