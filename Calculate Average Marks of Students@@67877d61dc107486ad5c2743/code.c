n = int(input())  # Number of students
total_marks = 0

for _ in range(n):
    data = input().split()
    marks = float(data[-1])  # The last element is the marks
    total_marks += marks

average_marks = total_marks / n
print(f"Average Marks: {average_marks:.2f}")


