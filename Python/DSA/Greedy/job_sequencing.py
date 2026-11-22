def job_sequencing(jobs):
    if not jobs:
        return [], 0

    if any(deadline <= 0 for _, deadline, _ in jobs):
        raise ValueError("Deadlines must be positive integers.")

    if any(profit < 0 for _, _, profit in jobs):
        raise ValueError("Profits cannot be negative.")
    sorted_jobs = sorted(jobs, key=lambda job: job[2], reverse=True)

    max_deadline = max(deadline for _, deadline, _ in jobs)
    slots = [None] * (max_deadline + 1)

    total_profit = 0

    for job_id, deadline, profit in sorted_jobs:
        for slot in range(min(deadline, max_deadline), 0, -1):
            if slots[slot] is None:
                slots[slot] = job_id
                total_profit += profit
                break

    scheduled_jobs = [job_id for job_id in slots[1:] if job_id is not None]

    return scheduled_jobs, total_profit


if __name__ == "__main__":
    jobs = [
        ("A", 2, 100),
        ("B", 1, 19),
        ("C", 2, 27),
        ("D", 1, 25),
        ("E", 3, 15)
    ]

    selected, profit = job_sequencing(jobs)

    print("Scheduled jobs:", selected)  
    print("Maximum profit:", profit)    