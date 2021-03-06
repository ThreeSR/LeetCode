class CQueue:
    def __init__(self): # 两个栈
        self.A, self.B = [], []

    def appendTail(self, value: int) -> None: # 一个栈用于加元素
        self.A.append(value)

    def deleteHead(self) -> int: # 另一个栈用于出元素
        if self.B: return self.B.pop()
        if not self.A: return -1
        while self.A:
            self.B.append(self.A.pop())
        return self.B.pop()


# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()