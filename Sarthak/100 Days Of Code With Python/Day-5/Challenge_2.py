student_score = input("Enter the score of stucents: ").split()

for n in range(0,len(student_score)):
    student_score[n]=int(student_score[n])

highest_score = 0

for score in student_score:
    if score>highest_score:
        highest_score = score
    
print(f"Highst score of student is{highest_score}")
