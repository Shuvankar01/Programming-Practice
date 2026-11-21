def activity_selection(start, finish):
    if len(start) != len(finish):
        raise ValueError("Start and finish arrays must have equal length.")

    activities = sorted(
        zip(start, finish),
        key=lambda activity: activity[1]
    )

    selected = []
    last_finish = float("-inf")

    for activity_start, activity_finish in activities:
        if activity_start >= last_finish:
            selected.append((activity_start, activity_finish))
            last_finish = activity_finish

    return selected


if __name__ == "__main__":
    start = [1, 3, 0, 5, 8, 5]
    finish = [2, 4, 6, 7, 9, 9]

    result = activity_selection(start, finish)

    print("Selected activities:", result)
    print("Maximum activities:", len(result))