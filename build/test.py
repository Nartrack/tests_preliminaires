import main as m

fam1 = m.famille("Augereau")
print(fam1.nom + "\n")

fam1.nom = "Schorter"
fam1.hello_nom()
print("")

fam2 = m.famille_part("de", "Montbron")
fam2.hello_nom()
print("\n")

moi = m.personne("Gilles", fam1)
moi.bonjour()