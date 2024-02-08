list1 = [1, 3, 5, 7, 9]
list2 = [2, 4, 6, 8, 10]

result_list = []

for num in list1:
    if num % 2 != 0:
        result_list.append(num)

for num in list2:
    if num % 2 == 0:
        result_list.append(num)
print(result_list)

