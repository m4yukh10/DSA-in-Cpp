ls = [11, 27, 1, 86, 2, 81]

for i in range(0, len(ls)):
    min_index = i  # Assume the min is the first element
    for j in range(i+1, len(ls)):
        if ls[j] < ls[min_index]:
            min_index = j  # Update min_index if a smaller element is found
    # Swap the found minimum element with the first element
    ls[i], ls[min_index] = ls[min_index], ls[i]

print(ls)
