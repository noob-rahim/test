class CricketScoreboard:
    def __init__(self, team1, team2):
        self.team1 = team1
        self.team2 = team2
        self.runs = 0
        self.wickets = 0
        self.overs = 0
        self.extras = 0

    def update_score(self, runs, wickets, overs, extras):
        self.runs += runs
        self.wickets += wickets
        self.overs += overs
        self.extras += extras

    def display_score(self):
        print(f"{self.team1}: {self.runs}/{self.wickets}, {self.overs} overs, Extras: {self.extras}")
        print(f"{self.team2} needs {self.runs + 1} runs to win")


def main():
    team1_name = input("Enter name of Team 1: ")
    team2_name = input("Enter name of Team 2: ")
    scoreboard = CricketScoreboard(team1_name, team2_name)

    while True:
        print("\n1. Update score")
        print("2. Display score")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            runs = int(input("Runs scored in the last ball: "))
            wickets = int(input("Wickets fallen in the last ball: "))
            overs = int(input("Overs bowled in the last ball: "))
            extras = int(input("Extras scored in the last ball: "))
            scoreboard.update_score(runs, wickets, overs, extras)
            print("Score updated successfully!")
        elif choice == '2':
            scoreboard.display_score()
        elif choice == '3':
            print("Exiting the scoreboard app. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter a valid option.")


if __name__ == "__main__":
    main()
