"......................Inheritance................................"
print("INHERITANCE")
class Animal:
    def sound(self):
        print("Animal sound")
class Dog(Animal):
    def sound(self):
        print("Dog Bark")
d = Dog()
d.sound()