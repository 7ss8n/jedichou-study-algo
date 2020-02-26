class FamilyMember:
    
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __eq__(self, other):
        return self.age == other.age

    def __gt__(self, other):
        return self.age > other.age

def binary_search_object(lst, tgt):
    low = 0;
    high = len(lst) - 1;

    while low <= high:
        mid = low + high
        guess = lst[mid]
        if guess == tgt:
            return mid
        if guess > tgt:
            high = mid - 1
        else:
            low = mid + 1
        
    return None


if __name__ == "__main__":

    cici = FamilyMember('CiCi', 7)
    dad = FamilyMember('Jedi', 43)
    mom = FamilyMember('Becky', 37)
    grandfather = FamilyMember('ChuHe', 73);
    grandmonther = FamilyMember('BiYun', 68);
    family = [cici, mom, dad, grandmonther, grandfather]

    idx = binary_search_object(family, grandmonther)
    print(idx)

