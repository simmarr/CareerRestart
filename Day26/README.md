# Day 26 - Mission October

## DSA

### Binary Search

Revised standard binary search on a sorted array.

Key rules:

- `nums[mid] < target` → search right
- `nums[mid] > target` → search left
- `nums[mid] == target` → found

Complexity:
- Time: O(log n)
- Space: O(1)

### Binary Search on Answer

Learned that binary search can be used even when we are not directly
searching a sorted array.

The important requirements are:

1. There is a range of possible answers.
2. We can check whether a candidate answer is feasible.
3. The feasibility condition is monotonic.

Example:

NO NO NO YES YES YES

We can binary search to find the first valid answer.

### Problems

#### Koko Eating Bananas

Search space:
- Minimum speed = 1
- Maximum speed = largest pile

For each candidate speed, calculate the hours required.

If hours > allowed hours:
- Speed is too slow.
- Search larger speeds.

Otherwise:
- Speed works.
- Store it and search for a smaller valid speed.

#### LeetCode 1011 - Capacity To Ship Packages Within D Days

Search space:
- Minimum capacity = maximum individual package weight
- Maximum capacity = sum of all package weights

For each candidate capacity, simulate loading packages in their original
order and calculate the number of days required.

If daysNeeded > days:
- Capacity is too small.
- Search right.

Otherwise:
- Capacity works.
- Search left for a smaller valid capacity.

Main takeaway:

Range of answers + feasibility check + monotonic property
→ consider Binary Search on Answer.

---

## Core CS - Computer Networks

Studied:

- Private IP addresses
- Public IP addresses
- Routers
- NAT
- PAT
- Role of ports in NAT

Detailed notes are stored in:

ComputerNetworks/Lesson05_IP_NAT_Routers.md

Networking mental model so far:

DNS → TCP → TLS → HTTP
        +
IP routing and NAT

---

## Web Development

Continued working on the existing `Day25/WebDev` project.

Learned:

- DOM manipulation using `textContent`
- Selecting elements with `getElementById`
- Responding to click events
- Changing element state using `classList.add()`
- Keeping styling in CSS instead of putting all styling inside JavaScript

Example idea:

JavaScript decides WHEN a state changes.
CSS decides HOW that state looks.

---

## Day 26 Takeaways

1. Binary search is not limited to searching sorted arrays.
2. Monotonic search spaces can often be binary searched.
3. NAT allows private-network devices to communicate through public addressing.
4. JavaScript can modify the DOM dynamically.
5. CSS classes provide a cleaner way to represent visual states.