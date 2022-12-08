class FiniteAutomation:
    def __init__(self,filename):
        self.__states = []
        self.__alphabet = []
        self.__transitions = {}
        self.__initialStates = None
        self.__finalStates = []
        self.readfromFile(filename)

    
    def parseLine(self, line):
        return line.strip().split(" ")

    
    def readfromFile(self,filename):
        with open(filename,"r") as file:
            states = file.readline()
            self.__states = self.parseLine(states)

            alphabet = file.readline()
            self.__alphabet = self.parseLine(alphabet)

            transitionread = file.readline()
            transitions = transitionread.strip().split(";")

            for transition in transitions:
                curr = self.parseLine(transition)
                if(curr[0],curr[1]) in self.__transitions.keys():
                    self.__transitions[(curr[0],curr[1])].append(curr[2])

                else:
                    self.__transitions[(curr[0],curr[1])]=[curr[2]]

            initialState = file.readline()
            self.__initialStates = initialState.strip()

            finalStates = file.readline()
            self.__finalStates = self.parseLine(finalStates)
    

    def display_Q(self):
        print("Set of States :",self.__states) #(Q)

    def display_E(self):
        print("The alphabet:",self.__alphabet)#(E)

    def displayTransitions(self):
        print("Transitions: ")
        for tran in self.__transitions.keys():
            print("{0},{1} --> {2}".format(tran[0],tran[1],self.__transitions[tran]))

    def display_q0(self):
        print("Initial state: ", self.__initialStates)#q0


    def display_F(self):
        print("Final States: ", self.__finalStates)

    
    def displayMenu(self):
        print("\n")
        print("Options:")
        print("1.The set of states")
        print("2.The alphabet")
        print("3.Transitions")
        print("4.Initial state")
        print("5.Final states")
        print("0.Exit")
        print("\n")

def run():
    fa= FiniteAutomation("finite_automation.in.txt")
    while True:
        fa.displayMenu()
        opt = int(input("Choose an option: "))
        match opt:
            case 1:
                fa.display_Q()

            case 2:
                fa.display_E()

            case 3:
                fa.displayTransitions()

            case 4:
                fa.display_q0()

            case 5:
                fa.display_F()

            case 0:
                print("so long...")
                return

            case _:
                print("Choose one of the options!!!")
        input("Press Enter to continue...")

run()