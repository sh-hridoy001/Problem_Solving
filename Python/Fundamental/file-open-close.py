def program2():

    f = open("MyFile.txt","w")
    line1 = input("Enter the first line text:")
    line2 = input("Enter the second line text:")
    line3 = input("Enter the third line text:")
    new_line = "\n"
    f.write(line1)
    f.write(new_line)
    f.write(line2)
    f.write(new_line)
    f.write(line3)
    f.write(new_line)
    f.close()

program2()