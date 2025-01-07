science = ["Physics", "Chemistry", "Biology", "Mathematics"]
arts = ["History", "Geography", "Political Science", "Literature"]
commerce = ["Accounting", "Economics", "Business Studies", "Mathematics"]
streams = [science, arts, commerce]

all_subjects = []
for stream in streams:
    all_subjects.extend(stream)

unique_subjects = set(all_subjects)

print("Original streams:")
for i, stream in enumerate(streams):
    if i == 0:
        print("Science:", stream)
    elif i == 1:
        print("Arts:", stream)
    else:
        print("Commerce:", stream)

print("\nRepeating subjects:")
for subject in all_subjects:
    if all_subjects.count(subject) > 1:
        print(subject)

print("\nUnique subjects:")
for subject in unique_subjects:
    print(subject)
