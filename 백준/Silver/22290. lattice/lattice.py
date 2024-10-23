# ------------------------------------------------------------------------------
# - Title       : 22290 - lattice
# - Start Time  : 24-10-24, 06:18
# - End Time    : 24-10-24, 07:48
# - Try         : 2(1 : Automatic data conversion)
# - Category    : gcd, function fmplementation, geometry
# - Language    : PyPy3
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# 한국어 문제 요약
# - 문제    : 
# 함수 P1을 작성하라:

# 점 (x, y)는 x와 y가 모두 정수일 때 격자점(lattice point)이라고 한다.
# 입력 매개변수: 정수 x1, y1, x2, y2, x3, y3 세 점 (x1, y1), (x2, y2), (x3, y3)은 동일한 직선 위에 있지 않다.
# 각 입력 매개변수의 절댓값은 2^1024 이하이다.
# 반환 값: 세 꼭짓점 (x1, y1), (x2, y2), (x3, y3)을 갖는 삼각형의 둘레 위에 있는 격자점(꼭짓점을 포함)을 반환한다.
# 예를 들어, 삼각형의 꼭짓점이 (0,0), (2,2), (3,0)인 경우 둘레에는 6개의 격자점이 있다: (0,0), (1,1), (2,2), (3,0), (2,0), (1,0).
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# 한국어 주석
# 이 문제는 최대공약수(GCD)를 사용하여 삼각형의 변에 있는 정수 좌표를 찾는 문제이다.

# 우선, 파이썬에는 최대공약수를 구하는 math.gcd() 함수가 있으므로 이를 사용하여 GCD를 구한다.
# 각 변에 대하여 두 점의 x좌표가 같다면 y축 좌표의 차이가 결과이며 두 점의 y좌표가 같다면 x좌표의 차이가 결과이다.
# 두 경우가 아니라면 x축의 좌표의 차이에 기약분수 형태의 기울기의 분모를 나눈 값이다.
# 근데 수학적으로 잘 정리하면 y좌표의 차이와 x좌표 차이의 최대공약수 인 것을 알 수 있다.

# 따라서 변 하나에 대하여 다음과 같이 작성한다.
# if y1 == y2:
#     cnt += abs(x2 - x1)
# elif x1 == x2:
#     cnt += abs(y2 - y1)
# else :
#     diffY = abs(y2 - y1)
#     diffX = abs(x2 - x1)
#     gcd = math.gcd(diffX, diffY)
#     diffX //= gcd
#     cnt += abs(x2 - x1) // diffX
    
# 이후 수학적으로 정리하고 math.gcd() 함수의 반환 값에 대한 원리로 깔끔히 정리하면 다음과 같다
# diffY = abs(y2 - y1)
# diffX = abs(x2 - x1)
# cnt += math.gcd(diffX, diffY)

# 또한, 각 변에 대한 처리를 함수로 정리할 수도 있다.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# English Problem Summary
# - Question  : 
# Write a function P1:

# A point (x,y) is called a lattice point iff both x and y are integers.
# input parameter: integers x1, y1, x2, y2, x3, y3
# Three points (x1, y1), (x2, y2), (x3, y3) are not on a same straight line.
# The absolute value of each input parameter is less than or equal to 2^1024.
# return value: the number of the lattice points (including vertexes) on the perimeter of the triangle with three vertexes (x1, y1), (x2, y2), (x3, y3)
# For example, if a triangle has vertexes (0,0),(2,2),(3,0) then its perimeter has 6 lattice points: (0,0),(1,1),(2,2),(3,0),(2,0),(1,0).
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# English Comment
# This problem involves finding the integer points on the sides of a triangle using the greatest common divisor (GCD).

# First, Python provides a built-in math.gcd() function that can be used to calculate the GCD of two numbers. For each side of the triangle:

# If the two points have the same x-coordinate, the result is simply the difference in their y-coordinates.
# If the two points have the same y-coordinate, the result is the difference in their x-coordinates.
# If neither of the above cases applies, the number of integer points on the line segment is given by dividing the difference in the y-coordinates
# by the difference in the x-coordinates after simplifying the slope to its reduced form. Mathematically, this is equivalent to finding the GCD of the absolute differences in the x and y coordinates.
# Thus, the logic for one side of the triangle can be written as follows:

# if y1 == y2:
#     cnt += abs(x2 - x1)
# elif x1 == x2:
#     cnt += abs(y2 - y1)
# else:
#     diffY = abs(y2 - y1)
#     diffX = abs(x2 - x1)
#     cnt += math.gcd(diffX, diffY)
# After simplifying the mathematical reasoning, we can directly use the GCD of the differences in x and y to determine the number of integer points on the line segment:

# diffY = abs(y2 - y1)
# diffX = abs(x2 - x1)
# cnt += math.gcd(diffX, diffY)
# Additionally, this process can be encapsulated in a function for cleaner code if needed, ensuring that each side of the triangle is processed uniformly.
# ------------------------------------------------------------------------------

import math

def P1(x1,y1,x2,y2,x3,y3):
    cnt = 0
    # Side 1
    diffY = abs(y2 - y1)
    diffX = abs(x2 - x1)
    cnt += math.gcd(diffX, diffY)
    
    # Side 2        
    diffY = abs(y3 - y2)
    diffX = abs(x3 - x2)
    cnt += math.gcd(diffX, diffY)
    
    # Side 3
    diffY = abs(y3 - y1)
    diffX = abs(x3 - x1)
    cnt += math.gcd(diffX, diffY)    

    return cnt