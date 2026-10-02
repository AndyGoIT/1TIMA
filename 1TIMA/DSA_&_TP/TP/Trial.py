import time

text = "Good habits lead to a brighter future. Keep Learning, Keep Going!"
print("Good habits lead to a brighter future. Keep Learning, Keep Going!")
input ("Press Enter When You're Ready...")
start_time = time.time()
user_input = input("Type The Text:\n")
end_time = time.time()
time_taken =  end_time - start_time
#Calculate Results
words = len(text.split())
wpm = (words / time_taken) * 60
#Count Mistake (Simple Comparison)
mistakes = sum(1 for a, b in zip(text, user_input) if a != b)
accuracy = (1 - mistakes / len(text)) * 100
print(f"\nWPM: {wpm:.1f}")
print(f"Accuracy: {accuracy:.1f}%")
print(f"Mistakes: {mistakes}")
print(f"Time Taken: {time_taken:.1f} seconds") 