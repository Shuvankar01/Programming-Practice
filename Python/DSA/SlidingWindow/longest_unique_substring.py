def longest_unique_substring(text):
    seen = set()

    left = 0
    maximum = 0

    for right in range(len(text)):
        while text[right] in seen:
            seen.remove(text[left])
            left += 1

        seen.add(text[right])

        maximum = max(maximum, right - left + 1)

    return maximum


if __name__ == "__main__":
    text = "abcabcbb"

    print("Longest substring length:",
          longest_unique_substring(text))