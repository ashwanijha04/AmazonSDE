# Arrays and Strings

**[1] TwoSum**:

``` 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


Example 1:
-------------------
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
-------------------

Example 2:
------------------
Input: nums = [3,2,4], target = 6
Output: [1,2]
-------------------

Example 3:
-------------------
Input: nums = [3,3], target = 6
Output: [0,1]
-------------------
```

-----------



**[2] Longest Substring Without Repeating**:

````
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
--------------------
Input: s = "abcabcbb"
Output: 3
--------------------

Example 2:
--------------------
Input: s = "bbbbb"
Output: 1
--------------------

Example 3:
--------------------
Input: s = "pwwkew"
Output: 3
--------------------

````


-----------



**[3] String to Integer (atoi)**:

```
Implement atoi which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.

Example 1:
--------------------
Input: str = "42"
Output: 42
--------------------

Example 2:
--------------------
Input: str = "   -42"
Output: -42
--------------------

Example 3:
--------------------
Input: str = "4193 with words"
Output: 4193
--------------------

```


-----------



**[4] Container With Most Water**:

```
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Example 1:
--------------------
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
--------------------

Example 2:
--------------------
Input: height = [1,1]
Output: 1
--------------------

Example 3:
--------------------
Input: height = [4,3,2,1,4]
Output: 16
--------------------

```


-----------



**[5] Integer to Roman**:

```
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

 

Example 1:
--------------------
Input: num = 3
Output: "III"
--------------------

Example 2:
--------------------
Input: num = 4
Output: "IV"
--------------------

Example 3:
--------------------
Input: num = 9
Output: "IX"
--------------------
```


-----------



**[6] Roman to Integer**:

```
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:
--------------------
Input: s = "III"
Output: 3
--------------------

Example 2:
--------------------
Input: s = "IV"
Output: 4
--------------------

Example 3:
--------------------
Input: s = "IX"
Output: 9
--------------------
```


-----------

**[7] ThreeSum**:

``` 
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
Notice that the solution set must not contain duplicate triplets.


Example 1:
--------------------
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
--------------------

Example 2:
--------------------
Input: nums = []
Output: []
--------------------


Example 3:
--------------------
Input: nums = [0]
Output: []
--------------------
```
