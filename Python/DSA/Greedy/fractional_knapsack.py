def fractional_knapsack(capacity, items):
    if capacity < 0:
        raise ValueError("Capacity cannot be negative.")

    for value, weight in items:
        if weight <= 0:
            raise ValueError("Item weights must be positive.")

    items = sorted(
        items,
        key=lambda item: item[0] / item[1],
        reverse=True
    )

    total_value = 0.0
    selected_items = []

    for value, weight in items:
        if capacity == 0:
            break

        taken_weight = min(weight, capacity)
        fraction = taken_weight / weight

        total_value += value * fraction
        capacity -= taken_weight

        selected_items.append({
            "value": value,
            "weight_taken": taken_weight,
            "fraction": fraction
        })

    return total_value, selected_items


if __name__ == "__main__":
    items = [
        (60, 10),
        (100, 20),
        (120, 30)
    ]

    capacity = 50

    maximum_value, selected = fractional_knapsack(
        capacity, items
    )

    print("Maximum value:", maximum_value)
    print("Selected items:")

    for item in selected:
        print(item)