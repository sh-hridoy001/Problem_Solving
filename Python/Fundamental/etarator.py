def generatorExample():
    yield "P"
    yield "Y"
    yield "T"
    yield "H"
    yield "O"
    yield "N"
result = generatorExample()
for k in result:
    print(k)