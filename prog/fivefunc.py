#I will be using a context manager just to prevent any leaks, it is also considered best practice when it comes to working with files 
with open('/mnt/d/UPY/Code_1/prog/notes.txt', 'r') as f:
    filecontent = f.read()
    print(filecontent)
#since the context manager takes care of opening and closing the file for us, it also considered best practice
    f.seek(0)
    def lineT():
        linenum = 0
        for line in f:  
            if line[0] not in 'T':
                linenum += 1
        print("\nLines that do not start with T =", linenum)
    lineT()

    def words():
        words = filecontent.split()
        print("Total amount of words: ", len(words))
    words()

    def the():
        string = filecontent
        substring = "the"
        substring2 = "The"
        count = string.count(substring)
        count2 = string.count(substring2)

        print("Total 'the' in file: ", count + count2)
    the()