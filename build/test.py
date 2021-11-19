import main as m

hello_objet = m.hello("Gilles")
hello_objet.hello_nom()
print("")
hello_objet.nom = "Hugues"
print(hello_objet.nom + "\n")
hello_plus_objet = m.hello_plus("Louis")
hello_plus_objet.hello_nom()