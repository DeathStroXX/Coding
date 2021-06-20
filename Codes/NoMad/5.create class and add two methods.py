class TwoMethods():
    def __init__(self):
        self.s = ""
    def GetInput(self):
        self.s = input("Enter the input in lower case: ")

    def PrintOutput(self):
        print("Output in upper case is: ",self.s.upper())

object = TwoMethods()
object.GetInput()
object.PrintOutput()
