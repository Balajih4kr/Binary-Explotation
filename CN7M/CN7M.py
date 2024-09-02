import os

print("                            ______   _   __   _____   __  ___")
print("                           / ____/  / | / /  /__  /  /  |/  /")
print("                          / /      /  |/ /     / /  / /|_/ / ")
print("                         / /___   / /|  /     / /  / /  / / ")
print("                        |_____/  /_/ |_/     /_/  /_/  /_/   ")

print("\n")
print("                                               Credits => BALAJI")
print("\n")
print("[!] NOTE : This Search is Inside within the Directory\n\n")
print("[!] NOTE : File Format --> .txt\n\n")
filename = input("Enter your file name : ")
if os.path.exists(filename):
    print("[+] Starting searching with you Directory\n\n")
    

    print("Bytes are Reading from the File ...\n\n")

    file = open(filename, 'r')

    render = file.read()

    result=render.split(".")


    def find_repeated_values(data):
        occurrences = {}

        for item in data:
            if item in occurrences:
                occurrences[item] += 1
            else:
                occurrences[item] = 1

        
        repeated_values = [item for item, count in occurrences.items() if count > 1]

        return repeated_values


    print("Generating Payload ...")
    print("\n")
    repeated = find_repeated_values(result)
    for i in range(len(repeated)):
        print(f"Possibility of Payloads ==>  {repeated[i]}")


else:
    print("\n")
    print("[!] No such file Found")


