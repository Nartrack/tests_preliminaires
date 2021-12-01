import app as m
from mpi4py import MPI

comm = MPI.COMM_WORLD
rank = comm.Get_rank()
print(comm, rank)
'''
if rank == 0:
    data = {'a': 7, 'b': 3.14}
    comm.send(data, dest=1, tag=11)
elif rank == 1:
    data = comm.recv(source=0, tag=11)
'''

fam1 = m.famille("Augereau")
print(fam1.nom + "\n")

fam1.nom = "Schorter"
fam1.hello_nom()
print("")

fam2 = m.famille_part("de", "Montbron")
fam2.hello_nom()
print("")

moi = m.personne("Gilles", fam1)
moi.bonjour()