"..................Encapsulation....................................."
print("ENCAPSULATION")

class student:
    def __init__(self,name):
        self.__name= name
    def show(self):
        print("Name :",self.__name)
s = student("Hridoy")
s.show()
