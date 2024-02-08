
my_list = [1, 2, 1, 1, 1, 1, 2, 2]
new_list = []

for item in my_list:
    if item not in new_list:
        new_list.append(item)

print(new_list)
