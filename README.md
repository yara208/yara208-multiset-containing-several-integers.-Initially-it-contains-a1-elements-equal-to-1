You have a multiset containing several integers. Initially, it contains a1 elements equal to
1, a2 elements equal to 2, ..., an elements equal to 𝑛.
You may apply two types of operations:
● choose two integers 𝑙 and 𝑟 (𝑙≤𝑟), then remove one occurrence of 𝑙, one occurrence of 𝑙+1, ...,
one occurrence of 𝑟 from the multiset. This operation can be applied only if each number from 𝑙
to 𝑟 occurs at least once in the multiset
● choose two integers 𝑖 and 𝑥 (𝑥≥1), then remove 𝑥 occurrences of 𝑖 from the multiset. This
operation can be applied only if the multiset contains at least 𝑥 occurrences of 𝑖
What is the minimum number of operations required to delete all elements from the multiset?
Explanation of sample 1
1 4 1 1
a1 = number of occurrence for number 1 is 1
a2 = number of occurrence for number 2 is 4
a3 = number of occurrence for number 3 is 1
a4 = number of occurrence for number 4 is 1
This multiset equivalent to {1, 2,2,2,2, 3, 4}
solution :
- Use first operation from (l = 1 to r = 4) result: {2,2,2}
- Use second operation (i = 2 and x= 3) result: {}

![pp4](https://user-images.githubusercontent.com/88750144/196745892-45c8d950-e9aa-40f2-acf7-c11993bb57ad.PNG)
