def max_area(height):
    left = 0
    right = len(height) - 1
    maximum = 0

    while left < right:
        width = right - left
        current_height = min(height[left], height[right])

        maximum = max(maximum, width * current_height)

        if height[left] < height[right]:
            left += 1
        else:
            right -= 1

    return maximum


if __name__ == "__main__":
    heights = [1, 8, 6, 2, 5, 4, 8, 3, 7]

    print("Maximum water:", max_area(heights))