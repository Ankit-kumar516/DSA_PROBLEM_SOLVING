# cook your dish here
test_cases = int(input())

for _ in range(test_cases):
    num_monsters, health_increment = map(int, input().split())
    health_points = list(map(int, input().split()))
    health_points.sort(reverse=True)
    min_attack_stat = 0
    for index in range(num_monsters):
        required_attack = health_points[index] + health_increment * index
        if required_attack > min_attack_stat:
            min_attack_stat = required_attack
    print(min_attack_stat)
