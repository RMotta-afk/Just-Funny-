def defNum(sequency):
    p = (str(sequency))
    j = []

    for i in range(len(p)):
        l = []
        flag = False 
        last_int = 'null'

        for q in range(len(p)): 
            if q == 0 and i > 0:
                q = i
            item = int(p[q])

            if last_int == 'null':
                last_int = item 
                l.append(item)
                continue 

            else:
                if last_int == 9 and item == 0: 
                    flag = True 
                elif last_int != 9 and last_int + 1 == item:
                    flag = True
                else: 
                    flag = False 
                last_int = item 

            if flag:
                l.append(item)
            elif flag == False and last_int != 'null':
                break 

        j.append(l)
    bigger_array = 0
    index = 0

    for item in j:
        if index > 0:
            bigger_array = item 
        if len(str(item)) > len(str(bigger_array)):
            bigger_array = item 
    transform = list(map(str,bigger_array))
    print(''.join(transform))    

def is_number(parameter):

    try: 
        int(parameter)
        return True 

    except ValueError:
        return False 


while True:

    question = (str(input("Type a number: ")))
    if is_number(question): 
        defNum(question)
        break
    else:
        print("You did not enter a number. Try again!") 
